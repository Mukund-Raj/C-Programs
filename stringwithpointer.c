#include<stdio.h>
#include<string.h>
int main()
{
	char b[8]="world";
	char *a="jkl";
	int x=2;
	int *p=&x;
	
	b[0]='h';
	printf("string is %s\n",b);
	//printf("%u",p);
	
//	printf("hello"+"2");
	/*
	int i,j;
	//strcat(b,a);
	//b[2]='a';
	printf("%d",strlen(b));
	/*
	for(i=0;i<b[i]!='\0';i++)
		printf("%c",b[i]);
	
	/*
	for(i=0,j=4;i<j;a[i++]=a[j--]);
	printf("%s",a);
	*/
	return 0;
}
