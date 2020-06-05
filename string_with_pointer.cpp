#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{	
	char str[4]="hello";
	char *str1 = "world";
	
	strcpy(str,str1);
	
	printf("%s %d", str,strlen(str));
}
