#include<bits/stdc++.h>
using namespace std;

/*
variadic templates
*/
//base template
template <typename T>
T sum (T val)
{
	return val;	
}

template<typename T,typename... a>
T sum(T first,a... args)
{
	return first+sum(args...);
}

int main()
{
 	int s=sum(1,2,3,4,5);
 	cout<<s;
	return 0;
}
