#include<iostream>
using namespace std;

int main()
{
	int n=3;
	//cout<<"enter a number";
	//cin>>n;
	cout<<endl;
	int total=((n*(n+1))/2)+((n*(n-1))/2)+1,k=1,spaces=1,l;
	cout<<total<<endl;
	
	for(int i=n;i>=1;i--)
	{
		for(int m=1;m<spaces;m++)
		{
			cout<<"----";
		}
		spaces++;
		for(int j=1;j<=i;j++)
		{
			if(j>1)
			cout<<"*";
			if(k<10)
			cout<<k++<<"  ";
			else
			cout<<k++<<" ";
		}
		l=total;
			cout<<"";
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
			if(l<10)
			cout<<l++<<"  ";
			else
			cout<<l++<<" ";
		}
		total=total-i+1;
		cout<<endl;
	}
	
	return 0;
}
