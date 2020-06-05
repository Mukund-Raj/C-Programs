#include<iostream>
using namespace std;

class add
{ int a;
 public:
 	add()
 	{
	 }
	 add(int x)
 	{ a=x;
	 }
	 void show()
	 { cout<<endl<<a;
	 }
	 add operator +(add c)
	 { add b;
	   b.a=a+c.a;
	   return b;
	 }
};

  main()
  { add a1,a2,a3;
    cout<<"\n\t sum of two numbers using";
	cout<<"op overloading\n";
	a1=add(4);
    a2=add(7);
    cout<<"\nThe two values for sum is:";
    a1.show();
    a2.show();
    a3=a1+a2;
    cout<<"\nThe sum of two numbers is";
    a3.show();
    return 0;
  }
