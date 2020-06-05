#include<bits\stdc++.h>
using namespace std;
int main()
{
	string s1="abc",s2="defsd";
	int len;
	if(s1.length()>s2.length())
	{
		len=s1.length();
	}
	else
		len=s2.length();
	
	string ans;
	while(s1.length()!=0 ||s2.length()!=0)
	//for(int i=0;i<len;i++)
	{
		if(s1.length()==0)
		{
			ans.append(s2);
			break;
		}
		if(s2.length()==0)
		{
			ans.append(s1);
			break;
		}
		
		ans.push_back(s1[0]);
		ans.push_back(s2[0]);
		
		s1.erase(s1.begin());
		s2.erase(s2.begin());
		
		//flag=flag*-1;
	}
	cout<<ans;
	//cout<<len;
	//cout<<"heloo";
	return 0;
}
