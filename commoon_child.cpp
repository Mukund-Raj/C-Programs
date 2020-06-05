#include<bits/stdc++.h>
using namespace std;

int match_max(string s1,string s2)
{
	int i=0,j=0;
	string matched_str;
	int pos;
	int max=0;
	
for(int i=0;i<s1.length();i++)
{
	int x=s2.find(s1[i]);
	
	pos=i;
	
	for(int k=x;k<s2.length() && pos<s1.length();k++,pos++)
	{
	//cout<<x<<endl;
		if(s1[pos]==s2[k])
		matched_str.append(s2.begin()+k,s2.begin()+k+1);
		
		else
		break;
	
	}
	if(matched_str.length()>max)
		max=matched_str.length();
	cout<<matched_str<<endl;
	
	matched_str.clear();

}

return max;
}

void common_chars(string s1,string s2)
{
	string common_s1,common_s2;
	
	int pos,j;
	size_t found;
	
	for(int i=0;i<s1.length();i++)
	{
		if(s2.find(s1[i])!=string::npos)
		{
		common_s1.append(s1.begin()+i,s1.begin()+i+1);
		}
		
		if(s1.find(s2[i])!=string::npos)
		{
		common_s2.append(s2.begin()+i,s2.begin()+i+1);
		}
	}
	cout<<common_s1<<"\n"<<common_s2<<"\n";
	//cout<<match_max(common_s1,common_s2);
}

int main()
{
	string s1="WEWOUCUIDGCGTRMEZEPXZFEJWISRSBBSYXAYDFEJJDLEBVHHKS";
	string s2="FDAGCXGKCTKWNECHMRXZWMLRYUCOCZHJRRJBOAJOQJZZVUYXIC";
	
	//cout<<match(s1,s2);
	//s1.append(s2.begin(),s2.begin()+1);
//	cout<<s1;
	//cout<<string::npos;
	common_chars(s1,s2);
	return 0;
}
