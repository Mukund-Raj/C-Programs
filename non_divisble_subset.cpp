#include <iostream>
#include <map>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<int>s{278,576,496,727,410,124,338,149, 209 ,702 ,282, 718, 771 ,575 ,436},ans(0);
	int k=7;
	
    map<int, map<int,int>>m;
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			m[s[i]][s[j]]=s[i]+s[j];		
		}
	}
	/*
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			cout<<s[i]<<"+"<<s[j]<<"="<<m[s[i]][s[j]];
			cout<<endl;		
		}
		cout<<endl;
	}
	*/
	/*
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" ";
		
		cout<<endl;
	}*/
/*	auto it=m.begin();
	cout<<endl;
	cout<<endl;*/
	/*
	for(auto it1=it->second.begin();it1!=it->second.end();it1++)
		{
			cout<<it1->first<<" "<<it1->second;
			
		}
	*/
	
	//cout<<m[2][4];
	for(int i=0;i<s.size();i++){

		for(int j=i+1;j<s.size();j++){
	
			if(m[s[i]][s[j]] % k!=0)
			{//	cout<<m[s[i]][s[j]]<<endl;
			//	cout<<s[i]<<" "<<s[j];
			//	cout<<m[s[i]][s[j]]<<endl;;
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
				
			//	cout<<endl;		
			}		
		}
	}
	
	
    for(int i=0;i<ans.size();i++)
    {
   		cout<<ans[i]<<" "; 	
	}
	cout<<endl;

   vector<int>answer(0),max(0);
   int flag=0;
   int i=0,j;
   
   while(i<ans.size())
   {
   		answer.push_back(ans[i]);	
   		j=0;
   		while(j<ans.size())
   		{
   			if( j!=i && (ans[i]+ans[j])%k!=0)
   			{
   				if(answer.size()==1)
   				{
					answer.push_back(ans[j]);
				}
				else{
					for(int m=0;m<answer.size();m++){
						
						if((ans[j]+ans[m])%k!=0){
							continue;
						}
						else{
							flag=1;
							break;
						}
					}
					if(flag==0){
						answer.push_back(ans[j]);
					}
				}
				flag=0;
			}
			j++;
		}
		/*
		for(int m=0;m<answer.size();m++){
			auto it=find(ans.begin(),ans.end(),answer[m]);
			if(it!=ans.end()){
				ans.erase(it);
			}
		}*/
		
		/*
		for(int n=0;n<ans.size();n++)
    	{
   			cout<<ans[n]<<" "; 	
		}*/
	//	cout<<ans.size();
		cout<<endl;
		max.push_back(answer.size()); 	
		/*
		if(answer.size()>max)
		{
			max.push_back(answer.size()); 	
			
		}
		*/
		cout<<answer.size()<<endl;
		answer.clear();
		flag=0;
		i++;
   }
	
	cout<<endl;
	sort(max.begin(),max.end());
	cout<<max[0]<<endl;
	cout<<max[max.size()-1];
    return 0;
}
