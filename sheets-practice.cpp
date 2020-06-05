#include<stdio.h>

int main()
{
	int a=10;
	int *ptr=&a;
	//printf("%u",&ptr);
	printf("\n");
	printf("%d %d",++*ptr,*ptr++);
	return 0;
}
