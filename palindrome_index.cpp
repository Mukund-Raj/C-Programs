#include<bits/stdc++.h>
using namespace std;

bool is_palin(string s)
{
	string S=string(s.begin(),s.end());
	reverse(S.begin(),S.end());
	if(s==S)
		return true;
	else
		return false;
}

int main()
{
	string s="baa";
	int len=s.size();
	vector<int>indices(0);
	int index=-1;
	if(is_palin(s))
		index=-1;
	
	else{
	
	for(int i=0,j=len-1;i<len/2;i++,j--)
	{
		if(s[i]!=s[j]){
			indices.push_back(i);
			indices.push_back(j);
		}
		
		else 
		continue;
	}
	}
	for(int i=0;i<indices.size();i++)
		{
			string temp=s;
			temp.erase(temp.begin()+indices[i]);
			if(is_palin(temp)){
				index=indices[i];
				break;
			}
		}
	
	cout<<"\n index "<<index;
	return 0; 
}
