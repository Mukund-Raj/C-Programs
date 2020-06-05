#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
void MaxHeapify(int a[],int n,int i)
{
	int largest=i;
	
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && a[largest]<a[l])
	largest = l;
	
	if(r<n && a[largest]<a[r])
	largest = r;
	
	if(largest != i)
	{
		swap(a[largest], a[i]);
		MaxHeapify(a,n,largest);
	}
	
}

void BuildMaxheap(int a[],int size)
{
	for(int i=size/2-1;i>=0;i--)
		MaxHeapify(a,size,i);
	
}

int ExtractMax(int a[],int &size)
{
	int max=a[0];
	a[0]=a[size-1];
	size--;
	MaxHeapify(a,size,0);
	return max;
}

int maximum(int a[])
{
	return a[0];
}

void increaseKey(int a[],int index,int key)
{
	a[index]=key;
	
	while(index>0 && (a[(index-1)/2]<a[index]))
	{
		int temp;
		temp=a[(index-1)/2];
		a[(index-1)/2]=a[index];
		a[index]=temp;
		
		index=(index-1)/2;
	}
}


void print(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"  ";
	}
}

int main()
{
	int a[]={19,8,12,18,7,11,20,1};
	int size=8;	
	BuildMaxheap(a,size);
	print(a,size);
	
	cout<<"\n Maximum element is "<<ExtractMax(a,size);
	cout<<"\n";
	//print(a,size);
	
	increaseKey(a,3,22);
	
	
	cout<<"\n Maximum element is "<<maximum(a);
	cout<<"\n";
	
	print(a,size);
	return 0;
}
