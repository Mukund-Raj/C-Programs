#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define max 3
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
{  
    cout<<"\n1-insert"<<endl;
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
          cout<<"\n do you want to continue"<<endl;             				
              ch=getche();
		}while(ch=='y'||ch=='Y');
		getch();
		return 0;	
}

  void insert()
  {  int ele;
   if((front==0 && rear==max-1)||(front==rear+1))
  	{ cout<<"cq is full";
  	  getch();
  	  return;
   }
    
   else if(rear==-1)
  {  
 	 rear=front=0;
  }
   else
   rear=(rear+1)%max;
   
   cout<<"\nenter data";
	cin>>ele; 
   cq[rear]=ele;
  }
  
   void del()
   {    int del;
     if(front==-1)
     { cout<<"cq is empty";
       getch();
       return;
     } 
   else
  {
      del=cq[front];   
      cq[front]='\0';
      
       if(front==rear)
     		rear=front=-1;
	  else
  			front=(front+1)%max;
  }
  cout<<endl<<"item del is"<<del;
   }
   void display()
   { 
   		int i;
   		
    if(front==-1)
   	 { 	
		cout<<"\n cq is empty,nothing to show";
       getch();
       return;	
 	  } 
 	  
 	 else
 	  {  cout<<endl<<"\n items are \n";
 	  	if(front>rear)
		 {  for(i=front;i<max;i++)
		 	cout<<" \n\t "<<cq[i];
			  	
		    for(i=0;i<=rear;i++)
		     cout<<"\n\t"<<cq[i];
		 }
		 else
		 { for(i=front;i<=rear;i++)
		 	cout<<" \n\t "<<cq[i];
         }
		 	
	  }		
  }
