#include<stdio.h>
#include<conio.h>
#include<string.h>
void intopre();
void infixtopos(char infix[]);
void push(char ch);
 int prec(char ch);
 char pop();
 int stack[50],top=-1;
 int main()
 {  
 char infix[50];
 int x;
   printf("enter infix");
   gets(infix); 
 cout<<"\n what do you want\n";
 cout<<"\t 1-PREFIX\n";
 cout<<"\t 2-POSTFIX\n";
 cout<<"\t 3-Or Both\n";
 cout<<"enter your choice";
 cin>>x;
 switch()
 {
 	case 1:
   infixtopos(infix);
    break;
	case 2:
	intopre(infix);		
     break;
	 case 3:
	 infixtopos(infix);  
	 intopre(infix);
	 default:
	 	cout<<"\nwrong choice!!!@@";
  } 
      getch();
   return 0;
}
  //infix to prefix
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
	cout"\n the postix exp is:\t";
	cout<<post;
	 
}
 	
	 
	 void push(char ch)
	 { if(top>=49)
	    {  cout<<"stack overflow ";
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
        { cout<<"stack overflow";
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
	 //infix to postfix
	 void intopre(char infix[],char prefix[])
	 { int i,j=0;
	   char symb;
	   strrev(infix);
	   ++top;
	   stack[top]='#';
	   for(i=0;i<strlen(infix))
    {  symb=infix[i];
      if((check(symb))=0)
      prefix[j++]=symb;
      else
      { if(symb=='(')
        push(symb);
        else if(symb=='(')
        {
        	 while(stack[top]!=')')
		      prefix[j++]=pop();
		     
			  pop();
		    }
		else if((prec(stack[top])>=prec(symb)))
		{push(symb);
		
		}
          else
          { while(prec(stack[top])>prec(symb))
          { prefix[j++]=pop();
		            	 
		  }
          	push(symb);
          
		  }
		}
	}
	while(stack[top]!='#')
	{prefix[j++]=pop();
	}
	prefix[j]='\0';
	strrev(prefix);
	  cout<<"\t\nprefix form is\n\t"<<prefix;
		getch();
		
	  }
		int check(char symb)
		{ if(symb>='a'&& symb<='z')
			return 0;
			else
			return 1;
		}
        	

