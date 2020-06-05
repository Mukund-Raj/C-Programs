#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;


main()
{
vector<int>a;
a.push_back(1);
a.push_back(2);
a.push_back(2);
a.push_back(3);
a.push_back(1);
a.push_back(2);
//a.push_back(5);
//a.push_back(5);
//a.push_back(5);
int count=0,diff,max=0,flag=0;
vector<int>sub;
sort(a.begin(),a.end());
for(int i=0;i<a.size()-1;i++)
{   sub.resize(0);
	sub.push_back(a[i]);
    for(int j=i+1;j<a.size();j++)
    {   
    
		diff=abs(a[i]-a[j]);
    
        if(diff<=1)
            {	
            	if(sub.size()!=0)
            	{	for(int k=0;k<sub.size();k++)
            		{
            			if(abs(a[j]-sub[k])<=1)
            			{
            				flag=0;
            				continue;
						}
            			else
            			{
            				flag=1;
            				break;
						}
					}
					if(flag==0)
            		{
            			sub.push_back(a[j]);
            			count++;
            			
					}	
					flag=0;
				}
				else{
					count++;
					sub.push_back(a[j]);
				}
				
			}
    }
    
    for(int k=0;k<sub.size();k++)
    	cout<<sub[k]<<endl;
    cout<<endl;
   
        if(sub.size()>max)
            max=sub.size();
        
		   cout<<"max"<<max<<"sub size"<<sub.size();
		   cout<<endl;
        sub.clear();
}
cout<<"Maximum sub aarray size"<<max;
return 0;
}

