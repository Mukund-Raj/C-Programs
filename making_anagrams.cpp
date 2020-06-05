#include<iostream>
#include<string>
using namespace std;

main()
{
	string s1="absdjkvuahdakejfnfauhdsaavasdlkj",s2="djfladfhiawasdkjvalskufhafablsdkashlahdfa";
	size_t found;
	int count=0,i=0;
	cout<<s1.length()<<endl<<s2.length();
	if(s1.length()<=s2.length())
	{	
	for(int i=0;i<s1.length();i++)
	{
		found=s2.find(s1[i]);
		
			if(found!=-1)
			{
				count++;
				s2.erase(s2.begin()+found);
			}
	}
	}
	else
	{
	for(int i=0;i<s2.length();i++)
	{
		found=s1.find(s2[i]);
			if(found!=-1)
			{
				count++;
			}
	}
	}
	cout<<"count="<<count;
	count=s1.length()+s2.length()-count;
	cout<<endl;
	cout<<count;
	return 0;	
}
