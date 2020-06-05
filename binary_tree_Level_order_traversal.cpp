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

/*Level order traversal using queue insert left node then right node nad so on*/
void LevelOrder(Node* root)
{
	queue<Node*>s;
	if(root==NULL)
	{
		cout<<"No element to display";
		return;
	}
	else
	{
		s.push(root);
		Node *temp=NULL;
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
	
}

void preorder(Node *root)
{
	stack<Node*>s;
	
	while(1)
	{
		while(root)
		{
			s.push(root);
			cout<<root->key<<" ";
			root=root->left;	
		}
		if(s.empty())
		break;
		
		Node *temp=s.top();
		s.pop();
		//cout<<temp->key<<" ";
		
		//traverse right subtree
		 root=temp->right;
		
		}
}

vector<int> inorder(Node *root)
{
	vector<int>v(0);
	
	v.push_back(0);
	
	stack<Node*>s;
	
	while(1)
	{
		while(root)
		{
			s.push(root);
			root=root->left;	
		}
		if(s.empty())
		break;
		
		Node *temp=s.top();
		s.pop();
		//printing the root of subtree
		cout<<temp->key<<" ";
		
		v.push_back(temp->key);
		
		//traverse right subtree
		 root=temp->right;
		}
		v.push_back(0);
		
		return v;
}

/*postorder using two stacks, first stack is used to push the current element
then while pop the stack s1 to s2 push the left and right node of taht element
to s1 continue that process until s1 becomes empty
and then print s2 
*/
void postorder(Node *root)
{
	stack<Node*>s1,s2;
	Node *temp=NULL;
	s1.push(root);
	while(!s1.empty())
	{
		temp=s1.top();
		s2.push(temp);
		s1.pop();	
		
		if(temp->left)
		s1.push(temp->left);
		
		if(temp->right)
		s1.push(temp->right);
	}
	
	while(!s2.empty())
	{
		cout<<s2.top()->key<<" ";
		s2.pop();
	}
}

/*
postorder using one stacks

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
	cout<<endl;
	cout<<"In-order traversal is "; 
	vector<int>v=inorder(root);
	
	cout<<"\nIn-order traversal stored in array\n";
	for(int x:v)
	cout<<x<<" "; 
	
	cout<<endl;
	cout<<"Post-order traversal is "; 
	postorder(root);
	return 0; 
} 

