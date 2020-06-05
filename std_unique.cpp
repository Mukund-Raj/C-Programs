#include<bits/stdc++.h>
using namespace std;

bool check_alt(string forcheck)
{
	int i=0;
	
	while(i<forcheck.size())
	{
		if(forcheck[i]==forcheck[i+2])
		{
			continue;	
		}
		else{
			return false;
		}
	}
	int j=1;
	while(j<forcheck.size())
	{
		if(forcheck[j]==forcheck[j+2])
		{
			continue;	
		}
		else{
			return false;
		}
	}
	return true;
}

int main()
{
	string s="beabeefeab";
	sort(s.begin(),s.end());
	//unique returns new end of the container
	//it only removes consecutive duplicate elements only
	//and so we first sort the container and then apply unique
	auto ip=unique(s.begin(),s.end());
	
	string uniq_char=string(s.begin(),ip);
	cout<<uniq_char;
	vector<int>count(0);
	for(int i=0;i<uniq_char.size();i++)
	{
		string temp=s;
		while(1)
		{
			size_t found=temp.find(uniq_char[i]);
			if(found!=-1)
			{
				temp.erase(temp.begin()+found);				
			}
			else
			break;
		}
	  
	  if(check_alt)
	  	count.push_back(temp.size());
	  
	}
	
	cout<<"\n the largest length string is"<<*max_element(count.begin(),count.end());
	
	return 0; 
}
