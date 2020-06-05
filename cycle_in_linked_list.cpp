#include<bits/stdc++.h>

using namespace std;
#define null NULL

struct node
{
	int data;
	node *next;
}*head = null, *last = null;

node* make_nodes(vector<int>arr, int pos_to_connect)
{
	for (int i = 0; i<arr.size(); i++)
	{
		node *newnode = new node;
		newnode->data = arr[i];
		newnode->next = null;
		if (head == null)
		{
			head = newnode; 
			last = head;
		}
		else
		{
			node *temp = head;
			while(temp->next!=null)
			{
				temp=temp->next;
			}
			temp->next = newnode;
			last = newnode;
			
		}
	}

	
	//cout<<last->data;
	node *temp = head;
	while(temp!=null)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	temp=head;
	if(pos_to_connect)
	{
		for (int i = 0; i < pos_to_connect - 1; i++)
	{
		temp = temp->next;
	last->next=temp;
	cout<<(last->next)->data;
		
	}
	}
	}
	
	void display()
	{
		cout<<endl;
		node *temp=head;
		while(temp!=null)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
void cycle(node *headP)
{
	node *slow=head,*fast=head;
	int flag=0;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			flag=1;
			break;	
		}
		
	}
	
	cout<<endl;
	if(flag==1)
	{
		cout<<"Cycle do exist in the linked list";
		slow=head;
		//stroing the miidle way of the loop for deleting the loop
		node *middle_loop=fast;

		while(slow!=fast)
		{
			fast=fast->next;
			slow=slow->next;
		}
		
		cout<<"\nStart of the loop node data is: "<<fast->data;
		
		int count=0;
		
		//checking the next pointer of the middle way to the fast pointer
		while(middle_loop->next!=fast)
		{
				middle_loop=middle_loop->next;
		}
		//after finding the next pointer to the start of the loop set it to null
		middle_loop=middle_loop->next=null;
		//now the loop is broken
		display();
	}
		/*
		fast=fast->next;
		while(slow!=fast)
		{
			fast=fast->next;
			count++;
		}
		cout<<"\nLength of the loop is"<<count;
		*/
	//}
	
	else
	cout<<"Cycle do not exist in the linked list";
}

void reverse_display(node *head)
{
	if(!head)
	return;
	
	else
	{
		reverse_display(head->next);
		cout<<head->data<<" ";
	}
}
int main()
{
	vector<int>a = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	make_nodes(a,0);
//	display();
  cycle(head);
  reverse_display(head);
	return 0;
}
