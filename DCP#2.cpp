/*
Given an array of integers, return a new array such that each element at 
index i of the new array is the product of all the numbers in the original 
array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be 
[120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

*/
/*******

Witout and with division
in with division if array is 1 2 3 4 5
multiply all the elements in one pass
and then divide it with a[i] as 1*2*3*4*5 /1=2*3*4*5
********/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int multi(vector<int>a,int except)
{
	int f=1;
	for(int i=0;i<a.size();i++)
	{
		if(i!=except)
		f=f*a[i];
	}
	return f;
}

vector<int> array_manipulation_wihout_div(vector<int>a)
{
	vector<int>b(a.size(),0);
	for(int i=0;i<a.size();i++)
	{
		b[i]=multi(a,i);
	}
	return b;
}
void array_manipulation_with_div(vector<int>&a)
{
	int prod=1;
	for(int x:a)
	prod*=x;
	
	//vector<int>b(a.size(),0);
	for(int i=0;i<a.size();i++)
	{
		a[i]=prod/a[i];
	}
}


int main()
{
	vector<int>a={1,2,3,4,5};
	cout<<"Original array\n";
	for(int x:a)
		cout<<x<<" ";
	cout<<endl;
	cout<<"After it\n";
	//vector<int>c=array_manipulation_without_div(&a);
	array_manipulation_with_div(a);
	/*for(int x:c)
		cout<<x<<" ";
	cout<<endl;
	*/
	for(int x:a)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}


