#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

//making the list on vector values and changing the head by double pointer
void make_linked_list(Node **head_ref,vector<int>::iterator start,vector<int>::iterator end)
{
	Node* head;
	if(*head_ref==NULL)
	{
		head=new Node();
		head->data=*start;
		head->next=NULL;
	}
	Node* fwd=head;
	
	for(auto it=start+1;it!=end;it++)
	{
		Node *node=new Node();
		node->data=*it;
		node->next=NULL;
		fwd->next=node;
		fwd=node;
	}
	*head_ref=head;
}

//printing the list
void printlist(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

Node* changeab(Node *a,Node *b)
{
	Node *r;
	if(a->data<=b->data)
	r=a;
	else
	r=b;
	
	r->next=NULL;
	return r;
	
}
void change(Node **headref)
{
	Node *head=*headref;
	Node *a=head,*b=head->next;
	
	*headref=changeab(a,b);
	while(a)
	{
		cout<<a->data<<" ";
		a=a->next;
	}
	while(b)
	{
		cout<<b->data<<" ";
		b=b->next;
	}
}

int main()
{
	Node *head=NULL;
	//vector<int>x{5,4,3,2,1};
	
	//make_linked_list(&head,x.begin(),x.end());
	
	//printlist(head);
	cout<<endl;
	//change(&head);
	//printlist(head);
	int *x;
	int y=10,a=7;
	x=&y;
	
	int **z=&x;
	
	cout<<x<<" "<<&y;
	cout<<"\n"<<*x<<" "<<&x<<" "<<z<<" "<<&z;
	
	*z=&a;
	cout<<"\n"<<*x;
	return 0;
}
