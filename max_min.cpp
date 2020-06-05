#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,10,20,30,40,100,200};
    int k=4;

    sort(arr.begin(),arr.end());

    vector<int>subarr(arr.begin(),arr.begin()+k);
    //cout<<subarr.size();
    /*
    for(auto x:subarr)
    cout<<x<<" ";
	*/
	cout<<INT_MAX;
	auto x=max_element(arr.begin(),arr.end());
	cout<<*x;
	
	/*
	int diff=subarr[k-1]-subarr[0];
	cout<<diff;
*/
}
