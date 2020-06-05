#include<bits/stdc++.h>
using namespace std;

void enqueue(stack<int>&s1,stack<int>&s2)
{
	int data;
	cout<<"Enter a value";
	cin>>data;
	if(s1.empty())
	{
		while(!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();	
		}
		
		s1.push(data);
	}
	else
	s1.push(data);
	
}
	
void dequeue(stack<int>&s1,stack<int>&s2)
{
	if(s1.empty() && s2.empty())
	{
		cout<<"Queue is empty";
		return;
	}
	if(s2.empty())
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();	
		}
		cout<<"\nElement gets deleted is"<<s2.top();
		s2.pop();
	}
	else
	{
		cout<<"\nElement gets deleted is"<<s2.top();
		s2.pop();	
	}
	
}

void display(stack<int>&s1,stack<int>&s2)
{
	if(s1.empty() && s2.empty())
	{
		cout<<"\nNothing too display\n";
		return ;
	}
		
	if(s2.empty())
	{
		stack<int>s3;
		while(!s1.empty())
		{
			s3.push(s1.top());
			s1.pop();	
		}
		cout<<"\nQueue is \n";
		
		while(!s3.empty())
		{
			s1.push(s3.top());
			cout<<s3.top()<<"->";
			s3.pop();
		}
		
	}
	else
	{
		stack<int>s3=s2;
		cout<<"\nQueue is \n";
		while(!s3.empty())
		{
			cout<<s3.top()<<"->";
			s3.pop();
		}
	}
}

int main()
{
	stack<int>s1,s2;
	int x;
 char ch;
 cout<<"\n QUEUE Program\n";
 do
 {
 
 cout<<"\t1-insert\n";
 cout<<"\t2-Delete\n";
 cout<<"\t3-display\n";
 cout<<"\t4-Exit\n";
 cout<<"enter your choice";
 cin>>x;
 switch(x)
 {
 	case 1:
     enqueue(s1,s2);
    break;
    
	case 2:
	 dequeue(s1,s2);	
     break;
     
	 case 3:
     display(s1,s2);
     break;
     
	 case 4:
	 exit(1);
	 
	 break;
	 default:
	 cout<<"!! Wrong choice!!";
 }
    
	 cout<<"\n do you want to continue "<<endl;
	 cin>>ch;
   }while(ch=='Y'|| ch=='y');
     
	return 0;
}
