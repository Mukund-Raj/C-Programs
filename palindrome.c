#include<stdio.h>
#include<string.h>
int main()
{
	char word[100];
	if(fgets(word,sizeof(word),stdin)>0)
	{
		printf("%s",ispalindrome(word)?"true":"false");
	}	
}

int ispalindrome(char word[])
{
	int len=0;
	int i=0;
	for(i=0;i<word[i]!='\0';i++)
		len++;
	printf("%d",len);
	return 0;
}
