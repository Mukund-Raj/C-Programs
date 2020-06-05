#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
main()
{
	string test="qmExzBIJmdELxyOFWv LOCmefk TwPhargKSPEqSxzveiun";
	string alphabets="abcdefghijklmnopqrstuvwxyz";
	int len=test.length();
	char temp;
	cout<<len<<endl;
	for(int i=0;i<len;i++)
	{
		if(isupper(test[i]) && test[i]!=' ')
		{
				test[i]=tolower(test[i]);
		}
	}
	for(int i=0;i<len;i++)
	{
		if(isspace(test[i]))
			test.erase(test.begin()+i);
	}
	cout<<test<<endl;
	cout<<len<<endl;
	
	sort(test.begin(),test.end());
	cout<<test;
	cout<<endl;
	int i=0;
	while(len!=0 && i<len)
	{
		if(test[i]==test[i+1] )
		{
			test.erase(i,1);
			//s.erase(s.begin()+i+1);
		}
		else
		{
			i++;
		}
		len=test.length();
	}
	cout<<test;
	if(test.compare(alphabets)==0)
	cout<<"pangrams";
	else
	cout<<"not";
	return 0;
}






