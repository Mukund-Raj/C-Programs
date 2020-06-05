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

int return_Quotient(int a,int b)
{
	int i=b,j=1;
	if(!b)
		return -1;
	else{
		
		while(i<=a){
			i=i+b;
			j++;
		}	
	}
	return j-1;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<endl;
	cout<<"Division is > "<<return_Quotient(a,b);
}
