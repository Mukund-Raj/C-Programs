/*
This problem was asked by Google.

Given the root of a binary tree, return a deepest node. 
For example, in the following tree, return d.

    a
   / \
  b   c
 /
d
Solution just level order traverse it and the alst node you traverse
is the deepest node 
*/

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

/*Level order traversal using queue insert left node then right node and so on*/
Node* LevelOrder(Node* root)
{
	queue<Node*>s;
	Node *temp=NULL;
	if(root==NULL)
	{
		cout<<"No element to display";
		return NULL;
	}
	else
	{
		s.push(root);
		while(!s.empty())
		{
		   temp=s.front();
		   s.pop();
		   cout<<temp->key<<" ";
		   
		   if(temp->left)
		   s.push(temp->left);
		   
		   if(temp->right)
		   s.push(temp->right);
		   
		}
	}
	return temp;
}


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
	Node* temp=LevelOrder(root);
	if(temp!=NULL)
	cout<<"\ndeepest node is"<<temp->key;
	else
	cout<<"The fuckng is tree is empty";
	
	return 0; 
} 

