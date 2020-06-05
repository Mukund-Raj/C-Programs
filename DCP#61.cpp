/*Implement integer exponentiation. That is, 
implement the pow(x, y) function, 
where x and y are integers and returns x^y.

Do this faster than the naive method of repeated multiplication.

For example, pow(2, 10) should return 1024.
*/

#include<iostream>
using namespace std;

long long int pow(int x,int y)
{
	return x<<(y-1);
	
}

int main()
{
	
	cout<<pow(2,2);
	return 0;
}
