w/*
Given a list of integers, return the largest product that can be made 
by multiplying any three integers.

For example, if the list is [-10, -10, 5, 2], 
we should return 500, since that's -10 * -10 * 5.

You can assume the list has at least three integers.
*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int largest_product(vector<int>arr)
{
	int temp;
	int prod=1;
	for(int i=0;i<arr.size()-1;i++)
	{
		for(int j=0;j<arr.size()-i-1;j++)
		{
			if(abs(arr[j])>abs(arr[j+1]))
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
	for(int i=arr.size()-3;i<arr.size();i++)
	{
		prod*=abs(arr[i]);
	}
	return prod;
}

int main()
{
	vector<int>arr={-10,-10,5,2};
	cout<<"The largest product is "<<largest_product(arr);
	
	return 0;
}
