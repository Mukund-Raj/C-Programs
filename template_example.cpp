#include<bits/stdc++.h>
using namespace std;

template <typename T>
void Swap(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
	
}


int main()
{
	int x=1;
	int y=2;
	cout<<"Before swap\n";
	cout<<x<<" "<<y;
	Swap(x,y);
	cout<<"\nAfter swap\n";
	cout<<x<<" "<<y;
	
	char x1='a',y1='b';
	cout<<"Before swap\n";
	cout<<x1<<" "<<y1;
	Swap(x1,y1);
	cout<<"\nAfter swap\n";
	cout<<x1<<" "<<y1;
	return 0;
}
