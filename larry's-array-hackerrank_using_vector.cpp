#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rot(vector<int>&st,int ele_to_find)
{
	
    auto pos=find(st.begin(),st.end(),ele_to_find);
	
	int shift;
	if(pos!=st.end())
	shift=pos-st.begin();
    
   // cout<<shift<<endl;
	//cout<<shift<<endl;
	vector<int>b(3,0);
	for(int i=0;i<st.size();i++)
	{
		int p=i-shift>=0?i-shift:i-shift+3;
		b[p]=st[i];
	}
   //cout<<tmp_st;
	st=b;
}

int main()
{
	
	vector<int>s={1,2,3,5,4};
	/*
	auto pos_ft=find(s.begin(),s.end(),3);
			
			int pos_f=pos_ft-s.begin();
			cout<<pos_f;
	vector<int>a(s.begin()+3,s.begin()+6);
	rot(a,3);
	cout<<endl;
	for(int x:a)
	cout<<x<<" ";
   */
	/*
	for(int x:s)
	cout<<x<<" ";
		
	cout<<endl;
	vector<int>a(s.begin()+1,s.begin()+4);
	
	s.erase(s.begin()+1,s.begin()+4);
	
	rot(a,2);
	
	s.insert(s.begin()+1,a.begin(),a.end());
	
	for(int x:s)
	cout<<x<<" ";
	cout<<endl;
	*/
	int k=1;
    //int i=1;
	for(int i=0;i<s.size()-2;i++)
	{
	
		if(s[i]==k)
		{
			++k;
			cout<<"woking";
			//continue;
		}
		else
		{
		while(1)
		{
			auto pos_ft=find(s.begin(),s.end(),k);
			
			int pos_f=pos_ft-s.begin();
			
			if(pos_ft!=s.end() && pos_f==(k-1))
			{
				++k;
				cout<<pos_f<<endl;
				break;	
			}
			
		
			cout<<endl;
			auto pos_itr=find(s.begin(),s.end(),k);
			int pos=pos_itr-s.begin();
			cout<<"pos="<<pos<<endl;
			if(pos_itr!=s.end() && (pos>i && pos<=i+2))
			{
				cout<<"this working";
				vector<int>b(s.begin()+i,s.begin()+i+3);
				rot(b,k);
				//s.erase(s.begin()+i,s.begin()+i+3);
				
				auto it1=b.begin();
				for(auto it=s.begin()+i;it<s.begin()+i+3;it++)
				{
						*it=*it1;
						it1++;
				}
				//s.insert(s.begin()+i,b.begin(),b.end());
				
			}
			else
			{
				vector<int>b(s.begin()+pos-2,s.begin()+pos+1);
			 	rot(b,k);
				//s.erase(s.begin()+pos-2,s.begin()+pos+1);
				
				auto it1=b.begin();
				for(auto it=s.begin()+pos-2;it<s.begin()+pos+1;it++)
				{
						*it=*it1;
						it1++;
				}
				//s.insert(s.begin()+pos-2,b.begin(),b.end());
			}
			
			//cout<<pos<<endl;
			//cout<<ch<<endl;
		/*	
		 pos_f=find(s.begin(),s.end(),k)-s.begin();
			if(pos_f==(k-1))
			{
				++k;
				
				cout<<pos_f<<endl;
				//break;	
			}*/
		}
		//++k;
	  }		
	}
	
	for(int x:s)
	cout<<x<<" ";
	cout<<endl;

bool flag=true;
k=1;
for(int i=0;i<s.size();i++)
{
	if(s[i]==k)
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
