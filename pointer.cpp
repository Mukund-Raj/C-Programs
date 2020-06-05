#include<iostream>
using namespace std;
void pointer(int **x);
int main()
{ int *p;
int x;
cout<<"enter x";
cin>>x;
p=&x;
cout<<"\n*p is"<<*p;
cout<<"\naddress of x is"<<&x;
cout<<"\nvalue p"<<p;
cout<<"\naddress of p is"<<&p;	
  pointer(&p);
}

void pointer(int **x)
{  
	cout<<"value of x is"<<**x;
}
