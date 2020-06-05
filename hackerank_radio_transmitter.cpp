/*
3 test cases failed segmentation fault

*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>house{7,2,4,6,5,9,12,11};
	//vector<bool>visites(houses.size(),0);
	sort(house.begin(),house.end());
	auto it=upper_bound(house.begin(),house.end(),9);
	cout<<house[it-house.begin()];
	
	/*
	int i=0;
	int k=2;
	int j=0,m;
	int radiotowers=0;
	int distance;
	while(i<house.size())
	{
		distance=house[i]+k;
		j=i+1;
		while(house[j]<=distance){
			j++;
		}
		j--;
		if(i!=j){
			
			m=j+1;
		
			while(house[m]<=(house[j]+k)){
			m++;
			}
			m--;
			
			if(m!=j)
			i=m+1;
			
			else
			i=j+1;
			
		}
		
		else{	
		i++;
		}
		//cout<<i<<endl;
		radiotowers++;
	}
	
	cout<<"\n"<<radiotowers;
	*/
	return 0;
}
