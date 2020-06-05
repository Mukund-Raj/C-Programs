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
//my version of get leaf count
/*
int countnodes(Node* root,int &count)
{
	
	if(root->left)
	countnodes(root->left,count);	
	
	if(root->right)
	countnodes(root->right,count);
	
	if(root->left==NULL && root->right==NULL)
	{
	 ++count;
	}
	return count;
	
}
*/
void levelorder(Node* node)
{
//	Node *temp=root;
	queue<Node*>level;
	level.push(node);
	while(!level.empty())
	{
		Node* ele=level.front();
		level.pop();
		if(ele->left)
		level.push(ele->left);
		
		if(ele->right)
		level.push(ele->right);
		
		
		cout<<ele->key<<" ";
	}
}


//utility to print the path
void printpath(int path[],int plen)
{
	for(int i=0;i<plen;i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
}

void printPathrecur(Node* node,int path[],int pathlen)
{
	if(node==NULL)
	return;
	
	//append this node to the path array
	path[pathlen]=node->key;
	pathlen++;
	
	//if it's a leaf then we reach the end of the path so print the path array
	if(node->left==NULL && node->right==NULL)
	{
		printpath(path,pathlen);
	}
	else
	{
		//recurse for both subtrees
		printPathrecur(node->left,path,pathlen);
		printPathrecur(node->right,path,pathlen);
	}
}

void printPaths(Node* node)
{
	int path[10];
	printPathrecur(node,path,0);
}

//checking if any path has the sum
bool haspathsum(Node* node,int sum)
{
	if(node==NULL)
	return (sum==0);
	else
	{
		int subsum=sum-node->key;
		return (haspathsum(node->left,subsum)||haspathsum(node->right,subsum));
			
	}	
}

void mirror(Node* node)
{
	if(node==NULL)
		return;
	else
	{
		//mirror the subtrees
		mirror(node->left);
		mirror(node->right);
		
		//after we reach a subtree we swap the node's left and right node's pointer
		Node* temp=node->right;
		node->right=node->left;
		node->left=temp;
	}
	//levelorder(node);
}

//on the net
int getleafcount(Node* node)
{
	if(node==NULL)
	return 0;
	
	if(node->left==NULL && node->right==NULL)
	return 1;
	
	else
	return getleafcount(node->left)+getleafcount(node->right);
}

/*
			 1
			/  \
		    2   3 
		   / \ / \
		   4 5 6 7
		  /  /
		  8  9
*/
// Driver code 
int main() 
{ 
	Node* root = newNode(1); 
	root->left = newNode(2); 
	
	root->left->left = newNode(4); 
	
	root->left->left->left =newNode(8); 
	
	root->left->right = newNode(5); 
	
	root->left->right->left = newNode(9); 
	
	root->right = newNode(3); 
	root->right->left = newNode(6); 
	root->right->right = newNode(7); 
	int count=0;
	
	//cout<<"Leaves nodes are"<<countnodes(root,count);
	/*cout<<"Leaves nodes are"<<getleafcount(root);
	cout<<endl;
	
	printPaths(root);
	cout<<endl<<haspathsum(root,11);
	*/
	levelorder(root);
	cout<<endl;
	
	mirror(root);
	
	levelorder(root);
	
	return 0; 
} 

