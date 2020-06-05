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
  struct node *prev;
  struct node *next;
}*first=NULL,*last=NULL;

  int main()
{   int x;
    char ch;
   do
{  //printf("\n1-insert at begining \n");
   printf("2-insert at end \n");
   printf("3-Deletion at end\n");
   printf("4-Deletion at begining\n");
   printf("5-display\n");
   printf("\nenter your choice\n");
 scanf("%d",&x);
 switch(x)
 {  //case 1:
   //insbeg();
   //break;
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
   	printf("Wrong choice!!!");
}
    printf("\ndo you want to continue\n");
  ch=getche();
  }while(ch=='Y'||ch=='y');

  getch();
  return 0;
}
   void insend()
   { struct node *p;
     p=(struct node*)malloc(sizeof(struct node));
     printf("enter your info");
     scanf("%d",&p->info);
     if(first==NULL)
     { p->prev;
       p->next;
       first=p;
       last=p;
       
	 }
   	 else
   	 {  last->next=p;
   	    p->prev=last;
   	    p->next=first;
   	    last=p;
   	    first->prev=p;
   	    
		}
   }
   
   
     void delbeg()
     { struct node *t;
	   if(first==NULL)
	   { printf("no Node");
	      return;    
		} 
		else
		{  if(first==last)
		  { printf("\n deleted node is %d",first->info);
		    free(first);
		    first=NULL;
		    last=NULL;
		  }
	     	 
	   	else
	   	{  
		t=first;
		printf("\n deleted node is %d",first->info);
		first=first->next;
		first->prev=last;
		last->next=first;
		free(t);
	   	   
		   }
		}
      
	 }
	 
	  void delend()
	  { struct node *t;
	   if(first==NULL)
	   { printf("no node");
	     return;
	   }
	   else
	   {
	   	if(first==last)
	   	{ printf("\n deleted node is %d",last->info);
	   	  free(first);
	   	  first=last=NULL;
		}
	   	else
	   	{  t=first;
	   	  printf("\n deleted node is %d",last->info);
	   	  while(t->next!=first)
	   	  t=t->next;
	   	  last=last->prev;
	   	  first->prev=last;
	   	  last->next=first;
	   	  free(t);
		}
	   }
	  }
	   void dis()
	   { struct node *t;
	   if(first==NULL)
	   { printf("\nnothing to display");
	       return;
	   }
	   else
	   { printf("\nNodes are;");
	      t=first;
	      while(t->next!=first)
	       {  printf("\t%d",t->info); 
	          t=t->next;
			 }  
			 printf("\t%d",t->info);
	   }
	   
	   }
