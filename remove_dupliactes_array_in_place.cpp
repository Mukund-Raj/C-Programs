#include<bits/stdc++.h>
using namespace std;
main()
{
	vector<int>arr{21,23,12,10,11,21,21,22};
	int k=0;
	int i;
	while(1)
	{
		i=k+1;
		while(i<arr.size())
		{
			
			if(arr[k]==arr[i])
			{
				arr.erase(arr.begin()+i);
			}
			else
			i++;
		}
		k++;
		if(k>=arr.size())
		break;
	}
	for(int x:arr)
	cout<<x<<" ";
	//cout<<arr.size();
}

