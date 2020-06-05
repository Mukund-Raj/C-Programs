#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>arr1={203,204,205,206,207,208,203,204,205,206};
	vector<int>arr2={203,204,204,205,206,207,205,208,203,206,205,206,204};
	vector<int>miss(0);
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	int count=0;
	
	for(int i=0;i<arr1.size();i++)
	{
		while(find(arr1.begin(),arr1.end(),arr1[0])!=arr1.end())
		{
				count++;
		}	
	}
	
	return 0;
}
