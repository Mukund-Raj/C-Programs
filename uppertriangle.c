#include<stdio.h>
#include<conio.h>
 void upper(int a[][3]);
int main()
{ 
  int a[3][3];
   int i,j;
   printf("enter elements\n");
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    { scanf("%d",&a[i][j]);
	}
  }
  upper(a);
  return 0;
}
 void upper(int a[][3])
 { int i,j,flag=0;
   for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    { if(i>j)
      { if(a[i][j]!=0)
       {  flag=1;
	       break;
		} 
	  }
	}
	}
	
	if(flag==1)
	printf("not upper triangle");
	
	else
  	{  printf("upper triangle\t upper triangl is\n");
      for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
      { if(i<=j)
        printf("%d",a[i][j]);
        else
        printf(" ");
	  }
	  printf("\n");
    }
    
	}
	} 
  
  
  
 
