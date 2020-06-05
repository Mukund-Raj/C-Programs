#include<iostream>
#include<string>
#include<vector>
using namespace std;
main()
{
	
	string check="ABABABABABAA";
	int count=0;
	int i=0,len=check.length();
	while(i!=len-1)
	{
		if(check[i]==check[i+1])
		{
			check.erase(check.begin()+i+1);
			count++;
		}
		else
		i++;
		len=check.length();
		cout<<check<<endl;
	}
	cout<<count;
	return 0;
}
