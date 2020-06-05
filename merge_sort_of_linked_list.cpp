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

int c=0;
Node* sortedmerge(Node *a,Node *b)
{
	
	Node *result=NULL;
	
	if(a==NULL)
	{
		return (b);
	}
	if(b==NULL)
	{
		return (a);
	}
	if(a->data <= b->data)
	{
		c++;
		result=a;
		result->next=sortedmerge(a->next,b);
		
	}
	else
	{
		c++;
		result=b;
		result->next=sortedmerge(a,b->next);
	}
	/*
	Node *t=result;
	while(t){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;*/
	
	cout<<"c="<<c<<endl;
	c=0;
	return result;
}



//spliting the list into pieces actual spiliting is going on here
void frontbacksplit(Node *source,Node **frontref,Node **backref)
{
	//we are applying floyd algos here
	Node *slow=source;
	Node *fast=slow->next;
	
	while(fast!=NULL)
	{
		fast=fast->next;
		if(fast!=NULL)
		{
			slow=slow->next;
			fast=fast->next;
		}
		
	}
		*frontref=source;
		*backref=slow->next;
		slow->next=NULL;
}

//dividing the list into pieces
void merge_sort(Node **headref)
{
	Node *head=*headref;
	Node *a,*b;
	if((head==NULL)||head->next==NULL)
	{
		return;
	}
	frontbacksplit(head,&a,&b);
	
	merge_sort(&a);
	merge_sort(&b);
	
	Node *t=a;
/*	cout<<"a->\n";
	while(t){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;
	
	t=b;
	cout<<"b->\n";
	while(t){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;*/
	
 *headref=sortedmerge(a,b);
 	t=*headref;
	while(t){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;
}


int main()
{
	Node *head=NULL;
	vector<int>x{5,4,3,2,1};
	
	make_linked_list(&head,x.begin(),x.end());
	
	printlist(head);
	cout<<endl;
	merge_sort(&head);
//	printlist(head);
	return 0;
}
