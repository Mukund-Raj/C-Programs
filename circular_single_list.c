#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insbeg();
void delbeg();
void delend() ;
void insend();
void dis();
struct node
{ int info;
  struct node *next;
}*start=NULL;

 int main()
 { int x;
   char ch;
   do
   { printf("1-insert at begining\n");
    printf("2-insert at end\n");
    printf("3-delete at begining\n");
    printf("4-delete at end\n");
    printf("5=Display\n");
    printf("enter your choice");
    scanf("%d",&x);
    switch(x)
 {case 1:
  insbeg();
  break;
  case 2:
  insend();
   break;
   case 3:
   delbeg();
   break;
   case 4:
    delend();
    break;
     case 5:
     dis();
   break;
   }
   printf("do you want to continue\n");
   ch=getch();
   }while(ch=='y'||ch=='Y');
   return 0;
}
void insbeg()    //insert first location
{ struct node *p,*ptr;
p=(struct node*)malloc(sizeof(struct node));
printf("\n enter information");
 scanf("%d",&p->info);

  if(start==NULL)
  {start=p;
  p->next=p;
  }
else
{ ptr=start;
  while(ptr->next!=start)
    ptr=ptr->next;
    p->next=start;
    ptr->next=p;
    start=p;

}
}



      void delend()         // delete end position
	{ struct node *t1,*t2;
	t1=start;
	t2=start->next;
	if(t1==NULL)
	{printf("\nlist is empty\n");
	 getch();
	 return;
	 }
	 else
	 { while(t2->next!=start)
	 { t1=t2;;
	 t2=t2->next;
	 }
	 t1->next=start;
	 printf("deleted node=%d\n",t2->info);
	 free(t2);
	 }

	}

    void insend()                   // insert at given position
    { struct node *p,*ptr;
      p=(struct node *)malloc(sizeof(struct node));
      p->next=NULL;
      printf("\nenter the item\n");
       scanf("%d",&p->info);
       if(start==NULL)
       { start=p;
        p->next=p;
	   }
       else
       {  ptr=start;
          while(ptr->next!=start)
           ptr=ptr->next;
     
	      p->next=ptr->next;
         ptr->next=p;  
       }
    }
    void delbeg()           //delete beging location
 { struct node *t1,*t2;
   
   if(start==NULL)
   {printf("list is empty");
    getch();
    return;
    }
    else
    { t1=start;
	   t2=start;
	   while(t2->next!=start)
	   t2=t2->next;  
	printf("deleted node is %d",t1->info);
     start=t1->next;
     free(t1);
     t2->next=start;
}
     }
	
	
	void dis()       //display
     { struct node *t;
	 t=start;
	if(t==NULL)
	{printf("\nlist is empty");
	   getch();
	   return;
	  }
	  
	  else
    { printf("\n given list is\n");
      while(t->next!=start)
      { printf("%d\t",t->info);
       t=t->next;
       }
       printf("%d\n",t->info);
       }

    }
	
