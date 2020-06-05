#include<bits/stdc++.h>
using namespace std;

void rot(string &st,string ele_to_find)
{
	size_t npos=-1;
	size_t pos=st.find(ele_to_find);
	int shift;
	if(pos!=npos)
	shift=pos;
    
	//cout<<shift<<endl;
    
	string tmp_st(3,0);
	
	for(int i=0;i<st.length();i++)
	{
		int p=i-shift>=0?i-shift:i-shift+3;
		tmp_st[p]=st[i];
	}
   //cout<<tmp_st;
	st=tmp_st;
}

int main()
{
	string s="312";
	size_t npos=-1;
	int k=1;

	for(int i=0;i<s.length()-2;i++)
	{

	//int i=1;
		if(to_string(s[i])==to_string(k))
		{
			++k;
			cout<<"woking";
			continue;
		}
		else
		{
		while(1)
		{
			if(s.find(to_string(k))==(k-1))
			{
				++k;
				break;	
			}
			
		
			cout<<endl;
			size_t pos=s.find(to_string(k));
			cout<<"pos="<<pos<<endl;
			if(pos!=npos && (pos>i && pos<=i+2))
			{
				cout<<"this working";
				string st=string(s.begin()+i,s.begin()+i+3);
				rot(st,to_string(k));
				cout<<endl<<st;
				s.replace(s.begin()+i,s.begin()+i+3,st);
				cout<<endl<<s;
			}
			else
			{
				string st=string(s.begin()+pos-2,s.begin()+pos+1);
			 	rot(st,to_string(k));
				s.replace(s.begin()+pos-2,s.begin()+pos+1,st);
			}
			
			//cout<<pos<<endl;
			//cout<<ch<<endl;
			npos=-1;
		}
	   }		
	}
	
//	string st="422";
	//cout<<"rotated string is before"<<s<<endl;
	//s.replace(s.begin()+3,s.begin()+6,st);
	//cout<<st;
	//rot(st,"3");
	cout<<"rotated string is"<<s<<endl;
/*	int i=1;
	int flag=to_string(s[i])!=to_string(k);
	cout<<flag;
	s[i]=2;
	flag=to_string(s[i])!=to_string(k);
	cout<<flag;

*/	
k=1;
bool flag=true;
for(int i=0;i<s.length();i++)
{
	if(to_string(s[i])==to_string(k))
	{
		k++;
		continue;
	}
	
	
	else
	{
		flag=false;
		break;
	}
}


if(flag)
cout<<"YES";
else
cout<<"NO";

return 0;
}
