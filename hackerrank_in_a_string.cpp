#include<iostream>
#include<string>
using namespace std;
main()
{
	string st="hackerworld";
	string hr="hackerrank";
	int len=st.length(),k=0;
	for(int i=0;i<len;i++)
	{
		if(hr[k]==st[i] && k!=10)
		{
			k++;
		}
		else
		continue;
		
		if(k==10)
		break;
	}
	if(k==10)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
