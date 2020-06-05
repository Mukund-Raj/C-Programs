#include<iostream>
#include<vector>
#include<string>
using namespace std;
main()
{
	vector<vector<string>>a(20);
	vector<string>b(0);
	
	b.push_back("0");
//b.push_back("ab");
	a.push_back(b);
	cout<<a[0][1];
	cout<<a[0][0];
return 0;
}
