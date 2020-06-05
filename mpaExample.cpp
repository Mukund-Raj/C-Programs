#include <iostream>
#include <map>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<int>s{19,10,12,10,24,25,22},ans(0);
	int k=4;
	
    map<int, map<int,int>>m;
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			m[s[i]][s[j]]=s[i]+s[j];		
		}
	}
	
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			cout<<s[i]<<"+"<<s[j]<<" "<<m[s[i]][s[j]];
			cout<<endl;		
		}
		cout<<endl;
	}
	
	
	/*
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" ";
		
		cout<<endl;
	}
	auto it=m.begin();
	cout<<endl;
	for(auto it1=it->second.begin();it1!=it->second.end();it1++)
		{
			cout<<it1->first<<" "<<it1->second;
			
		}
	*/
	/*
	//cout<<m[2][4];
	for(int i=0;i<s.size();i++){

		for(int j=i+1;j<s.size();j++){
	
			if(m[s[i]][s[j]] % k!=0)
			{//	cout<<m[s[i]][s[j]]<<endl;
			//	cout<<s[i]<<" "<<s[j];
				if(!ans.empty())
				{
				//	cout<<"else working";
					auto it=find(ans.begin(),ans.end(),s[i]);
					//cout<<(*it);
					if(it==ans.end())
					{
						ans.push_back(s[i]);	
					//	cout<<s[i]<<" ";
					}
					 it=find(ans.begin(),ans.end(),s[j]);
					if(it==ans.end())
					{
						ans.push_back(s[j]);	
					//	cout<<" "<<s[j];
					}	
				}
				
				else
				{
				//	cout<<"empty working";
				//	cout<<s[i]<<" "<<s[j];
					ans.push_back(s[i]);		
					ans.push_back(s[j]);
				}
				
				cout<<endl;		
			}		
		}
	}
	
	
    for(int i=0;i<ans.size();i++)
    {
   		cout<<ans[i]<<" "; 	
	}
   */


    return 0;
}
