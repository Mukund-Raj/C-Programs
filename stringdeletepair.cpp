#include<iostream>
#include<string>
using namespace std;


string deletepair(string s)
{
	
}
main()
{
	string s="aa";//"abccddd";
	//"baab";
	int len=s.length();
	int i=0; 
	if(s[0]==s[1])
		cout<<"working";
	while(len!=0 && i<len)
	{
		if(s[i]==s[i+1] )
		{
			s.erase(i,2);
			i=0;
			//s.erase(s.begin()+i+1);
		}
		else
		{
			i++;
		}
		len=s.length();
	}
	if(len==0)
	cout<<"Empty String";
	else
	cout<<s;
	return 0;
}
