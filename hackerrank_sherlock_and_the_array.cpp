/*
two cases terminated due to timout
*/
#include<bits/stdc++.h>
using namespace std;

int sumleft(vector<int>arr,int pos)
{
	int sum=0;
	while(--pos>=0)
		sum+=arr[pos];
	
	return sum;
}
int sumright(vector<int>arr,int pos)
{
	int sum=0;
	while(++pos<arr.size())
		sum+=arr[pos];

	return sum;
}

int main()
{
	vector<int>arr{1,2,3};
	//cout<<sumleft(arr,0);
	//cout<<sumright(arr,0);
	
	int i=arr.size()/2;
	int lsum,rsum;
	bool flag=false;
	while(1)
	{
		lsum=sumleft(arr,i);
		rsum=sumright(arr,i);
		if(lsum==rsum){
			cout<<"YES";
			flag=true;
			break;
		}
		else if(lsum>rsum)
		{
			i=i/2;
		}
		else if(lsum<rsum)
		{
			i=(i+arr.size())/2;
		}
		
		else
		break;
	}
	
	if(!flag)
	{
		cout<<"NO";
	}
}
