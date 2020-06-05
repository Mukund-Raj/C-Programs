#include<stdio.h>

 int main()
 { int num,top=-1,i=0,temp,rem;
 
  char stack[10];
 printf("enter a decimal(base 10) number:\n");
 scanf("%d",&num);
 temp=num;
 while(temp!=0)
 { rem=temp%2;
    temp/=2;
    top++;
	stack[top]=rem;
    
}
    printf("|n Binary Equivalent is\n");
    for(i=top;i>=0;i--)
    printf("%d",stack[i]);
 	
 }
 	
 
