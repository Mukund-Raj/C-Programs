/*
This question was asked by ContextLogic.

Implement division of two positive integers without using the division,
 multiplication, or modulus operators. Return the quotient as an integer,
  ignoring the remainder.
*/



#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

int add(int x,int y)
{
	while(y!=0)
	{
		//carry bits contains both the set bits of x and y
		int carry=x&y;
		// Sum of bits of x and y where at  
        //least one of the bits is not set  
		x=x^y;
		
		y=carry<<1;
		// Carry is shifted by one so that adding  
        // it to x gives the required sum  
	}
	return x;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<endl;
	cout<<add(a,b);
}
