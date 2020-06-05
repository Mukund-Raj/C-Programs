#include<iostream>
#include<string>
#include<vector>
using namespace std;
main()
{
	string st="abccddde";
	string ex;
	int count=1,i=0,len=st.length();
	vector<string>subst(0);
	vector<int>weights(0);
	while(i<len)
	{	count=1;
		ex.clear();
		if(st[i]!=st[i+1])
		{
			ex=st[i];
			//subst.push_back(ex);
			weights.push_back(((int)(ex[0])-96)*ex.length());
		}
		else
		{
			for(int j=i;j<len;j++)
			{
				if(st[j]==st[j+1])
				{
					count++;
					continue;
				}
				else
				break;
			}
			for(int j=1;j<=count;j++)
			{
				ex.append(st.begin()+i,st.begin()+i+j);
				//subst.push_back(ex);
				weights.push_back(((int)(ex[0])-96)*ex.length());
				ex.clear();
			}
		}
		i=i+count;
	}
	//for(int j=0;j<subst.size();j++)
	//	cout<<subst[j]<<"\n";
	//cout<<subst.size();
/*	int ascii=0,size=0,weight=0;
	//cout<<int(subst[0][0])-96;
	//cout<<subst[3].length();
	for(int i=0;i<subst.size();i++)
	{
		//ascii=(int)(subst[i][0]);
		//ascii=ascii-96;
		//size=subst[i].length();
		//weight=size*ascii;
		weights.push_back(((int)(subst[i][0])-96)*subst[i].length());
	}*/
	for(int i=0;i<weights.size();i++)
	{
		cout<<weights[i]<<endl;
	}
	return 0;
}
