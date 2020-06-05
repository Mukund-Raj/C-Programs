#include<stdio.h>
#include<string.h>

int main()
{
	char ch[]="wordness";
	int l,r,m;
	printf("String is: ");
	printf("%s",ch);
	printf("\nhow many chars you want from left,right and middle");
	scanf("%d%d%d",&l,&m,&m);
	int i;
	printf("String from the left\n");
	for(i=0;i<l;i++)
	{
		printf("%c",ch[i]);
	}
	printf("\nString from the right\n");
	for(i=strlen(ch)-r;i<strlen(ch);i++)
	{
		printf("%c",ch[i]);
	}
	printf("\nString from the middle\n");
	for(i=strlen(ch)/2-(m/2);i<strlen(ch)/2+m/2;i++)
	{
		printf("%c",ch[i]);
	}
}
