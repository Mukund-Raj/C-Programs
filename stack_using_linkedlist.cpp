#include<iostream>
#include<stdlib.h>
using namespace std;
   void display();
  void push();
  void pop();
  struct node
  { int data;
    node *next;
  }*top=NULL;

  int main()
 {
   int x;
   while(1)
   { cout<<"\n1-Push\n";
      cout<<"2-Pop\n";
      cout<<"3-display\n";
      cout<<"4-exit\n";
     cout<<"Enter your choice"<<endl;
     cin>>x;
     switch(x)
     { case 1:push(); break;
	   case 2:pop(); break;
	   case 3:display(); break;
	   case 4:exit(1);  break;   	 
     }
   }  
   return 0;
 }
    
    void push()
	{  node *nw=new node;
	   cin>>nw->data;
	   
	   if(top==NULL)
	   { top=nw;
	     top->next=NULL;
	   }
	   
	   else
	   { nw->next=top;
	    top=nw;
	   }
	 } 
	 void pop()
	 { node *del=new node;
	   if(top==NULL) 
	   { cout<<"\nunderflow\n"; return;
	   }
	   
	   
	   else
	   {  cout<<top->data<<" deleted"<<endl;
	      del=top;
	      top=top->next;
	      delete del;
	   }
	 }
	  
	   void display()
	   { node *d=new node;
	     if(top==NULL)
          { cout<<"\n No Node\n";
            return;
		  }
		  else
		  { d=top;
		    cout<<endl;
		    while(d->next!=NULL)
		    { cout<<d->data<<"->";
		      d=d->next;
			}
		    cout<<d->data<<"-> NULL";
		  }
		  
	   }
	   
