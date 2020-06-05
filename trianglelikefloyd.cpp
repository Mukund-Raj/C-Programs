#include<vector>
#include<iostream>
using namespace std;
main()
{
	vector<int>ele(0),temp(0);
	ele.push_back(1);
	ele.push_back(1);
	for(int j=1;j<=6;j++)
	{
		for(int i=6-j;i>=0;i--)
		{
			cout<<" ";
		}
		for(int k=0;k<j;k++)
		{
			if(j>2 && (k>0 && k<j-1))
			{
				cout<<ele[k]+ele[k-1];
			}
			else
				cout<<"1";
		cout<<" ";
		}
		temp.push_back(1);
		for(int m=1;m<j-1;m++)
		{
			temp.push_back(ele[m-1]+ele[m]);
		}
		temp.push_back(1);
		ele.clear();
		ele=temp;
		temp.clear();
		cout<<endl;
	}
	

return 0;
}
