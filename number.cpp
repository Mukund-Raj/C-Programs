
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	 int n,m,i,z=0,j,a[5],rem,r=0,r1=0,c,temp;
	 cout<<" how many digits you want\n";
	 cin>>n;
     
	 cout<<"\n enter digits you want to entere\n";
	 for(i=0;i<n;i++)
	 {  cin>>a[i];
	 	if(a[i]==0)
	     z++;
	 }
	 
	   for(i=0;i<n;i++)
	 { for(j=0;j<(n-1)-i;j++)
	 { if( a[j]>a[j+1])
	   { temp=a[j];
	   	 a[j]=a[j+1];
	   	 a[j+1]=temp;
	   }
	 }
       }
 	 for(i=n;i>0;i--)
	 { rem=a[i-1];
	   r=rem+r*10;
	 }
	 cout<<"\n the largest is:"<<r;
	 
	 for(i=0;i<=z;i++)
	 { for(j=0;j<=(z-1)-i;j++)
	 { if(a[j]<a[j+1])
	    { temp=a[j];
	    a[j]=a[j+1];
	    a[j+1]=temp;
		}
	 }
	 }
	   m=n;
      if((z+1)!=n)
	  {
	    for(i=0;i<n/2;i++)
	   	{ c=a[i];
	   	a[i]=a[--m];
	   	a[m]=c;
	   	} 
       } 
	   
	   for(i=n;i>0;i--)
	   { rem=a[i-1];
	     r1=rem+r1*10;
	   }
	   
	   cout<<"\n the smallest that can"
	       <<" make with entered numbers is:"<<r1;
	 return(0);
	 getch();
}
