#include<stdio.h>
#include<string.h>

int main()
{
	char ch[]="kristen come right";
	printf("length of the string:%d",strlen(ch));
	char ch1[10];
	strcpy(ch1,ch);
	printf("\nch1 is %s",ch1);
	printf("ch1 and ch are %d",strcmp(ch1,ch));
	strcat(ch1," back");
	printf("\nNow ch1 is %s",ch1);
	
	printf("\nch1 in uppercase: %s",strupr(ch1));
	printf("\nch1 in lowercase: %s",strlwr(ch1));
	printf("\nch1 in reverse: %s",strrev(ch1));
	return 0;
}
