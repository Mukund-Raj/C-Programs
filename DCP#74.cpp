/*
Suppose you have a multiplication table that is N by N. 
That is, a 2D array where the value at the i-th row and j-th 
column is (i + 1) * (j + 1) (if 0-indexed) or i * j (if 1-indexed).

Given integers N and X, write a function that returns the number of 
times X appears as a value in an N by N multiplication table.

solution just make the 2d matrix and side by side comapring the value and counting them
simple method to do it
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n=6,x=12,count=0;
	vector<vector<int>>a(6);
	for(int i=0;i<n;i++)
	{	
	
		for(int j=0;j<n;j++)
		{
			a[i].push_back((i+1)*(j+1));	
			if((i+1)*(j+1)==x)
			count++;
		}
			
		//cout<<endl;
	}
	for(int i=0;i<n;i++)
	{	
	
		for(int j=0;j<n;j++)
		{
		cout<<a[i][j]<<"|";
		}
			
		cout<<endl;
	}
	
	cout<<endl<<x<<" is here "<<count<<" times";
	return 0;
}


