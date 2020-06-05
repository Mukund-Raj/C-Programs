#include<stdio.h>

int main()
{
	/*
	int a[2]={1,2,3,4,2,2,2,2,2,2};
	int j;
		for(j=0;j<sizeof(a)/sizeof(int);j++)
		{
			printf("%d ",a[j]);
		}
	*/
	
	int a=10;
	
	char *b = (char *)&a;
	b[0] = 0;
	printf("%d ",a);
	
	
	/*
	int a[][4]={1,2,3,4,5,6};
	int i,j;
	int c = sizeof(a[0])/sizeof(int);
	int r = (sizeof(a)/sizeof(int))/c;
	printf("%u \n",&a);
	printf("%u \n",&a[1][0]);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	*/
}
