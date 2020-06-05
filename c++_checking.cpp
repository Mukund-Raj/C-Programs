#include<iostream>
#include<string>
using namespace std;
	struct Point 
{ 
   int x, y, z; 
}; 
  

int main()
{
/*struct Point p1 = {.y = 0, .z = 1, .x = 2}; 
   struct Point p2 = {.x = 20}; 
  
cout << p2.y;
//cout<<endl<<st1.x;
*/
int a=5,b=10;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;

/*
const char *s="hello";
string s1("\"\"");
cout<<s1<<"\n";
*/
	return 0;
}
