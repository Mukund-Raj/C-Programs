#include <iostream>  // includes cin to read from stdin and cout to write to stdout
using namespace std; 
int main()
{ 
int t,rem,temp,i,k,flag=0;
  cin>>t;
  for(int j=1;j<=t;j++)
  { cin>>temp;
    for( k=temp;k>=1;k--)
    { 
      i=k;
	rem=i%10;
      while(i!=0)
      { if(rem>=i%10)
       {rem=i%10;
        i=i/10;
	   }
	   else
	   break;
	   
	  }
	  if(i==0)
	  { break;
	    flag=1;
	  }
	  if(flag==1)
	  break;

	}
	cout<<endl<<"Case #"<<j<<":"<<"  "<<k;
  	
  }
	return 0;
}
