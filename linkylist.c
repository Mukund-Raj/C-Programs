
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int length();
void rotate();
void insend();
void dis();
void swap(); 
void delend();
void nnode();
void alter();
void search();
void middle();
void remove();
void nthend();
void insertsort();
void countr();

void movtofront();
void alsplit();
void merge();
void  n_after_m();
void swap_links();
	void merge_alternate();

 struct node
 {  int info;
    struct node *next;
 }*start=NULL,*start1=NULL; 
 
int main()
{  int n;
	printf("insert first list\n how many items");
     scanf("%d",&n);
     while(n)
     {insend();
	 n--;
	 }
	 /*printf("insert second list\n how many items");
     scanf("%d",&n);
     while(n)
     {insend(start1);
	 n--;
	 }*/
	 
	 
	// printf("\n display\n");
	 //is();
	 printf("\n delete\n");
	 delend();
    // printf("\n count length\n");
     //length();
     //printf("\n get n th node");
     //nnode();
     //printf("\n alter elements\n");
     //swap();
     //dis();
     //printf("\n search\n");
     //search();
     //printf("\n middle node \n");
    // middle();
    // printf("\n n th node from end is\n");
    // nthend();
    //printf("\n count given int\n");
    //countr();
    //printf("\n move last node to front\n");
    //movtofront();
    //dis();
     //printf("\nalternate split\n"); 
     //alsplit();
    //printf("insert b/w sorted info");
    //insertsort();
    //printf("remove duplicates\n");
    //remove();
	 //printf("rotate the linked list");
	 //rotate();
	 //printf("merge two linked list");
	 //merge();
	// printf("delete n after m nodes\n");
	 //n_after_m();
	 dis();
	 
	 //printf("swap links\n");
	 //swap_links();
	 //printf("merge at alternate");
     // merge_alternate();
	 return 0;
}

      void insend()                   // insert at given position
    { struct node *nw,*ptr;
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
	   
	   	
     /* int length()
       { 
        int l=0;
        struct node *n;
        if(start==NULL)
        {printf("no node");
         printf("length=%d",l);
         getch();
    
		}
		else
		{
			n=start;
			 while(n!=NULL)
			 { l++;
			 n=n->next;
			}

		}
		return (l);
	   }
	   */
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
	/*
	void nnode()
     { struct node *p;
     int i,n;
    
     printf("\nwhich node you want to get\n");
     	scanf("%d",&n);
     	p=start;
     	for(i=0;i<n-1;i++)
     	{ p=p->next;
     	 }
     	 
     	 printf("the %d node info is %d ",n,p->info);
	 }
   
   void swap()
     { 
	  struct node *n1,*n2;
     int n,z;
     n1=start;
     n2=start->next;
     z=length();
     while(z!=0)
     { n=n1->info;
      n1->info=n2->info;
      n2->info=n;
      n1=n2->next;
      n2=n1->next;
      z--;
    }
    
     	
	 }  
	  
	  void alter()
	  { struct node *n1,*n2;
	   int z=3;
	   n1=start;
	   n2=start->next;
	   while(z!=0)
	   { n1->next=n2->next;
	     free(n2);
	     n1=n1->next;
	     n2=n1->next;
		z--;
		}	
	   }
	   
	   void search()
	   { int pos=0,ele;
	   struct node *p;
	   printf("enter a element to search for");
	   scanf("%d",&ele);
	   p=start;
	   while(p!=NULL)
	   { if(p->info==ele)
	    { ++pos;
	      break;
		}
	   	++pos;
	   	p=p->next;
	   }
	   	 printf("%d element detected at loc %d",p->info,pos);
	   }
	 
	 void middle()
	 { struct node *mid,*n;
	 int n1=0,i;
	 n=start;
	 while(n!=NULL)
	 { n1++;
	  n=n->next;
	 }
	 	
      if(n1%2==0)
	 { printf("No Middle node");
	  return; 
	 }
	 else
	 { mid =start;
	  for(i=0;i<n1/2;i++)
	  mid=mid->next;
	 	
	 }
		printf("\n Middle node is %d",mid->info); 	
	   
	}
	void nthend()
	{ int loc ,i,l=0;
	struct node *n;
	n=start;
	printf("enter which node you want from the end");
	dis();
	scanf("%d",&loc);
	while(n!=NULL)
	{ l++;
	 n=n->next;
	}
	n=start;
	if(loc<=l&&loc!=0)
	{ 
	for(i=l-loc+1;i>1;i--)
	n=n->next;	
	printf("the %d node info from end is %d ",loc,n->info);
	}
	else
	printf("NO NODE#");
	}
	
	/*void countr()
	{ struct node *t;
	int n=0,item;
	printf("\nenter a item you want to check how many times it occur");
	scanf("%d",&item);
	t=start;
	while(t!=NULL)
	{ if(t->info==item)
	   ++n;
	   t=t->next;
	}
	printf("%d occur %d times",item,n);
	}
	
	void movtofront()
	{ struct node *n1,*n2;
	n1=start;
	n2=start->next;
	while(n2->next!=NULL)
	{ n2=n2->next;
	n1=n1->next;
	}
	n2->next=start;
	n1->next=NULL;
	start=n2;
	}
	
	void alsplit()
	{ struct node *a,*b,*n,*n1;
	
    a=start;
	  b=start->next;
	  n=a;
	  n1=b;
	  while(a!=NULL && b!=NULL)
	  { a->next=b->next;
	   a=a->next;
	   b->next=a->next;
	   b=b->next;
	  }
	  printf("\n a list is\n");
	  a=n;
	  while(a!=NULL)
	  { printf("%d\t",a->info);
	     a=a->next;   
	  }
	  b=n;
	  printf("\n");
	  while(b!=NULL)
	  { printf("%d",b->info);
	      b=b->next;
	  }
	  
	}
	*/
	
/*	void insertsort()
	{ struct node *n1,*n2,*n;
	int item;
	n=(struct node*)malloc(sizeof(node));
	printf("enter element you want to insert");
	scanf("%d",&n->info);
	n1=start;
	n2=start->next;
	ityem
	while(n2!=NULL)
	{ if(n1->info<=item && n2->info>=item)
	 { n->next=n1->next;
	   n1->next=n;
	 }
	 n1=n1->next;
	 n2=n2->next;
		}
		dis();	
	}
	*/
  /* void remove()
   { struct node *n,*n1;
     n=start;
     while(n!=NULL)
     {  n1=n->next;
	 
	 while(n1!=NULL)
       {  if(n1->info==n->info)
           {    n->next=n1->next;
              free(n1);
			}
			
		    else
	         break;
	 
	 n1=n->next;
	 }
	 n=n->next;
	 }
	  dis();
	}	
	void rotate()
  {  int i,k;
	struct node *n,*n1;
	n=start;
	n1=start->next;
	printf("enter k positive number");
	scanf("%d",&k);
	for(i=0;i<k/2;i++)
	{ while(n1->next!=NULL)
	{ n1=n1->next;
	   n=n->next;
	}
	n1->next=start;
	start=n1;
	n->next=NULL;
	n=start;
	n1=start->next;
	 } 
	 dis();
	}
	*/
	/*void merge()
	{ struct node *ptr,*ptr1;
	int t;
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=start1;
	ptr=start;
	while(ptr->next!=NULL)
	{ptr1=ptr->next;
	while(ptr1!=NULL)
	{ if(ptr->info>ptr1->info)
	{ t=ptr->info;
	  ptr->info=ptr1->info;
	  ptr1->info==t;
	}
	ptr1=ptr1->next;
	}
	ptr=ptr->next;
	}
	dis();
	} */
/*	void n_after_m()
	{ struct node *t1,*t2,*t3;
	   int m,n;
	   printf("enter m and n");
	   scanf("%d%d",&m,&n);
	   dis();
	   t1=start;
	     while(t1!=NULL)
	     { for(int i=0;i<m-1;i++)
	       t1=t1->next;
	       t2=t1->next;
	       if(t2!=NULL)
	       { for(int i=0;i<n-1;i++)
	          { t3=t2->next;
	             free(t2);
	             t2=t3;
	             
			  }
		   }
		   else
		   break;
		   t1->next=t2->next;
		   free(t2);
		   t3=NULL;
		   t1=t1->next;
		 }
		 dis();
	} */
	
	/*void swap_links()
	{ struct node *t1,*t2,*t3;
	   t1=start;
	   t2=t1->next;
	   t1->next=t2->next;
	   t2->next=t1;
	   start=t2;
	   while(1)
	   { t3=t1;
	   t1=t1->next;
	   t2=NULL;
	   t2=t1;
	   t2=t2->next;
	   if(t1!=NULL || t2!=NULL)
	   { t3->next=t2;
	     t1->next=t2->next;
	     t2->next=t1;
	   }
	   else
	   break;
	   }
	
	}*/
	
	/*void merge_alternate()
	{ struct node *t1,*t2,*t3;
	   t1=start;
	   t2=(*start).next;
	   while(1)
	   { t3=start1;
	    start1=start1->next;
	      t1->next=t3;
	      t3->next=t2;
	      t1=t2;
	      t2=t1->next;
	      if(t2==NULL)
	      { if(start1==NULL)
	        break;
	        else
	        { t1->next=start1;
	          start1=NULL;
	          break;
			}
		  }
		  if(start1=NULL)
		    break;
	   }
	   dis(start);
	}*/
