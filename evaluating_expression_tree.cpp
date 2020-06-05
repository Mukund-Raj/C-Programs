// C++ program to delete element in binary tree 
#include <bits/stdc++.h> 
using namespace std; 

/* A binary tree node has key, pointer to left 
child and a pointer to right child */
struct Node { 
	string key; 
	struct Node *left, *right; 
}; 

Node *newNode(char data)
{
	Node *node=new Node;
	node->key=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
}

bool isoperator(char ele)
{
	if(ele=='+'||ele=='-'||ele=='*'||ele=='/'||ele=='%')
	return true;
	
	return false;
}
int toint(string s)
{
	if(s[0]!='-')
	return stoi(s);
	else
	return stoi(string(s.begin()+1,s.end()));
	
}

//convert an expression into binary tree
Node* consexp(char postfix[])
{
	stack<Node *>et;
	Node *t1,*t2;
	for(int i=0;i<strlen(postfix);i++)
	{
		if(!isoperator(postfix[i]))
		{
			Node *t=newNode(postfix[i]);
			et.push(t);
		}
		else
		{
			Node *t=newNode(postfix[i]);
			t1=et.top();
			et.pop();
			t2=et.top();
			et.pop();
			
			t->right=t1;
			t->left=t2;
			et.push(t);
		}		
	}
	Node *t=et.top();
	et.pop();
	return t;
}

//for evaluating the binary tree
int eval(Node* root)
{
	//empty tree
	if(!root)
	return 0;
	
	//no child in left and right means integer
	if(!root->left && !root->right)
	{
		return toint(root->key);
	}
	
	
	//evaluate left subtree
	int lval=eval(root->left);
	
	//evaluate right tree
	int rval=eval(root->right);
	
	//check which operator to apply
	if(root->key=="+")
	return lval+rval;
	
	if(root->key=="-")
	return lval-rval;
	
	if(root->key=="*")
	return lval*rval;
	
	if(root->key=="%")
	return lval%rval;

	return lval/rval;	
}


void inorder(Node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}

// Driver code 
int main() 
{ 
	char postfix[]="52+32+%";
	Node* r=consexp(postfix);
	cout<<"the inorder is\n";
	inorder(r);
	
	cout<<"\nThe answer is:"<<eval(r);
	return 0; 
} 

