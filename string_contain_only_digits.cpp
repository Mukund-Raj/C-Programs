#include<bits/stdc++.h> 
using namespace std;

bool check_digits(string s)
{
	for(char ch:s)
	{
		if(toascii(ch)<48 or toascii(ch)>57)
			{
				return false;
			}
	}
	return true;
}

// Driver program to test above functions 
int main() 
{ 
	cout<<boolalpha;
	string s="90";
	cout<<check_digits(s);
	return 0; 
} 

