#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> strings(0);
	strings.push_back("ab");
	strings.push_back("ab");
	strings.push_back("abc");
	vector<string> queries(0);
	queries.push_back("ab");
	queries.push_back("abc");
	queries.push_back("bc");
	
	
	
	int query=0;
	vector<int>count(queries.size(),0);
//	cout<<queries.size();
	vector<string>::iterator it=queries.begin();
	//cout<<queries[0];
	

	for(int i=0;i<queries.size();i++)
	{
		for(int j=0;j<strings.size();j++)
		{
			if(queries[i]==strings[j])
				count[i]++;
		}
	}
	

	for(int i=0;i<count.size();i++)
		cout<<count[i]<<" ";
	return 0;	
}
