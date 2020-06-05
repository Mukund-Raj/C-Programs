// C++ program to delete element in binary tree 
#include <bits/stdc++.h> 
using namespace std; 

/* A binary tree node has key, pointer to left 
child and a pointer to right child */
struct Node { 
	char key; 
	struct Node *left, *right; 
}; 

int exp(Node* root)
{
	if(root->left)
	exp(root->left);
	
	if(root->right)
	exp(root->right);
	
}

// Driver code 
int main() 
{ 
	Node* root = newNode('*'); 
	root->left = newNode('+'); 
	
	root->left->left = newNode('3'); 
	root->left->right = newNode('2'); 
	
	root->right = newNode('+'); 
	root->right->left = newNode('4'); 
	root->right->right = newNode('5'); 


	return 0; 
} 

