// C++ program to delete element in binary tree 
#include <bits/stdc++.h> 
using namespace std; 

/* A binary tree node has key, pointer to left 
child and a pointer to right child */
struct Node { 
	int key; 
	struct Node *left, *right; 
}; 

Node *newNode(int data)
{
	Node *node=new Node;
	node->key=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
}

void preorder(Node* root)
{
	
}

/*
			 1
			/  \
		    2   3 
		   / \ / \
		   4 5 6 7

*/
// Driver code 
int main() 
{ 
	Node* root = newNode(1); 
	root->left = newNode(2); 
	
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	
	root->right = newNode(3); 
	root->right->left = newNode(6); 
	root->right->right = newNode(7); 

	cout<<"Level order traversal is "; 
	LevelOrder(root); 
	cout<<endl;
	cout<<"Pre-order traversal is "; 
	preorder(root);
	
	return 0; 
} 

