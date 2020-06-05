#include<stdio.h>
//defining max equal to 50
//#define is preprocessor directive 
//below line means set max to 50 it is global
#define max 50
 
 //q is an array
 int q[max];
 //rear and front end seyt to -1 ,means they are empty
 int rear=-1,front=-1;
 //three function protypes
 void insert();
 void deleteq();
 void display();
 
 
 int main()
 { 
 
 int x;
 char ch;
 printf("\n QUEUE Program\n");
 do
 {
 
 printf("\t1-insert\n");
 printf("\t2-Delete\n");
 printf("\t3-display\n");
 printf("\t4-Exit\n");
 printf("enter your choice");
 scanf("%d",&x);
 //start switch case on value of x
 switch(x)
 {
 	case 1:
     enqueue();
    break;
    
	case 2:
	 dequeue();		
     break;
     
	 case 3:
     display();
     break;
     
	 case 4:
	 exit(1);
	 break;
	 
	 default:
	 printf("!! Wrong choice!!");
 }
    
    
	 printf("\n do you want to continue \n");
	 fflush(stdin);
	 ch=getchar();
   }while(ch=='Y'|| ch=='y');
     getch();
    return 0; 
	  
}

   void enqueue()
     { 
	 	int m;
     //if rear is =max-1 means queue is full
      if(rear==max-1)
      { 
	  	printf("Q is overflow");
        getch();
        return;
	  }
	  
	   else if(rear==-1)
	   { 
	   	front++;
	     rear++;
	   }
	   
	   else
	   rear++;
	   
	   printf("\n enter the item");
	   scanf("%d",&m);
	   
	   q[rear]=m;
	   }
	   
	   void dequeue()
	   { 
	   //if front is -1,queue is empty
	      if(front==-1)
	      { 
		   printf("queue is empty");
	       getch();
	       return ;
		  }
		  
		  else
		  {
		  	 printf("deleted item=%d",q[front]);
		  	      
			q[front]=0;
			
			if(front==rear)
		  	   front=rear=-1;
		  	
			else
		  	     front++;
		  	    
		  	
		  }
	   }
	     void display()
	     { 
	        if(front==-1)
	        { 
			printf("\nq is empty,nothing to show\n");
	        getch();
	        return;
			}
			else
			{ 
			printf("\nitem in queue are:\n");
			
			int i;
			
			for(i=front;i<=rear;i++)
			  printf("%d\t",q[i]);
			}
		 }
