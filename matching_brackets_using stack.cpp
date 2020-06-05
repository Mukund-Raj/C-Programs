#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="{{}]";
	
char stack[s.length()];

int top=-1;
int len=s.length();
int i=0;
bool flag=true;
char attop;

while(i<len)
{
if(s[i]=='('||s[i]=='{'||s[i]=='[')
{
    stack[++top]=s[i];
}

if(s[i]==']')
{
  attop=stack[top];
  top--;
  if(attop!='[')
    {
        flag=false;
        break;
    }
}

if(s[i]=='}')
{
  attop=stack[top];
  top--;
  if(attop!='{')
    {
        flag=false;
        break;
    }
}

if(s[i]==')')
{
    attop=stack[top];
  top--;
  if(attop!='(')
    {
        flag=false;
        break;
    }
}
i++;
}
/*
for(int i=0;i<s.length();i++)
	cout<<stack[i]<<"";*/
if(flag==true && top==-1)
cout<<"YES";

else
cout<<"NO";
	return 0;
}
