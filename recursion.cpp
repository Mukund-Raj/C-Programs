#include<iostream>
using namespace std;
//void printn21(int n);
void print12n(int n,int m);
 int main()
 { int n;
   cin>>n;
   cout<<endl;
   //printn21(n);
   print12n(n,1);
   return 0; 
 	
 }
 /*void printn21(int n)
 { if(n==1)
    {cout<<n<<endl;
	  return;
	}
	
    
    else
    cout<<n<<endl;
    print(n-1);
 	
 }
 */
 
 void print12n(int n,int m)
 { if(n==m)
   { cout<<m<<endl;
      return; 
   }
   else
   cout<<m<<endl;
   print12n(n,m+1);
 }
