#include<iostream>
using namespace std;
int stack[20],top=-1;
void reverse(int x,int y,int n=0);
void push();
void dis();
int main()
{ 
 cout<<"enter stack elements";
 push();
 dis();
 cout<<endl<<"\nreverse  starts";
 reverse(0,top,0);
 dis();
 return 0;
}
void push()
{  int m; 
  for(int i=1;i<=6;i++)
  { if(top==19)
  { cout<<"stack overflow";
	return;
  }
  else
  { cin>>m; 
    top++;
    stack[top]=m;   
  }

  }
}
void reverse(int x,int y,int n)
{  if(x==y)
   return;
   
   else
   { n=stack[x];
    stack[x]=stack[y];
    stack[y]=n;
	} 
	x++;
	y--;
	reverse(x,y,0);
}
  void dis()
  { for(int i=top;i>=0;i--)
      cout<<endl<<stack[i];
  }
