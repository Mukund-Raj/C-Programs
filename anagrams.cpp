#include<iostream>
#include<string>
using namespace std;
main()
{
	string s="fdhlvosfpafhalll";
	string fir,sec;
	int count=0;
	int len=s.length();
	if(len%2==0)
	{
		fir.append(s.begin(),s.begin()+(len/2));
		sec.append(s.begin()+(len/2),s.end());
		cout<<fir<<endl<<sec;
		size_t found;
		cout<<fir.length();
		for(int i=0;i<fir.length();i++)
		{
			found=sec.find(fir[i]);
			//cout<<found;
			if(found==-1)
			{
				count++;
			}
			else
			{
				sec.erase(sec.begin()+found);
			}
		}
		cout<<count;
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}
