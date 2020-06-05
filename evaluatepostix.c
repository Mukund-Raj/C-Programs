#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void evaluate(char post[20]);
 int stack[20],top=-1;
 int main()
 { 
   char post[20];
   printf("enter");
   gets(post);
   evaluate(post);
   return(0);
   getch();
   
    
 	
 }
  void  evaluate(char post[])
 {
 	int l,i,j,x=0,y=0;
 	l=strlen(post);
 	
   for(i=0;i<l;i++)
 	{
	 switch(post[i])
 	{
 	   case '^':
		y=stack[top];
		x=stack[top-1];
		top--;
		x=pow(x,y);
		stack[top]=x;
		break;
		case '/':
		y=stack[top];
		x=stack[top-1];
		top--;
		x=x/y;
		stack[top]=x;
		break;
		case '*':
		y=stack[top];
		x=stack[top-1];
		top--;
		x=x*y;
		stack[top]=x;
		break;
			case '+':
		y=stack[top];
		x=stack[top-1];
		top--;
		x=x+y;
		stack[top]=x;
		break;
			case '-':
		y=stack[top];
		x=stack[top-1];
		top--;
		x=x-y;
		stack[top]=x;
		break;
     
	  default:
	  top++;
	  if(post[i]>=48 && post[i]<=57)
	  { x=post[i]-48;
	    stack[top]=x;
	    x=0;
	 }
	 break;
    }
   }
   printf("the ans is %d",stack[top]);  
   
}

	 			
			  
 		
	 
	 
 
