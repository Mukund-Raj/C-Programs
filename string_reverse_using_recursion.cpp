#include<bits/stdc++.h>
using namespace std;


//getting the last character + calling the function with first to last-1 characters
//and again recursive nature until the string length becomes 1(which is the base case)
//calling looks like this
/*
	mukund
	mukun
	muku
	muk
	mu
	m
	-- then --
	d
	dn
	dnu
	dnuk
	dnuku
	dnukum	
*/
string recrev(string s)
{
	if(s.length()==1)
	return s;
	
	else
	return string(s.end()-1,s.end())+recrev(string(s.begin(),s.end()-1));
}


main()
{
	string st="i am iron man";
	cout<<"before reversing\n";
	cout<<st;
	st=recrev(st);
	cout<<"\nafter reversing\n";
	cout<<st;
	//cout<<string(st.end()-1,st.end());
}

