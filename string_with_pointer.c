#include<stdio.h>
#include<string.h>


int main()
{	/*
	char *s="hello,world";
	char s1[9];
	strncpy(s1,s,9);
	*/
	int x=5;
	int *p=&x;
	printf("%d",**p);
	
	return 0;
}
