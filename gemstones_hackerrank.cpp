#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
main()
{	int flag=0;
	int gemstones=0;
	vector<string>st(0);


	st.push_back("hrbbwaacqlobwmrdzb");
	st.push_back("baccd");
	st.push_back("eeabg");
	//st.push_back("oafhdlasd");
	for(int i=0;i<st.size();i++)
	{
		sort(st[i].begin(),st[i].end());
	}
	//cout<<max;
	for(int i=0;i<st.size();i++)
	{
		cout<<st[i]<<endl;
	}
	size_t found;
	int i=0;
	//for(int i=0;i<st[0].length();i++)
	while(i<st[0].length())
	{
		if(st[0][i]==st[0][i+1])
		{
			st[0].erase(st[0].begin()+i);
			
		}
		else
		i++;
	}
	cout<<st[0];
	
	for(int i=0;i<st[0].length();i++)
	{
		for(int j=1;j<st.size();j++)
		{
			found=st[j].find(st[0][i]);
			if(found == -1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			gemstones++;
		}
		flag=0;
	}
	cout<<gemstones;
	return 0;
}
