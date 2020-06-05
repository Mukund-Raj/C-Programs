#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define max 50
void insert();
void del();
void display();
int cq[max],rear=-1,front=-1;
using namespace std;
int main()
{   
  char ch;
  int x;
  do
{  cout<<"1-insert"<<endl;
    cout<<"2-delete"<<endl;
    cout<<"3-display"<<endl;
    cout<<"4-exit"<<endl;
    cout<<"enter your choice";
    cin>>x;
    switch(x)
    { case 1:
    	insert();
    	break;
    	case 2:
    		del();
    		break;
    		case 3:
    			display();
    			break;
    			case 4:
    				exit(1);
    				default:
    					cout<<"wrong choicce";
    				}
          cout<<"do you want to cont"<<endl;             				
           cin>>ch;
		}while(ch=='y'||ch=='Y');
		getch();
		return 0;	
}

  void insert()
  {  int ele;
  if((front==0 && front==max-1)||(front==rear+1))
  	{ cout<<"cq is full";
  	  getch();
  	  return;
   }
    
   else if(rear==-1)
  {
    front=(front+1)%max; 
   rear=(rear+1)%max;
}
   else
   rear=(rear+1)%max;
   
    cout<<"\nenter data";
	cin>>ele; 
   cq[rear]=ele;
  }
   void del()
   {  if(front==-1)
     { cout<<"cq is empty";
       getch();
       return;
     } 
 cout<<endl<<"item del is"<<cq[front];
   else if(front==rear)
   front=(front+1)%max; rear=(rear+1)%max;
   else
  front=(front+1)%max; rear=(rear+1)%max;
  
   	
   }
   void display()
   { if(front==-1)
   { cout<<"\n cq is empty nothing to show";
       getch();
       return;
     	
 	  } 
 	  cout<<endl<<"items are \n";
 	  else
 	  {
 	  	for(int i=front;i<=rear;i++)
 	  	{ cout<<" \n\t "<<cq[rear];
 	  	
 	  		
		   }
 	  	
 	  	
	   }
 	  
   	
   	 
   }
  
  
