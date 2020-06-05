#include<iostream>
using namespace std;

main()
{ int a=5,b=3,c=9;
 ((a<b) && (c<b))?cout<<b:(a<c)?cout<<c:cout<<a;
 return 0;
}

