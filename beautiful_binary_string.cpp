#include<iostream>
#include<string>
using namespace std;
main()
{
	string s="0100101010";
	string b="010";
	string one="1";
	int len=s.length(),flag=0,count=0;
	
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(s[i+j]!=b[j])
			{
				cout<<s;
				cout<<endl;
				flag=1;
				 break;
			}
		}
		if(flag==0)
		{
			s.erase(s.begin()+i+2);
			s.insert(i+2,"1");
			count++;
		}
		flag=0;
	}
	cout<<count;
	return 0;
}
