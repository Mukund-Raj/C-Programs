#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}
void bubble_sort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-1)-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}	
		}
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
	bubble_sort(arr,6);
	cout<<"\nafter sorting\n";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}


