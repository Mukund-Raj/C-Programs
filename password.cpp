#include<iostream>
#include<cctype>
#include<cstdlib>
//#include<bits/stdc++.h>
using namespace std;
main()
{
	string password="#HackerRank";//"goxg";//"#HackerRank";
	int lower,upper,digit,special;
	lower=upper=digit=special=0;
	int len=password.length();
//	cout<<len;
	/*if(len<6)
	{
		cout<<"you need"<<6-len<<"characters more";
		exit(1);
	}
	*/	
		for(int i=0;i<len;i++)
		{
			if(isdigit(password[i]))	
				digit++;
			if(islower(password[i]))
				lower++;
			if(ispunct(password[i]))
				special++;
			if(isupper(password[i]))
				upper++;
		}
	
	int missing=0;
	if(digit>1 && lower>1 && special>1 && upper>1 && len>=6)
		cout<<"pasword is strong";
	else
		{
			if(digit==0)
			missing++;
			if(lower==0)
			missing++;
			if(special==0)
			missing++;
			if(upper==0)
			missing++;
		//cout<<"you need"<<missing<<"more";	
		}
		if(6-len>missing)
		cout<<6-len;
		else
		cout<<missing;
		
	return 0;
}
