#include<iostream>
#include<string>
using namespace std;
main()
{
	string signal="SOSSOT";
	string sos="SOS";
	int len=signal.length(),k=0;
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(signal[i]!=sos[k])
		{
			count++;
		}
		k++;
		if((i+1)%3==0)
			k=0;
		
	}
	cout<<count;
	return 0;
}
