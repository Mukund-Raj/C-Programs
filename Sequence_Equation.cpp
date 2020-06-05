#include<bits/stdc++.h>
using namespace std;

main()
{
	int n=5,index=0;
	vector<int>num{4,3,5,1,2};
	vector<int>y(0);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+1==num[j])
			{
				index=j+1;
				break;
			}
		}
		for(int j=0;j<n;j++)
		{
			if(index==num[j])
			{
				y.push_back(j+1);
				break;
			}
		}
		index=0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<y[i]<<" ";
	}
	return 0;
 } 
