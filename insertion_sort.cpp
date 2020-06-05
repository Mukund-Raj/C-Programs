#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}
void insertion_sort(int arr[],int n)
{
	int j,key;
	for(int i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}


int main()
{
	int arr[]={-3,9,12,45,12,-90};
	
	cout<<"before sorting \n";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	insertion_sort(arr,6);
	cout<<"\nafter sorting\n";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}


