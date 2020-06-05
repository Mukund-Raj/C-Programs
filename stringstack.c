#include<stdio.h>
#include<string.h>
char stack[50];
int top=-1;
int main()
{ char str[50];
int i,j=0,l;
printf("enter a string");
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
  { top++;
  stack[top]=str[i];
  }
  for(i=top;i>=0;i--)
  str[j++]=stack[i];
  printf("\n the reverse of string using stack is\n");
  puts(str);
	return 0;
}
