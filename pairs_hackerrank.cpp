#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>arr{1,5,3,4,2};
	
	int x=5,y=2;
	
	int upper=1;
	for(int i=1;i<=y;i++)
	{
		upper*=(x--);
	}
	
	int lower=1;
	for(int i=y;i>=1;i--)
	{
		lower*=i;
	}
	
	cout<<upper/lower<<"\n";
	sort(arr.begin(),arr.end());
	
	int pair_count=0;
	int k=2;
	for(int i=0;i<arr.size()-1;i++){
		for(int j=i+1;j<arr.size();j++)
		{
			if(( arr[j]-arr[i] ) == k)
			{
				pair_count++;
				break;
			}
		}
	}
	
	cout<<pair_count;
}

