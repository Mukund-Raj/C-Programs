/*
This problem was asked by Facebook.
Given three 32-bit integers x, y, and b, return x if b is 1 and y if b is 0, 
using only mathematical or bit operations. You can assume b can only be 1 or 0.
*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int b=1;
	//we are taking & of every bit ,its the ssame program to find even and odd
	//using bitwise operators
	 
	if(b&1)
	cout<<"b is one"<<endl;
	else
	cout<<"b is zero"<<endl;
	return 0;
}
