#include<iostream>
#include<stack>
#include<string>
#include<map>
using namespace std;

int main()
{
	
	map<char,int>s;
	stack<map<char,int>s>st;
	s['(']=1;
	st.push(s);
	cout<<st.top().first;
	//for(auto& ch:s)
	//cout<<ch.second;
}
