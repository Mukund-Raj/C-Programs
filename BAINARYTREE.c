#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert(struct node *rt,struct node *n);
void preorder(struct node *temp);
void inorder(struct node *temp);
 void postorder(struct node *temp);
 
 struct node
 { struct node *left;
   int  info;
   struct node *right;
 }*root=NULL;
  
  int main()
  {   int x;
       char ch;
       struct node *nw;
	   do
	   { printf("\n binary tree\n");
	    printf("1-Create");
		printf("\n2-preorder");
		printf("\n3-inorder");
		printf("\n4-postorder");
		printf("\n enter your choice\n");
		scanf("%d",&x);
		switch(x)
		{  case 1:
			do
	     { 	nw=(struct node*)malloc(sizeof(struct node));
 			printf("\nenter info");
			scanf("\n %d",&nw->info);
			nw->left=NULL; nw->right=NULL;
			if(root==NULL)
			root=nw;
			else 
			insert(root,nw);
			printf("\n do you want to add another");
			ch=getche();
		  } while(ch=='y'||ch=='Y');
		     break;
		  case 2:
		  if(root==NULL)
		  printf("\n Tree is empty");	  
	      
		  else
		  preorder(root);
		  break;
		  
		  case 3:
		  if(root==NULL)
		  printf("\n Tree is empty");
		  else
		  inorder(root);
		  break;
		  
		  case 4:
		  if(root==NULL)
		  printf("\n Tree is empty");
		  else
		  postorder(root);
		  break;
		  default:
		  printf("\n wrong choice!!!!!");
       }
       
       printf("\n do you want to continue yes-y or No-n");
       ch=getche();
       
		}while(ch=='y'||ch=='Y');
	
		getch();
		return 0;
		
		}
	       
	void insert(struct node *rt,struct node *n)
	   { char ch1;
	    	
		printf("\n Left(L) or right(R)\n");
		ch1=getch();
		if(ch1=='R'||ch1=='r')
		{ if(rt->right==NULL)
		  rt->right=n;
		  else
		  insert(rt->right,n);
        } 
        
		else
		{ 
		  if(rt->left==NULL)
		   rt->left=n;
		   else
		   insert(rt->left,n);
		   
		}  
		
   }	
      void preorder(struct node *temp)
      { if(temp!=NULL)
      { printf("%d\t",temp->info);
         preorder(temp->left);
         preorder(temp->right);
         
	  }
	  }
	  void inorder(struct node *temp)
	  {  if(temp!=NULL)
	  {   inorder(temp->left);
	       printf("%d\t",temp->info);
	       inorder(temp->right);
	  }
	  }
	  
	  void postorder(struct node *temp)
	  {
	  	  if(temp!=NULL)
	  	  { postorder(temp->left);
	  	  postorder(temp->right);
	  	  printf("%d\t",temp->info);
			}
	  }
		
