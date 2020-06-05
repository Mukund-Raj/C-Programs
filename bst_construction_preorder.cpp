#include <bits/stdc++.h> 
using namespace std; 


/* A binary tree node has key, pointer to left 
child and a pointer to right child */
struct Node { 
	int key; 
	struct Node *left, *right; 
};

Node *newnode(int data)
{
	Node *node=new Node;
	node->key=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
}

void inorder(Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}

Node * bst_const_preorder(int arr[],int size)
{
	stack<Node*>st;
	Node *root=NULL;
	root=newnode(arr[0]);
	
	st.push(root);
	
	Node *recent_popped=NULL;
	
	for(int i=1;i<size;++i)
	{
		recent_popped=NULL;
		while(!st.empty() && arr[i]>st.top()->key)
		{
			recent_popped=st.top();
			st.pop();
		}
		if(recent_popped!=NULL)
		{
		recent_popped->right=newnode(arr[i]);
		st.push(recent_popped->right);
		
		}
		else{
			st.top()->left=newnode(arr[i]);
			st.push(st.top()->left);
		}
	}
	return root;
}



int main()
{
	int arr[]={50,30,20,70,100};
	
	Node *root=bst_const_preorder(arr,5);
	cout<<"pre order \n";
	
	for(int x:arr)
	{
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<"inorder\n";
	inorder(root);
	return 0;
}
