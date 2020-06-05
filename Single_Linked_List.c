#include<stdio.h>
#include<conio.h>
#include<stdlib.h>       
void insbeg();
void delbeg();
void dis();
void insend();
void insgiv();
void insaft();
void insbef();
void delend();
void delgiv();
void delit();
void search();
void reve();
void sort();
void count();
void eveodd();
void delall();
struct node
{ int info;
  struct node *next;
}*start=NULL;
  
int main()
{ int x;
 char ch;
  
do
{  printf("\n1-insert at end position\n");
  printf("2-insert at begingposition\n");
  printf("3-insertion at given position\n");
 printf("4-insertion before given item\n"); 
  printf("5-insertion after given item\n");
 printf("6-Deletion at end\n");
 printf("7-Deletion at begining\n");
 printf("8-Deletion at given position \n");
 printf("9-Deletion of given item\n");
 printf("10-display\n");
 printf("11-exit\n");
 printf("12-revers is item\n");
 printf("13-search is item\n");
 printf("14-sort is\n");
 printf("15-count \n");
 printf("16-even & odd number of nodes\n");
 printf("17-Delete all node\n");
 printf("\nenter your choice\n");
 scanf("%d",&x);
 switch(x)
 {case 1:
  insbeg();
  break;
  case 2:
  insend();
   break;
   case 3:
   insgiv();
   break;
   case 4:
    insbef();
    break;
     case 5:
   insaft();
   break;
   case 6:
   delend();
   break;
   case 7:
   delbeg();
   break;
   case 8:
   delgiv();
   break;
   case 9:
   delit();
   break;
   case 10:
   dis();
   break;
  case 11:
  exit(13);
  break;
  case 12:
  reve();
  break;
  case 13:
  search();
  break;
  case 14:
  sort();
  break;
  case 15:
  count();
  break;
  case 16:
  eveodd();
  break;
  case 17:
  delall();
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
{ struct node *n;
n=(struct node*)malloc(sizeof(struct node));
printf("\n enter information");
 scanf("%d",&n->info);

if(start==NULL)
{start=n;
 start->next=NULL;
}
else
{ n->next=start;
  start=n;

}

 }
 void delbeg()           //delete beging location
 { struct node * t;
   t=start;
   if(t==NULL)
   {printf("list is empty");
    getch();
    return;
    }
    else
    {  printf("deleted node is %d",t->info);
     start=start->next;
     free(t);
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
      while(t->next!=NULL)
      { printf("%d\t",t->info);
       t=t->next;
       }
       printf("%d\n",t->info);
       }

    }

    void insend()                   // insert at given position
    {struct node *nw,*ptr;
     nw=(struct node *)malloc(sizeof(struct node));
     nw->next=NULL;
     printf("\nenter the item\n");
     scanf("%d",&nw->info);
      if(start==NULL)
      start=nw;
      else
       { ptr=start;
       while(ptr->next!=NULL)
       { ptr=ptr->next;
       }
       ptr->next=nw;
       }
       }
       void insgiv()         //insert  given position
       {struct node *nu,*ptr;
       int i,l;
       nu=(struct node*)malloc(sizeof(struct node));
       printf("\nenter info for new node");
       scanf("%d",&nu->info);
       printf("\nenter location\n");
       scanf("%d",&l);
       ptr=start;
       for(i=1;i<l-1;i++)
       ptr=ptr->next;
       nu->next=ptr->next;
       ptr->next=nu;
       }
       void insaft()  //after given item
       { struct node *n,*ptr;
       int i,item;
       n=(struct node*)malloc(sizeof(struct node));
       printf("\nenter info\n");
       scanf("%d",&n->info);
       printf("\nenter  a item you want to insert\n");
       scanf("%d",&item);
       ptr=start;
       while(ptr->next!=NULL)
       {
       if(ptr->info==item)
       break;

       else
       ptr=ptr->next;
       }
       n->next=ptr->next;
       ptr->next=n;
       }

	void insbef()      //insert
      { struct node *n1,*ptr,*ptr1;
	 int i,item,n=0;
	 n1=(struct node*)malloc(sizeof(struct node));
	 printf("\nenter information");
	 scanf("%d",&n1->info);
	  printf("\nenter an item\n");
	 scanf("%d",&item);
	 ptr=start;
 	while(ptr->next!=NULL)
	{
	if(ptr->info==item)
	{n++;
	break;
	}
	else
	ptr=ptr->next;
	}
	ptr1=start;
	for(i=1;i<n-1;i++)
	ptr1=ptr1->next;

	n1->next=ptr1->next;
	ptr1->next=n1;
	}
	void delend()         // delete end position
	{ struct node *t1,*t2;
	t1=start;t2=start->next;
	if(t1==NULL)
	{printf("\nlist is empty\n");
	 getch();
	 return;
	 }
	 else
	 { while(t2->next!=NULL)
	 { t1=t1->next;
	 t2=t2->next;
	 }
	 t1->next=NULL;
	 free(t2);
	 }

	}
     void delgiv()            //delete given position
     {  int i,l;
     struct node *t1,*t2;
     t1=start;
     t2=start->next;
     if(t1==NULL)
     { printf("list is empty");
       getch();
       return;
       }
       else
       {  printf("\nenter the loc to delete\n");
      	  scanf("%d",&l);
     	for(i=1;i<l-1;i++)
     	{   t1=t1->next;
      	    t2=t2->next;
     	}
	 t1->next=t2->next;
	 printf("\ndeleted node is =%d\n",t2->info);
	 free(t2);

     }
     }
     void delit()
     { struct node *p1,*p2;
       int item;
       printf("\nenter item to delete\n");
       scanf("%d",&item);
       p1=start;
       p2=start->next;
       while(p2->next!=NULL)
       { if(p2->info==item)
	break;
	p1=p2;
	p2=p2->next;
	}
	p1->next=p2->next;
	free(p2);
	}
     void search()
  {
    struct node *p;
    int item,f=0,l=0;
    printf("enter the item");
    scanf("%d",&item);
    p=start;
    while(p!=NULL)
    {
    l++;
    if(item==p->info)
    {
    f=1;
    break;
    }
    p=p->next;
    }
   if(f==1)
    printf("item %d found at location %d ",item,l);
    else
    printf("item %d not found at location %d ",item);
    }
    void reve()
    {
    struct node *ptr,*c,*t;
    ptr=start;
    t=NULL;
    while(ptr!=NULL)
    {
    c=ptr->next;
    ptr->next=t;
    t=ptr;
    ptr=c;
    }
    start=t;
}
 void  sort()
 {
 struct node *p1,*p2;
 int t;
 p1=start;
 while(p1->next!=NULL)
 {
 p2=p1->next;
 while(p2!=NULL)
 {
 if(p1->info > p2->info)
 {
 t=p1->info;
 p1->info=p2->info;
 p2->info=t;
 }
 p2=p2->next;
  }
 p1=p1->next;
 }
}
void  count()
{
int n=0;
struct  node *p;
p=(struct node*)malloc(sizeof(struct node));
p=start;
while(p!=NULL)
{
n++;
p=p->next;
}
printf("\n total number of node= %d\n",n);
}
void eveodd()
{
struct node *p;
int c=0,c1=0;
while(p!=NULL)
{
if(p->info%2==0)
{
c++;
p=p->next;
}
else
{
c1++;
p=p->next;
}
}
printf("even item is=%d\n",c);
printf("odd item is=%d\n",c1);
}
void delall()
{
struct node *t;
t=start;
if(t==NULL)
{
printf("List is empty");
getch();
return;
}
else
{
while(t!=NULL)
{
printf("\n all Delete node is=%d",t->info);
start=start->next;
free(t);
t=start;
}
}
}
