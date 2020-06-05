#include<bits/stdc++.h>
using namespace std;



int main()
{
	vector<int>a{3,4,2,5,1};
	int count=0;
	int min,k=0;
	for(int i=0;i<a.size()-1;i++)
	{
		min=*min_element(a.begin()+i,a.end());
		if(a[k]==min)
		{
		k++;
		continue;
		}
		else
		{
			int temp=a[k];
			auto it=find(a.begin()+i,a.end(),min);
			a[k]=*it;
			*it=temp;
			k++;
			count++;
		}
	}
	for(int x:a)
	cout<<x<<" ";
	
	cout<<endl<<count;
	return 0;
}
