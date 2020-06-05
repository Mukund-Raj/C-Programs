#include<stdio.h>
#include<stdlib.h>
void create();
void preorder(struct bst *ptr);
void postorder(struct bst *ptr);
struct bst
{ int data;
  struct bst *l;
  struct bst *r;
}*root=NULL;

  int main()
  { create();
    printf("\n Preorder traversal\n");
    preorder(root);
	printf("\n Postorder traversal\n");
    postorder(root);
    return 0;
  }
  
  void create()
  { int n,i;
    struct bst *newn,*ptr,*pptr;
    printf("\nenter no of nodes\n");
    scanf("%d",&n);
    printf("\n enter %d values\n",n);
    root=(bst*)malloc(sizeof(bst));
    root->l=NULL;
    root->r=NULL;
    scanf("%d",&root->data);
    for(i=2;i<=n;i++)
    { newn=(bst*)malloc(sizeof(bst));
      newn->l=newn->r=NULL;
      scanf("%d",&newn->data);
      ptr=root;
      while(ptr!=NULL)
      { pptr=ptr;
        if(newn->data<ptr->data)
        { ptr=ptr->l;
          if(ptr==NULL)
          pptr->l=newn;
          
		}
		else
		{ ptr=ptr->r;
		 if(ptr==NULL)
		 pptr->r=newn;
		}
	  }
	}  
  }
  
   void preorder(struct bst *ptr)
   { if(ptr!=NULL)
     { printf("%d ",ptr->data);
       preorder(ptr->l);
       preorder(ptr->r);
       
	 }
   }
   void postorder(struct bst *ptr)
   { if(ptr!=NULL)
     { postorder(ptr->l);
       postorder(ptr->r);
       printf("%d ",ptr->data);
	 }
   }
