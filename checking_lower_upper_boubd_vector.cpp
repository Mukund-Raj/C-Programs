#include<bits/stdc++.h>
using namespace std;

int main()
{
	//vector<int>arr={11,4,11,7,13,4,12,11,10,14};
//	vector<int>brr={11,4,11,7,3,7,10,13,4,8,12,11,10,14,12};
	vector<int>a={1,2,3,4,5,6};
	vector<int>b={4,3,2};
	auto it1=b.begin();
	for(auto it=a.begin()+1;it<a.begin()+4;it++)
	{
		*it=*it1;
		it1++;
	}
	
	
	for(int x:a)
	cout<<x<<" ";
	
	/*vector<int>ans(0);
	int ele=10;
	sort(arr.begin(),arr.end());
	sort(brr.begin(),brr.end());
	
	for(int x:arr)
		cout<<x<<" ";
	cout<<endl;
	for(int x:brr)
		cout<<x<<" ";
		cout<<endl;
	/*
	auto a=find(brr.begin(),brr.end(),ele);//-lower_bound(arr.begin(),arr.end(),ele);
	int starta=a-brr.begin();
	
	auto b=upper_bound(brr.begin(),brr.end(),ele);
	int posb=b-brr.begin();
	brr.erase(brr.begin()+starta,brr.begin()+posb);
	cout<<starta<<" "<<posb;
	cout<<endl;	
	
	for(int x:brr)
		cout<<x<<" ";
		cout<<endl;
	
	
	while(!arr.empty())
	{
		ele=arr.front();
		
	auto a=find(arr.begin(),arr.end(),ele);
	int starta=a-arr.begin();
	
	auto b=upper_bound(arr.begin(),arr.end(),ele);
	int enda=b-arr.begin();
	
	int totala=b-a;
	
	arr.erase(arr.begin()+starta,arr.begin()+enda);
	arr.shrink_to_fit();
	
	a=find(brr.begin(),brr.end(),ele);
	int startb=a-brr.begin();
	
	b=upper_bound(brr.begin(),brr.end(),ele);
	int endb=b-brr.begin();
	
	int totalb=b-a;
	
	if(a!=brr.end())
	brr.erase(brr.begin()+startb,brr.begin()+endb);
	
	brr.shrink_to_fit();
		
	cout<<"ele="<<ele<<" "<<totala<<" "<<totalb<<endl;
	if(totala!=totalb)
	{
		int d=abs(totala-totalb);
		while(d--);
		{
			ans.push_back(ele);
		}	
	}

	for(int x:arr)
		cout<<x<<" ";
	cout<<endl;
	for(int x:brr)
		cout<<x<<" ";
		cout<<endl;

	//cout<<start<<" "<<total_occurence;	
	}
	int i=0;
	cout<<brr.size();
	for(i=0;i<brr.size();i++)
	{
		ans.push_back(brr[i]);
		
	}
	cout<<endl;
	sort(ans.begin(),ans.end());
	for(int x:ans)
		cout<<x<<" ";*/
	return 0;
}
