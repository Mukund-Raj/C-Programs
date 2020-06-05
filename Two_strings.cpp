#include<iostream>
#include<string>
using namespace std;
main()
{
	string s1="be",s2="cat";
	int flag=0;
	size_t found;
	for(int i=0;i<s1.length();i++)
	{
		found=s2.find(s1[i]);
		if(found!=-1)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
