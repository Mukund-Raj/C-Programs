#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 1
void sortdpq(struct data *pq);
void insertpq();
 void deletepq();
  void displaypq();
 struct data
 { int item;
    int prn;
 }pq[max];
 int rear=-1,front=-1;
 int main()
 {  int x;
    char ch;
    do
    {  printf("1-Insert\n");
       printf("2-Delete\n");
       printf("3-Display\n");
       printf("4-exit\n");
       printf("enter your choice\n");
       scanf("%d",&x);
       switch(x)
       {  case 1:
       	   insertpq();
       	   break;
       	   
			  case 2:
       	   	deletepq();
       	   	break;

       	   	case 3:
       	   	displaypq();
       	   	break;
       	   	case 4:
       	   	exit(1);
       	   	break;
       	   	default:
       	   	printf("\n !!!wrong choice");
       	   }
       	   printf("\ndo you want to continue");
       	   ch=getch();
	}while(ch=='y'||ch=='Y');
	getch();
	 return 0;
 }
 
      void insertpq()
      {
      	 struct data x;
      	 if(rear==max-1)
      	 { printf("PQ is overflow");
      	    getch();
      	    return;
		   }
		  
		  else
		  { printf("enter data with priority\n");
		  scanf("%d%d",&x.item,&x.prn);
		  
		  if(rear==-1)
		  rear++,front++;
		  else
		  rear++;
		  pq[rear]=x;
		  sortdpq(pq);
		   } 
	  }
	   void deletepq()
	   { if(front==-1)
	     {
	     	 printf("PQ is empty");
	     	 getch();
	     	 return;
		 }
		 
		 else
		 {  printf("\ndeleted item is=%d,priority=%d",pq[front].item,pq[front].prn);
		    if(front==rear)
		    front=-1,rear=-1;
		    else
			front++;
		    sortdpq(pq); 
		 }
		 
	   }
	   
	    void displaypq()
	    { int i;
	    if(front!=-1)
	    { 
		printf("\n given descending PQ is\n");
	    printf("item\t Priority\n");
	    for(i=front;i<=rear;i++)
	    printf("%d\t%d\n",pq[i].item,pq[i].prn);
		}
		else
		printf("\n PQ is empty,nothing to show");
		}
		
       void sortdpq(struct data *pq)
		{ int i,j;
		struct data t;
		for(i=front;i<rear;i++)
		{ for(j=i+1;j<=rear;j++)
	       { 
	         if(pq[i].prn<pq[j].prn)
	          { t=pq[i];
	          pq[i]=pq[j];
	          pq[j]=t;
			  }
		   }
	    }
		}
		
