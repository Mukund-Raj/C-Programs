
#include<bits/stdc++.h>
using namespace std;

main()
{
	string s="b";
	int i=0,j=0,len=s.length();
	vector<int>freq(0);
	vector<int>freqc(0);
	int count=1;
	while(i<len)
	{
		j=i+1;
		while(j<len)
		{
			if(s[i]==s[j])
			{
				count++;
				s.erase(s.begin()+j);
			}
			else
			j++;
			len=s.length();
		}
		freq.push_back(count);
		count=1;
		i++;
		len=s.length();
	}
	
	for(i=0;i<freq.size();i++)
	{
		cout<<freq[i]<<" ";
	}
	i=0;
	len=freq.size();
	while(i<len)
	{
		j=i+1;
		while(j<len)
		{
			if(freq[i]==freq[j])
			{
				count++;
				freq.erase(freq.begin()+j);
			}
			else
			j++;
			len=freq.size();
		}
		freqc.push_back(count);
		count=1;
		i++;
		len=freq.size();
	}
	cout<<endl;
	for(i=0;i<freq.size();i++)
	{
		cout<<freq[i]<<" ";
	}
	cout<<endl;
	int maxoccur,other;
	for(i=0;i<freqc.size();i++)
	{
		cout<<freqc[i]<<" ";
	}
	if(freqc.size()==1)
		cout<<"YES";
		
	if(freqc.size()==2)
	{
		if(freqc[0]>freqc[1])
		{
			maxoccur=freqc[0];
			other=freqc[1];
			if(other==1)
			{
				if(freq[1]-1==freq[0]||freq[1]-1==0)
				{
					cout<<"YES";
				}
			else
			cout<<"NO";
			}
			else
			cout<<"NO";
			
		}
		else
		{
			maxoccur=freqc[1];
			other=freqc[0];
			if(other==1)
			{
				if(freq[0]-1==freq[1]||freq[0]-1==0)
				{
					cout<<"YES";
				}
				
			else
				cout<<"NO";
			}
			else
			cout<<"NO";
			
		}	
	}
	if(freqc.size()>2)
		cout<<"NO";
	return 0;
}
