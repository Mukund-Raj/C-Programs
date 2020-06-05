#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v1{1,2,3,4,5,6,7,8,9};
	
	vector<string>v2{"Programming", "in", "a", "functional", "style."};
	//MAP
	
	//transform(v1.begin(),v1.end(),v1.begin(),[](int i){ return i*i;});
	//transform(v2.begin(),v2.end(),back_inserter(v3),[](string s){ return s.length();});	
	
	//FILTER
	//auto it=remove_if(v1.begin(),v1.end(),[](int i){return !((i<3) || (i>8));});
	//auto it=remove_if(v2.begin(),v2.end(),[](string s){return islower(s[0]);});
	
	/*		
	for(auto it1=v2.begin();it1!=it;++it1)
		{
			cout<<*it1<<" ";
		}
		cout<<endl;
		*/
		
	//fold
	while(1)
	{
		int it=accumulate(v1.begin(),v1.end(),1,[](int a,int b){ return a*b;});
		
	}
	string s1=accumulate(v2.begin(),v2.end(),string(""),[](string a,string b){ return a+" "+b;});
	
	
	//float *a;
	//cout<<typeid(a).name();
	cout<<(s1);
	/*
	for(int x:v1)
		cout<<x<<" ";
	*/

	/*
	vector<int>v3(0);
	for(int x:v3)
		cout<<x<<" ";
	*/
	/*
	for(int x:v2)
		cout<<x<<" ";
	*/
	return 0;
}
