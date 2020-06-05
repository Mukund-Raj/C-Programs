#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}
void selection_sort(int arr[],int n)
{
	//find the minimum element in unsorted array
	int min_index;
	for(int i=0;i<n-1;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
				min_index=j;
		}
		swap(&arr[min_index],&arr[i]);
	}
}



int main()
{
	int arr[]={3,9,12,45,2,90};
	
	cout<<"before sorting \n";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	selection_sort(arr,6);
	cout<<"\nafter sorting\n";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}


