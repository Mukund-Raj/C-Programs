#include<stdio.h>
#define endl printf("\n")

     int main()
  { int n,i;
    printf("how many elements you want");
	 scanf("%d",&n);
     int a[n];
	 printf("\n enter elements:");
	 for(i=0;i<n;i++) 
	 scanf("%d",&a[i]);
	 printf("\n\nYour elements are\n");
	 for(i=0;i<n;i++) printf("%d \t",a[i]);
	 	 
	 endl;
	 int ele;
	 printf("\n Enter element you want to search:\n");
	 scanf("%d",&ele);
	 int index=-1;
	 	 for(i=0;i<n;i++) 
	 	 {
	 	 	if(a[i]==ele)
	 	 	{
	 	 		index=i;
	 	 		break;
			  }
		  }
		  if(index==-1)
		  printf("\nYour element is not found:\n");
		  
		  else
		  {
		    printf("\nYour element is found at [%d] index(zero based indexing) ",index);
		  	
		  }
		  return 0;
  }
     
  
