#include<bits/stdc++.h>
using namespace std;

int if_common(vector<int>c)
{
	
}

int main()
{
	int n=3,m=6;
	vector<int>order {2,1,1,3,2,3}; //{1,2,3,1,2,3,1,2,3};
	int count=0,flag=0;
	for(int i=0;i<order.size()/n;i++)
	{
		vector<int>c(order.begin()+i*n,order.begin()+(i+1)*n);
		
		sort(c.begin(),c.end());
		
		for(int j=0;j<c.size();j++)
		{
			if(find(c.begin()+j+1,c.end(),c[j])==c.end())
				continue;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"NO";	
			break;
		}
		else
		continue;
		
		c.clear();
	}
	if(flag==0)
	cout<<"YES";
	return 0;
}
