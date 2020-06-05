#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void pass(vector<int>&arr,int i)
{
	int temp;
	for (int j = 0; j < arr.size() - i - 1; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						temp = arr[j+1];
						arr[j + 1] = arr[j];
						arr[j] = temp;
					}
				}
}

int main()
{
	vector<int>arr={5,4,3,2,1};
	vector<int>arr1(0);
	
	for(int i=0;i<arr.size();i++)
	{
		arr1.push_back(arr[i]);
		//cout<<arr[i]<<" ";
	}
	
	pass(arr,0);
	
//	for(int i=0;i<arr.size();i++)
//	{
		auto cur_pos=find(arr.begin(),arr.end(),5);
		auto prev_pos=find(arr1.begin(),arr1.end(),5);
//	}
	
	cout<<cur_pos-arr.begin()<<" "<<prev_pos-arr1.begin();
	cout<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
