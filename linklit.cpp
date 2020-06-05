#include<iostream>
#include<conio.h>
 using namespace std;
 void insend();
void insend1();
void dis();
void dis1();
void merge_alternate();
void swap_links();
void merge();
 void delright();
struct node
 {  int info;
   node *next;
 }*start=NULL,*start1=NULL;
 
 int main()
 {   int n;
	cout<<"insert first list\n how many items";
     cin>>n; 
     while(n)
     {insend();
	 n--;
	 }
	 
	 /*cout<<"insert second list\n how many items";
     cin>>n;
     while(n)
     {insend1();
	 n--;
	 }*/
	 dis();
	 //dis1();
	 //cout<<"\n merge at alternate"<<endl;
	  //merge_alternate();
	  //cout<<"\nswap by links"<<endl;
	  //swap_links();
	  //cout<<"\nmerge two sorted linked lists"<<endl;
	  //merge(); 
 	  cout<<"\n del right"<<endl;
 	  delright();
	 return 0;
 }

 void insend()                   // insert at given position
    { node *nw,*ptr;
      nw=new node;
     nw->next=NULL;
     cout<<"\nenter the item\n";
     cin>>nw->info;
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
	   
	   
	    void dis()       //display
     {  node *t;
	   t=start;
	if(t==NULL)
	{   cout<<"\nlist is empty";
	   
	   return;
	  }
	  
	  else
    { cout<<"\n given list is\n";
      while(t->next!=NULL)
      { cout<<t->info<<" ";
        t=t->next;
       }
       cout<<t->info;
       }

   }
   
   
   /*void merge_alternate()
	{ node *t1,*t2,*t3;
        t1=start; 
	 t2=t1->next;
	   while(1)
	   { 
	     if(t1->next==NULL)
	      { t3=start1;
	        start1=start1->next;
		    t1->next=t3;
	        t3->next=NULL;
	        break;
		  } 
	      if(start1==NULL)
	         break;
	       
   	      t3=start1;
	      start1=t3->next;
	      t1->next=t3;
	      t3->next=t2;
	      t1=t2;
	      t2=t1->next;
	      
	       
	   
	}
	  dis();	
	  dis1();
     getch();
}

	void insend1()                   // insert at given position
   { node *nw,*ptr;
      nw=new node;
     nw->next=NULL;
     cout<<"\nenter the item\n";
     cin>>nw->info;
      if(start1==NULL)
          start1=nw;
      
      else
       { ptr=start1;
       while(ptr->next!=NULL)
       { ptr=ptr->next;
       }
       ptr->next=nw;
       }
       }

	   
	    void dis1()       //display
     {  node *t;
	   t=start1;
	if(t==NULL)
	{   cout<<"\nlist is empty";
	   
	   return;
	  }
	  
	  else
    { cout<<"\n given list is\n";
      while(t->next!=NULL)
      { cout<<t->info<<" ";
        t=t->next;
       }
       cout<<t->info;
       }

   }
   
   void swap_links()
	{ node *t1,*t2,*t3;
	   t1=start;
	   t2=t1->next;
	   t1->next=t2->next;
	   t2->next=t1;
	   start=t2;
	   t2=NULL;
	   while(1)
	   { t3=t1;
	   t1=t1->next;
 	    if(t1==NULL)
 	    break;
 	    else
 	    t2=t1->next;
	   if((t1!=NULL) && (t2!=NULL))
  	   {  
	     t3->next=t2;
	     t1->next=t2->next;
	     t2->next=t1;
	   }
	   else
	   break;
	   }
	 dis();
	} */
	
	/*void merge()
	{ struct node *ptr,*ptr1;
	int t;
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	
	ptr->next=start1;
	ptr=start;
	while(ptr->next!=NULL)
	{  ptr1=ptr->next;
	  while(ptr1!=NULL)
	{  if(ptr->info>ptr1->info)
	{  t=ptr->info;
	   ptr->info=ptr1->info;
	   ptr1->info=t;
	}
	ptr1=ptr1->next;
	}
	ptr=ptr->next;
	}
	dis();
	} */
     
     void delright()
     { node *t1,*t2,*t3;
     t1=start;
     t2=start->next;
      
      while(1)
      { if(((start->next)->info) > (start->info ))
      		{ t2=start;
      		  start=start->next;  
			delete t2;
			}
			else
			break;
	  }
	    t3=t1;
	    while(1)
	    { t1=t2;
	     t2=t2->next;
	     if(t2->info >t1->info)
	     { t3->next=t2;
	       delete t1;
		 }
		 if(t2==NULL)
		   break;
		}
	 }
