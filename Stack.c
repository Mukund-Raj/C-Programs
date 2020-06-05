#include<stdio.h>
#include<conio.h>
#include<string.h>
void infixtopos(char infix[]);
void push(char ch);
 int prec(char ch);
 char pop();
 int stack[50],top=-1;
 int main()
 {  
 char infix[50];
   printf("enter infix");
   gets(infix); 
 
   infixtopos(infix);
   getch();
   return 0;
}

 void infixtopos(char infix[])
 {
 	int l;
 	char symb,temp,post[50];
 	static int ind=0,pos=0;
 	  l=strlen(infix);
	 while(ind<l)
 	{ symb=infix[ind];
	 switch(symb)
	 {  case '(':
	 	push(symb);
	 	break;
	 	
	 	case')':
		 temp=pop();
		 while(temp!='(')
		 {post[pos]=temp;
		 temp=pop();
		 pos++;
		 }
		 break;
		 
		 case '^':
		 case '*':
		case '-':
		case '/':
		case '+':
		 while(prec(stack[top])>=prec(symb))				
	 	{  temp=pop();
	 	  post[pos]=temp;
	 	  pos++;
	 	 }
		 push(symb);
		 break;
		 
		 default:
		 post[pos++]=symb;
	     break; 
	}
	ind++;
     }
	while(top>0)
	{ temp=pop();
	 post[pos++]=temp;
	}
	post[pos++]='\0';
	printf("\n the postix exp is");
	puts(post);
	 
}
 	
	 
	 void push(char ch)
	 { if(top>=49)
	    { printf("stack overflow ");
	      getch();
	      return;
	      
		}
		else
		{ 
		stack[++top]=ch;
	}
}
    char pop()      
  {  char h;
        if(top==-1)
        { printf("stack overflow");
		 getch();
		 return 0;;
	   }
	   
	   else
	   { h=stack[top];
	    top--;
	    return(h);
	   }
  }
      int prec(char x)
      {
      	 if(x=='^')
      	 return 5;
      	 else if(x=='*'||x=='/')
      	 return 4;
      	 else if(x=='+'|| x=='-')
      	 return 3;
      	 else
      	 return 2;
      	 
	  }
	 
