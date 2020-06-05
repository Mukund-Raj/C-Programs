#include<bits/stdc++.h>
using namespace std;


void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}


void heapify(int arr[],int n,int i)
{
	int largest=i;//largest as root
	
	int l=2*i+1;//left element
	int r=2*i+2;//right element
	
	//if left child is largest than root
	if(l<n && arr[l] > arr[largest] )
		largest=l;
	
	if(r<n && arr[r] > arr[largest])
		largest=r;
		
	//if largest is not root
	if(largest!=i)
	{
		swap(arr[i],arr[largest]);
		
		//recursively call heapify the subtree which has the higher value
		heapify(arr,n,largest);
	}
	
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void heapsort(int arr[],int n)
{
	//creating heap
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
		print(arr,n);
		cout<<endl;
	//now actual sorting
	for(int i=n-1;i>=0;i--)
	{
		//move current root to end
		swap(arr[0],arr[i]);
		
		//call heapify to make the reduced array to heap
		heapify(arr,i,0);
	}
	print(arr,n);
}



int main()
{
	int arr[]={56,23,29,87,90,12,61,72};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,size);
	/*
	int x=3,y=4;
	cout<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<x<<" "<<y;
	*/
	return 0;
}
