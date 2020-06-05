#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int,int>a;
	a[2]=90;
	a[1]=130;
	a[1]=120;
	
	for(auto x:a)
	cout<<x.first<<" "<<x.second<<endl;
	
	return 0;
}
