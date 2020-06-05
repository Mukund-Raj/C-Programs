/*
Successfully accepted
*/
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int>arr{-20,-3916237,-357920,-3620601,7374819,-7330761,30,6246457,-6461594,266854};
	sort(arr.begin(),arr.end());
	for(int x:arr)
	{
		cout<<x<<" ";
	}
	
	cout<<endl;
	vector<int>diff(0);
	int d;
	for(int i=0;i<arr.size()-1;i++)
	{
		d=arr[i]-arr[i+1];
		diff.push_back(abs(d));
	}
	/*
	for(int x:diff)
	{
		cout<<x<<" ";
	}*/
	
	int min=*min_element(diff.begin(),diff.end());
	cout<<min;
	//cout<<endl<<;
	
	diff.clear();
	for(int i=0;i<arr.size()-1;i++)
	{
		d=arr[i]-arr[i+1];
		//cout<<"Working";
		if(abs(d)==min)
		{
			//cout<<"Working";
		diff.push_back(arr[i]);
		diff.push_back(arr[i+1]);
		}
	}
	
	cout<<endl;
	for(int x:diff)
	{
		cout<<x<<" ";
	}
	
	return 0;
} 

