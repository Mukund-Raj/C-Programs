#include<iostream>
#include<string>
#include<cctype>
using namespace std;

main()
{
	string msg="www.abc.xy";
	string enmsg;
	int k;
	int ascci;
	string ch;
	cout<<2%26;
	cout<<"enter rotation factor";
	cin>>k;
	for(int i=0;i<msg.length();i++)
	{
		ascci=(int)msg[i];
		if(islower(msg[i]))
		{
			if(ascci+(k%26)>122)
			ascci=97+(ascci+(k%26)-122)-1;
			else
			ascci=ascci+(k%26);
			ch=(char)ascci;
			enmsg.append(ch);
		}
		else if(isupper(msg[i]))
		{
		
			if(ascci+(k%26)>90)
			ascci=65+(ascci+(k%26)-90-1);
			else
			ascci=ascci+(k%26);
			ch=(char)ascci;
			enmsg.append(ch);
		}
		else
		{
			ch=msg[i];
			enmsg.append(ch);
		}
	}
	cout<<enmsg;
	return 0;
}
