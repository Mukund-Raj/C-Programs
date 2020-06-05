#include <bits/stdc++.h> 
using namespace std; 

// Driver code 
int main() 
{ 
 	vector<int>arr{1,5,3,4,2};
 	sort(arr.begin(),arr.end());
	
	int target=2;
	
	int pairs=0;
	
	int ele=0,i=0;
	//arr.erase(arr.begin());
	//cout<<arr[0];
	
	while(arr.size()!=1)
	{
		ele=arr[i];
		for(int j=i+1;j<arr.size();j++)
		{
			if((arr[i]+target)==arr[j])
			{
				pairs++;
			}
		}
		arr.erase(arr.begin());
	}
	
	cout<<pairs;
} 

