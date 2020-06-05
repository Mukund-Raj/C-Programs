#include<stdio.h>

int jumble(int x,int y)
{
	x=2*x+y;
	return x;
}
int main()
{	/*
	int x=2,y=5;
	y=jumble(y,x);
	x=jumble(y,x);
	printf("%d",x);
	*/
	int arr[]={1,2,3,4,5,6,7,8,9},*ip=arr+4;
	printf("%d",*ip);
	return 0;
}
