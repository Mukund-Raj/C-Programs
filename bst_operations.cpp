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

void inorder(Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}

Node *minvaluenode(Node *root)
{
	Node *current=root;
	
	while(current && current->left!=NULL)
		current=current->left;
		
	return current;	
}

//function to find minimum value in whole bst
//simple the left most element is minimum as left contains the minimum value 
//so traverse until the left node is NULL

//worst case O(n) for left skewed tree
int minimum_value_in_bst(Node *root)
{
	Node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp->key;
}

//worst case O(n) for right skewed tree
int maximum_value_in_bst(Node *root)
{
	Node *temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	return temp->key;
}

Node *deletenode(Node *root,int key)
{
	//base case
	if(root==NULL)
	return root;
	
	//if key's to be deleted is smaller than the root's key
	//then root->left =deletenode(root->left,key)
	//why because if 10 11 12 13 14 and 12 is to be deleted then 11 should be
	//connected to 13 and this "root->left =deletenode(root->left,key)" let us do it
	if(key<root->key)
	root->left=deletenode(root->left,key);
	
	//if key's to be deleted is greater than the root's key
	//then root->left =deletenode(root->left,key)
	else if(key>root->key)
	root->right=deletenode(root->right,key);

	//if key is same as root's key then 
	//check for the three conditions of deletion
	else{
		
		//node with only one child or no child
		if(root->left==NULL)
		{
			Node *temp=root->right;
			delete root;
			return temp;
		}
		
		else if(root->right==NULL)
		{
			Node *temp=root->left;
			delete root;
			return temp;
		}
		
		//node with two child get inorder's successor of that node
		//inorder successor always will be in its right subtree
		//so we call a function which gives us inorder's successor
		Node *temp=minvaluenode(root->right);
		
		//copy the inorder's successor's value
		
		root->key=temp->key;
		
		//delete the inorder successor
		root->right=deletenode(root->right,temp->key);
	}
	return root;
}


Node* search(Node *root,int key)
{
	if(root==NULL || root->key==key)
	return root;
	
	
	if(key<root->key)
	return search(root->left,key);
	
	
	return search(root->right,key);
	
}
//bst insertion
Node* insert(Node *root,int key)
{
	if(root==NULL)
	return newNode(key);	
	
	if(key<root->key)
	root->left=insert(root->left,key);
	
	if(key>root->key)
	root->right=insert(root->right,key);
	
	return root;
}

Node *findlca(Node *root,int a,int b)
{
	while(1 and root!=NULL)
	{
	
	if((a<root->key && b>root->key) || (a>root->key && b<root->key))
		return root;
	
	if(a<root->key)
	root=root->left;
	else 
	root=root->right;
	
	}
}

int main()
{
	int arr[]={50,30,20,70,100,80,90};
	Node *root=NULL;
	root=insert(root,arr[0]);
	for(int i=1;i<7;i++)
	{
	root=insert(root,arr[i]);
	}
	
	inorder(root);
	cout<<endl;
	/*if(search(root,10)!=NULL)
	cout<<endl<<"found";
	
	else cout<<" not found";
							
	cout<<"\ndeletion 50\n";
	root=deletenode(root,50);
	inorder(root);
	//root=deletenode(root,100);
	cout<<"\n minimum value in bst is"<<minimum_value_in_bst(root);
	cout<<"\n maximum value in bst is"<<maximum_value_in_bst(root);*/
	
	cout<<"\n lca of nodes 20 and 80 is ";
	Node *lca=findlca(root,80,90);
	if(lca!=NULL)
	cout<<lca->key;
	
	else
	cout<<"LCA not found";
	return 0;
}

