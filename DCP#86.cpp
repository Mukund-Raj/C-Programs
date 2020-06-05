/*
This problem was asked by Google.

Given a string of parentheses, write a function to compute the minimum number of 
parentheses to be removed to make the string valid (i.e. each open parenthesis is 
eventually closed).

For example, given the string "()())()", you should return 1. 
Given the string ")(", you should return 2, since we must remove all of them.*/
#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;



int paren_remove(string paren)
{
	stack<char>chars;
	vector<char>unbal(0);
	//use the stack if its ( then push it
	//if its ) then if its empty,if it is empty then removecount++
	//else pop from the stack
	//simple is that and after the loop check if there are open ( in the stack 
	//if there are then just add it to the removecount
	int removecount=0;
	int i=0;
	while(i<paren.size()){
		
		if( paren[i]=='(' ){
			chars.push(paren[i]);
		}
		if( paren[i]==')' ){
			if(!chars.empty()){
				chars.pop();
			}
			else{
				unbal.push_back(i);
				removecount++;
			}
		}
		i++;
	}
	
	//cout<<chars.size();
	if(!chars.empty())
		removecount+=chars.size();

	return removecount;
	
}

int main()
{
	string parenst="()())(()";//"()())()";
	
	cout<<"\n Number of parenthesis to remove is "<<paren_remove(parenst);
	
	return 0;	
}
