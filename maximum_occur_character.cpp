#include<bits/stdc++.h>
using namespace std;
main()
{
	string st="I gonna find and i am gonna kill every last one of them";

	map<char,int>count;
	//cout<<count.size()<<endl;
	/*
	count['a']=12;
	count['a']++;
	count['b']++;
	cout<<count['b'];
	*/
	
	for(int i=0;i<st.length();i++)
	{
		if(st[i]!=' ')
		{
			count[st[i]]++;		
		}
	}
	//cout<<count.size()<<endl;
	int max=(count.begin())->second;
	cout<<max<<endl;
	
	for(auto s:count){
		//cout<<typeid(s).name();
		cout<<s.first<<" "<<s.second;
		cout<<endl;	
		if(s.second==max)
		max=s.second;
	}
	cout<<"first unrepeated character is"<<endl;
	for(auto s:count){
		if(s.second==1){
		cout<<s.first;
		break;
		}
	}
	cout<<"\nMost occuring chars is/are"<<endl;
	for(auto s:count){
		if(s.second==max)
			cout<<s.first<<endl;
	}
	
	cout<<"dupliacte characters in the strings is/are\n";
	for(auto s:count){
		if(s.second>1)
			cout<<s.first<<endl;
	}
}

