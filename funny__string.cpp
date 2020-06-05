#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
	string test="bcxz";
	vector<int>actual(0);
	vector<int>act_rev(0);
	string revtest=test;
	reverse(revtest.begin(),revtest.end());
	cout<<test<<endl;
	cout<<revtest;
	for(int i=0;i<test.length();i++)
	{
		actual.push_back((int)(test[i]));
		act_rev.push_back((int)(revtest[i]));
	}
	int flag=0;
	
	for(int i=0;i<actual.size();i++)
	{
		cout<<actual[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<actual.size();i++)
	{
		cout<<act_rev[i]<<" ";
	}
	for(int i=0;i<actual.size()-1;i++)
	{
		if( abs(actual[i]-actual[i+1]) == abs(act_rev[i]-act_rev[i+1]) )
			continue;
			else
			{
				flag=1;
				break;
			}
	}
	if(flag==0)
		cout<<"funny string";
	else
	cout<<"not funny string";
	
	return 0;
}
