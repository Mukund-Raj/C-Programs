#include <bits/stdc++.h> 
using namespace std;

void merge(int *arr,int start,int mid,int end)
{
	int temp[end-start+1];
	int i=start,j=mid+1,k=0;
	
	while(i<=mid && j<=end)
	{
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			k+=1;
			i+=1;
		}
		else{
			temp[k]=arr[j];
			k+=1;
			j+=1;			
		}
	}
	
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end){
		temp[k]=arr[j];
		j++;
		k++;
	}
	
	for(int i=start;i<=end;i++)
	{
		arr[i]=temp[i-start];
	}
	
}

void print(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void merge_sort(int *arr,int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

// Driver code 
int main() 
{ 
int arr[]={25,14,33,3,11};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"\nUnsorted array is\n";
print(arr,size);
merge_sort(arr,0,size-1);


cout<<"\nsorted array is\n";
print(arr,size);

 return 0;
} 

