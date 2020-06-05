/*
Given an array of integers, find the first missing positive integer in linear 
time and constant space. In other words, find the lowest positive integer that 
does not exist in the array. The array can contain duplicates and negative
 numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.
*/
/*
//we could do this

int getMissingNo(int a[], int n) 
{ 
  
    int total = (n + 1) * (n + 2) / 2; 
    for (int i = 0; i < n; i++) 
        total -= a[i]; 
    return total; 
}//taking sum of numbers from 1 to n-1 if array is given from 1 to n

int getMissingNo(int a[], int n)  
{  
    int i, total=1;  
      
    for ( i = 2; i<= (n+1); i++) 
    { 
        total+=i; 
        total -= a[i-2]; 
    } 
    return total;  
}  





*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a{3,4,-1,1};
	sort(a.begin(),a.end());
	int start=a[0];
	int flag=1;
	for(int x:a)
	cout<<x<<" ";
	for(int i=1;i<a.size();i++)
	{
		start+=1;
		if(start==a[i])
		{
			continue;
		}
		else
		{
			if(start==0)
			{	
			  start=a[i];
			}
			else
			break;
		}
	}
	if(start==a[a.size()-1])
	start+=1;
	
	cout<<"missing"<<start;
	return 0;	
}
