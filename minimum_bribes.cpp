#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int TotalBribes=0;
    
	vector<int>q{2,5,1,3,4};
	int n=q.size();
	//cout<<n;
	vector<int>::iterator it;
    int loc;
    
	for(int i=n;i>0;i--)
    {
		it=find(q.begin(),q.end(),i);
		if(it!=q.end())
	    cout<<i<< "found at"<<it-q.begin();
		cout<<endl;
		loc=it-q.begin();
		/*
		if(loc>(i-1))
		{
			continue;
		}
		
		if(loc>=(i-3) && loc<=(i-1))
		{
			TotalBribes+=(i-1)-loc;
		}
		else
		{
			cout<<"total Chaotic";
			return 0;
		}*/
    }
	
	cout<<TotalBribes;
	return 0;
}
