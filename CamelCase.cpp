#include<iostream>
#include<string>
using namespace std;
main()
{
	string s="saveChangesInTheEditor";
	int count=1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
