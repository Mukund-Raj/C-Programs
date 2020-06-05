/*
Given a string of round, curly, and square open and closing brackets, 
return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
*/

#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;



bool paren_remove(string paren)
{
	stack<char>chars;
	//use the stack if its ( then push it
	//if its ) then if its empty,if it is empty then removecount++
	//else pop from the stack
	//simple is that and after the loop check if there are open ( in the stack 
	//if there are then just add it to the removecount
	bool flag=true;
	int i=0;
	char attop;
	
	while(i<paren.size()){
		
		if( paren[i]=='(' || paren[i]=='[' || paren[i]=='{')
		{
			chars.push(paren[i]);	
		}
		if(paren[i]==')' || paren[i]==']' || paren[i]=='}')
		{
		
		if(!chars.empty())
		{
			attop=chars.top();
			chars.pop();
		}
		else
		{
			flag=false;
			break;
		}
		
		if( paren[i]==')')
		{
			if(attop!='(')
			{
				flag=false;
				break;	
			}	
		}
		
		else if(paren[i]==']')
		{
			
			if(attop!='[')
			{
				flag=false;
				break;	
			}				
		}
		else if(paren[i]=='}')
		{
			if(attop!='{')
			{
				flag=false;
				break;	
			}
		}
		}
     	i++;
	}
	
	if(flag && !chars.empty())
	flag=false;
	
	return flag;
	
}

int main()
{
	string parenst="";//"([])[]({})";//"()())()";
	
	cout<<"\n The string is balanced or not ";
	bool ans=paren_remove(parenst);
	if(ans)
	cout<<"\n TRUE Balanced";
	else
	cout<<"\nFALSE not Balanced";
	
	return 0;	
}
