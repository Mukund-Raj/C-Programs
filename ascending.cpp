#include<iostream>
using namespace std;
  main()
{  
   int n,i,j,a[20],temp;
   cout<<"Enter number of elements <20:";
   cin>>n;
   cout<<"\n Enter elements:\n";
   for(i=0;i<n;i++) cin>>a[i];
   for(i=0;i<n-1;i++)
    { for(j=0;j<(n-1)-i;j++)
       { if(a[j]>a[j+1])
          { temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
		  }
	   }
	}    
	cout<<"sorted array is:\n";
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i];	
      return 0;
  }
  
