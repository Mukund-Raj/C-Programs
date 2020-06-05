
#include<stdio.h>
#include<conio.h>
int a[10][10],i,j,m,n;
void SBD();
void input();
  int main()
  { 
    printf("program begin");
    input();

  	return(0);
	  getch();
  	
  }
  void SBD()
  {
  	int sum=0;
  	for(i=0;i<m;i++)
  	{ for(j=0;j<n;j++)
  	  { if((m%2==0) || (m%2!=0) )
       { if((i==j) || (i+j==m-1))
        { printf("%d ",a[i][j]);
        sum=sum+a[i][j];
        }
        else
        printf(" ");
        }  
		}
		printf("\n");
		
		 }
		
		
		 printf("\n the sum of digonals is %d",sum);
  }
  
   
    void input()
    {
    	printf("\n enter row and column");
    	scanf("%d %d",&m,&n);
    	printf("\n enter array");
    	for(i=0;i<m;i++)
		  for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
			
		SBD();
			 
		
	}
