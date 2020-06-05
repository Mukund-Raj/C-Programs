#include<bits/stdc++.h>
using namespace std;

vector<char> unique(string s)
{
	vector<char>uniq_char(0);
	sort(s.begin(),s.end());
	int i=0;
	while(i<s.length())
	{
		uniq_char.push_back(s[i]);
		int j=i+1;
		while(s[j]==s[i])
			++j;
		
		i=j;
	}
	for(char ch:uniq_char)
	cout<<ch<<" ";
	
	cout<<s;
	return uniq_char;
	
}
bool isalternate(string s)
{
	int i=0;
	bool flag=1;
	while(i<s.length()-1)
	{
		if(s[i]==s[i+1])
		{
			flag=0;
			break;
		}
		i++;
	}
	return flag;
}

void making_strings(vector<char>chars,string s)
{
	int max=0;
	for(char ch:chars)
	cout<<ch<<" ";
	cout<<endl;
	
	for(int i=0;i<chars.size();i++)
	{
		for(int j=i+1;j<chars.size();j++)
		{
			char a=chars[i];
			char b=chars[j];
			
			string copy_s=s;
			int k=0;
			while(k<copy_s.length())
			{
				if(copy_s[k]!=a && copy_s[k]!=b)
				{
					copy_s.erase(copy_s.begin()+k);
					
				}
				else 
				k++;
			}
			if(isalternate(copy_s))
			{
				cout<<"\nalternate "<<copy_s;
				if(copy_s.length()>max)
				max=copy_s.length();
			}
			
			
		}
	}
	cout<<"\nthe max is"<<max;
}

int main()
{
	cout<<boolalpha;
 	string s="beabeefeab";
 	vector<char>uniq_ch(0);
 	
	uniq_ch=unique(s);
	making_strings(uniq_ch,s);
	cout<<endl;
	//cout<<isalternate("aba");
	return 0;
}
