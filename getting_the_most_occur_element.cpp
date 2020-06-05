#include<bits/stdc++.h>
using namespace std;
main()
{
	vector<int>freq(0);
	freq.push_back(2); //{2,2,2,2,3,2,2,2};
	freq.push_back(2);
	freq.push_back(2);
	freq.push_back(2);
	freq.push_back(3);
	freq.push_back(2);
	freq.push_back(2);
	freq.push_back(2);	
	int len=freq.size();
	cout<<len<<endl;	
	int i=0,j=0;
	int count=1;
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
		//freq_count.push_back(count);
		//freq_count[freq[i]]=count;
		cout<<count<<endl;
		count=1;
		i++;
		len=freq.size();
	}
	return 0;
}
