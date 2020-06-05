#include<stdio.h>

int main()
{
	//declaring a variable num for storing a number 
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("fibonaaci series is:\n");
	//we are printing first two values of series here which are 0 and 1
	printf("0 1 ");		
	fib(num-2,0,1);
	return 0;
}

void fib(int n,int first,int second)
{
	int third;
	if(n==0)
	return;
	
	third=first+second;
	printf("%d ",third);
	first=second;
	second=third;
	fib(--n,first,second);

}
