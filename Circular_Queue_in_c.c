#include<stdio.h>
#include<conio.h>
#define max 3
void insert();
void del();
void display();
int cq[max],rear=-1,front=-1;

int main()
{   
  char ch;
  int x;
  do
{  
    printf("\n1-insert\n");
    printf("2-delete\n");
    printf("3-display\n");
    printf("4-exit\n");
    printf("enter your choice");
    scanf("%d",&x);
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
    	printf("wrong choice");
    	}
          printf("\n do you want to continue\n");             				
              ch=getche();
		}while(ch=='y'||ch=='Y');
		getch();
		return 0;	
}

  void insert()
  {  int ele;
   if((front==0 && rear==max-1)||(front==rear+1))
  	{ printf("cq is full");
  	  getch();
  	  return;
   }
    
   else if(rear==-1)
  {  rear=0; front=0;

}
   else
   rear=(rear+1)%max;
   printf("\nenter data");
   scanf("%d",&ele); 
   cq[rear]=ele;
  }
   void del()
   {    int del;
     if(front==-1)
     { printf("cq is empty");
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
  printf("\nitem del is %d",del);
   }
   void display()
   { int i;
    if(front==-1)
   { printf("\n cq is empty,nothing to show");
       getch();
       return;	
 	  } 
 	  
 	 else
 	  {  printf("\n items are \n");
 	  	 printf("front\n");
         if(front>rear)
		 {  for(i=front;i<max;i++)
		 	printf("\n\t%d",cq[i]);
			  	
		    for(i=0;i<=rear;i++)
		     printf("\n\t%d",cq[i]);
		 }
		 else
		 { 
			 for(i=front;i<=rear;i++)
			 	printf("\n\t %d",cq[i]);
         }
         
		 printf("\nrear\n");	
		 }	
	   }
