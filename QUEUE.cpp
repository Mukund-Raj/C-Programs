#include<iostream>
#include<conio.h>
using namespace std;
#define max 50
 
 int q[max];
 int rear=-1,front=-1;
 void insert();
 void deleteq();
 void display();
 int main()
 { int x;
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
     insert();
    break;
	case 2:
	 deleteq();		
     break;
	 case 3:
     display();
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
     getch();
    return 0; 
	  
}

     void insert()
     { int m;
      if(rear==max-1)
      { cout<<"Q is overflow";
        getch();
        return;
	  }
	  
	   else if(rear==-1)
	   { front++;
	     rear++;
	   
	   }
	   else
	   rear++;
	   
	   cout<<"\n enter the item";
	   cin>>m;
	   q[rear]=m;

	   }
	   
	   void deleteq()
	   { 
	      if(front==-1)
	      { cout<<"queue is empty";
	       getch();
	       return ;
		  }
		  
		  else
		  {
		  	 cout<<"deleted item="<<q[front];
		  	      q[front]='\0';
				   if(front==rear)
		  	     front=rear=-1;
		  	     else
		  	     front++;
		  	    
		  	
		  }
	   }
	     void display()
	     { 
	        if(front==-1)
	        { cout<<"q is empty,nothing to show";
	        getch();
	        return;
			}
			else
			{ cout<<"\n item in queue are:\n";
			for(int i=front;i<=rear;i++)
			  cout<<"\t"<<q[i];
			}
		 }
