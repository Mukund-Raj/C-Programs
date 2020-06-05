#include<iostream>
#include<string>
#include<vector>
using namespace std;
main()
{
	vector<string>myvector={"....","OOOO","...."};
	int i=1,j=1;
	string s(7,'O');
	cout<<s;
	vector<vector<int>>v(7);
	v[0].push_back(1);
	cout<<v.size()<<v[0][0];
	/*
		myvector[i][j]='.';
		myvector[i+1][j]='.';
		myvector[i-1][j]='.';
		myvector[i][j-1]='.';
		myvector[i][j+1]='.';

	for(string s:myvector)
		cout<<s<<" \n";
	
	//cout<<myvector[0][1];*/
	return 0;
}
