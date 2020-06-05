#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>toy_price{1,2,3,4};
	int price=7;
	//i sort the array because the minimum difference bw two
	//elements is the 2 elements adjacent
	sort(toy_price.begin(),toy_price.end());

	int price_sum=0;
	int i;
	for(i=0;toy_price.size();i++)
	{
		price_sum+=toy_price[i];
		if(price_sum>=price)
			break;
			
		cout<<toy_price[i]<<" ";
	}
	cout<<endl<<i;
}

