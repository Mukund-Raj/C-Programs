#include<iostream>
#include<string>
using namespace std;
main()
{
	string s="abc";
	int len=s.length();
	//for(int i=0,j=len-1;i<len/2;i++,j--)
	int i=0,j=len-1;
	int ch,count=0;
	while(i<len/2)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
			continue;
		}
		
		else
		{
			if((int)(s[i])<(int)(s[j]))
			{
				ch=(int)(s[j])-1;
				s[j]=(char)(ch);
				count++;
			}
			else if((int)(s[i])>(int)(s[j]))
			{
				ch=(int)(s[i])-1;
				s[i]=(char)(ch);
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
