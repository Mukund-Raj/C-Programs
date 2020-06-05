#include<iostream>
using namespace std;
//int add(int,int);
int add(int a,int b)
{
	return a+b;
}
int main()
{
	//cout<<a<<endl;
	int (*ptr)(int,int)=add;
	//cout<<(*ptr)(1,222)<<endl;
	cout<<sizeof(add(1,2));
	return 0;
}


