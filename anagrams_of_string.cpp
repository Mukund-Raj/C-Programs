#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2)
{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	return s1==s2?true:false;	
}

main()
{
	string s1="army";
	string s2="mary";
	
	
	cout<<boolalpha;
	
	cout<<isAnagram(s1,s2);
}

