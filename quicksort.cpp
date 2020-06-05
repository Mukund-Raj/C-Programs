#include<iostream>
#include<vector>
#include<string>
using namespace std;

int partition(int arr[],int l,int h)
{
	int i=l-1;
	int pivot=arr[h];
	for(int k=l;k<=h-1;k++)
	{
		if(arr[k]<pivot)
		{
			i++;
			swap(arr[i],arr[k]);
		}
	}
	swap(arr[i+1],arr[h]);
	return i+1;
	
}
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
	int q=partition(arr,l,h);
		quicksort(arr,l,q-1);
		quicksort(arr,q+1,h);
	}
	
}


int main()
{
	int arr[]={20,5,8,12,9,10,3,1,34};
	quicksort(arr,0,9);
	
	for(int x:arr)
	cout<<x<<" ";
	return 0;
}

