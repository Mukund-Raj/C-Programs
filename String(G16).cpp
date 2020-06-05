#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s="hello";
    string vowel="aeiou";
    string output;
    
   for(int i=0;i<5;i++)
   {
   	size_t found = s.find(vowel[i]);
   		if(found!=string::npos)
   		{
   		   s.replace(found,1,"$");
		}
	}  
	cout<<s;
	
	s="hello";
	
	int j=0;
	for(int i=0;i<s.length();i++)
   {
   	if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
   	{
 	   s.replace(i,1,"#");
	
	}	
	}
	cout<<s;
	  
	s="hello";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s;
    
    return 0;
}

