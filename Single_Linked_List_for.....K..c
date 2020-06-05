#include<stdio.h>
#include<conio.h>
#include<stdlib.h>    
   
void insbeg();
void delbeg();

void dis();
void insend();
void delend();

struct node
{ int info;
  struct node *next;
}*start=NULL;
  
int main()
{ int x;
 char ch;
  
do
{  printf("\n1-insert at begin position\n");
  printf("2-insert at end position\n");
  
 
 printf("3-Deletion at end\n");
 printf("4-Deletion at begining\n");
 
 printf("5-display\n");

 printf("\nenter your choice\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
  insbeg();
  break;
  
  case 2:
  insend();
   break;
  
   case 3:
   delend();
   break;

   case 4:
   delbeg();
   break;
  

   case 5:
   dis();
   break;
  
  default:
  printf("\nwrong choice!!!!");
  }
  printf("\ndo you want to continue\n");
  ch=getche();
  }while(ch=='Y'||ch=='y');

  getch();
  return 0;
}

void insbeg()    //insert first location
{ 
struct node *n;
n=(struct node*)malloc(sizeof(struct node));

printf("\n enter information");
 scanf("%d",&n->info);

if(start==NULL)
{
 start=n;
 start->next=NULL;
}
else
{ 
  n->next=start;
  start=n;
}
}

 void delbeg()           //delete beging location
 { 
   struct node * t;
   
   t=start;
   
   if(t==NULL)
   {
     printf("list is empty");
    getch();
    return;
    }
    else
    {  
	  printf("deleted node is %d",t->info);
     start=start->next;
     free(t);
}
     }

     void dis()       //display
     { 
	 struct node *t;
	 t=start;
	 
	if(t==NULL)
	{
	   printf("\nlist is empty");
	   getch();
	   return;
	  }
	  
	  else
    { 
	printf("\n given list is\n");
	
      while(t->next!=NULL)
      { 
	    printf("%d\t",t->info);
       t=t->next;
       }
       
       printf("%d\n",t->info);
       }

    }

    void insend()                   // insert at given position
    {
	  struct node *nw,*ptr;
     nw=(struct node *)malloc(sizeof(struct node));
     
     nw->next=NULL;
     printf("\nenter the item\n");
     scanf("%d",&nw->info);
     
      if(start==NULL)
      start=nw;
      
      else
       { 
	   ptr=start;
	   
       while(ptr->next!=NULL)
       { 
	     ptr=ptr->next;
       }
       
       ptr->next=nw;
       }
       }
       
	void delend()         // delete end position
	{ 
	
	struct node *t1,*t2;
	
	t1=start;
	t2=start->next;
	
	if(t1==NULL && t2==NULL)
	{
	 printf("\nlist is empty\n");
	 getch();
	 return;
	 }
	 else if(t2==NULL)
	 {
	 	free(t1);
	 	start=NULL;
	 	t1=t2=NULL;
	 }
	 else
	 { 
	 while(t2->next!=NULL)
	 { 
	   t1=t1->next;
	   t2=t2->next;
	 }
	 
	 t1->next=NULL;
	 free(t2);
	 }
	}
     
