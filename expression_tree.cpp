// C++ program to delete element in binary tree 
#include <bits/stdc++.h> 
using namespace std; 

/* A binary tree node has key, pointer to left 
child and a pointer to right child */
struct Node { 
	char key; 
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
	if(ele=='+'||ele=='-'||ele=='*'||ele=='/')
	return true;
	
	return false;
}

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
	char postfix[]="12+32+*";
	Node* r=consexp(postfix);
	cout<<"the inorder is\n";
	inorder(r);
	return 0; 
} 

