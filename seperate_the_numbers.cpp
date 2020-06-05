#include<iostream>
#include<string>
#include<cstdio>

using namespace std;
main()
{
	string number="88888888888888888888",answer;
	unsigned long int num;
	long int nextnum;
	int flag=0;
	int len=number.length();
	
	
	for(int i=1;i<=len/2;i++)
	{
		num=stoi(number.substr(0,i));
		cout<<"num"<<num<<endl;
		nextnum=num;	
		flag=0;
		for(int j=i;j<len;j=j+to_string(nextnum).length())
		{
			nextnum+=1;
			cout<<"nextnum"<<nextnum<<endl;
			if(stoi(number.substr(j,to_string(nextnum).length()))==nextnum)
				continue;
				
			else
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			answer="yes";
			break;
		}
	}
	if(flag==0 &&number.length()!=1)
		cout<<"yes";
	else
	cout<<"no";
	
	return 0; 

}
