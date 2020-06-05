#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>x{20,15,8,2,12};//{7,2,4,6,5,9,11,12};
	//sort(x.begin(),x.end());
	
	auto b=x.begin()+1-x.begin();
	//int pos=b-x.begin();
	//cout<<pos<<" ";
	
	cout<<x[x.begin()];
	return 0;
}
