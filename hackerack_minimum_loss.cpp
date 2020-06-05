#include <bits/stdc++.h> 
using namespace std; 

// Driver code 
int main() 
{ 
 	vector<int>arr{20,7,8,2,5};
 	int min=abs(arr[0]-arr[1]);
 	
 	for(int i=0;i<arr.size()-1;i++)
 	{
 		for(int j=i+1;j<arr.size();j++)
		 {
			if((arr[i]-arr[j])>=0 && abs(arr[i]-arr[j])<min)
			min=abs(arr[i]-arr[j]);
	     }		 
	}
	cout<<min;
} 

