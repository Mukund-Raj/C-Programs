#include<iostream>
#include<string>
using namespace std;
main()
{
	string s="abcd";
	string temp,p;
	int i=0;
	int cost=0,len=s.length();
	while(i<len)
	{
		if(p.find(s[i])!=-1)
		{	temp=(char)s[i];
			p.append(temp);
			s.erase(s.begin()+i);
		}
		else
		{	temp=(char)s[i];
			p.append(temp);
			cost++;
			s.erase(s.begin()+i);
		}
		len=s.length();
	}
	cout<<cost;
	return 0;
}
