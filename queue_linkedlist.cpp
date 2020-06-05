#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();

 struct node
 { int info;
   struct node *next;
 }*rear,*front;
 
  int main()
  { 
  int x;
  char ch;
  
  while(1)
  { printf("\n1-Enqueue\n2-Dequeue\n3-Display\n4-Exit\n\n");
	printf("enter your choice");
    scanf("%d",&x);
  
  switch(x)
  { case 1:enqueue();break;
  
  	case 2:dequeue();break;
  	
    case 3:display();break;
    
  	case 4:exit(1);break;
  	
  	default:printf("Wrong choice");
  }
  
 }
   return 0;
  }
    void enqueue()
    {  
	  	  //creating new node

     node *nw=(struct node*)malloc(sizeof(struct node));
     
	 printf("\n enter info\n");
     scanf("%d",&nw->info);
      
	  nw->next=NULL;
      
	 if(rear==NULL)
     { 
	   rear=front=nw;
	 }
	 
	 else
	 { 
	   rear->next=nw;
	   rear=nw;
	 }
	}
	
	 void dequeue()
	 { 
	   struct node *t;
	   
	   if(front==NULL)
	   { 
	     printf("\nno node to delete\n");
	     return;
	   }
	   
	   if(front==rear)
	  { 
	    printf("%d deleted",front->info);
	    
		delete(front); 
	    
		front=rear=NULL;
	     return;  
	   }
	   
	   t=front;
	   
	   printf("\n %d deleted",front->info);
	   front=front->next;
	   delete(t);
	   }
	   
	 void display()
	 { 
	  
	  struct node *t;
	  
	  if(front==NULL)
	  { 
	   printf("\n No node to display");
	   return;       
	  }
	  
	  t=front;
	  while(t!=NULL)
	   { printf(" %d",t->info);printf("->");
	    t=t->next;
	   }
	   printf("!!!");
	 }
