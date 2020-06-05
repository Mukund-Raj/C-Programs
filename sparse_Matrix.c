#include<stdio.h>
#include<conio.h>
int nz,i,j,m1,n1;
void sparse();
void display();
void sparse_trans();
struct sparse
{ int row,col,item;
 
}spm[10];
 int main()
 { 
  sparse();
  sparse_trans();
  getch();
  return 0;
 }
 
  void sparse()
  {
  printf("enter the dim of sparse matrix");
  scanf("%d%d",&m1,&n1);
  printf("\n How many items ");
  scanf("%d",&nz);
  for(i=0;i<nz;i++)
  { printf("\nenter row,column and item\n");
  scanf("%d%d%d",&spm[i].row,&spm[i].col,&spm[i].item);
  }
  display();
  }
  
  void display()
 { int k=0;
   printf("The sparse matrix is:\n");
  for(i=0;i<m1;i++)
  { for(j=0;j<n1;j++)
  { if((spm[k].row==i)&&(spm[k].col==j))
  	printf("\t%d",spm[k].item);
	  else
	  printf("\t0");
	  printf("\t");
   }
    k++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    printf("\n");
  
  }  
  }
  
  { int t,k=0;
  struct sparse sp;
  for(i=0;i<nz;i++)
  { t=spm[k].row;
  spm[k].row=spm[k].col;
  spm[k].col=t;
  k++;
  }
  
  for(i=0;i<nz-1;i++)
  { for(j=i+1;j<nz;j++)
  { if(spm[i].row>spm[j].row)
    { sp=spm[i];
       spm[i]=spm[j];
       spm[j]=sp;
     }
  }
  	
  }
  display();	
  }
  
