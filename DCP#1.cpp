/*
Given a list of numbers and a number k, return whether any 
two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ifSum(vector<int>a,int k)
{
	int rem;
	for(int i=0;i<a.size();i++)
	{
		rem=k-a[i];
		if(find(a.begin(),a.end(),rem)!=a.end())
		return true;
	}
	return false;
}

int main()
{
	vector<int>a={17,15,3,7};
	int k=17;
	cout<<"Any two numbers adds up to "<<k<<" "<<ifSum(a,k);
	
	
	return 0;
}
