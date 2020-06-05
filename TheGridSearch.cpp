#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
	string big="2229505813";
	string small="9505";
	
	vector<string>G(0);
	vector<string>P(0);	
	
	G.push_back("7283455864");
	G.push_back("6731158619");
	G.push_back("8988242643");
	G.push_back("3830589324");
	G.push_back("2229505813");
	
	G.push_back("5633845374");
	
	G.push_back("6473530293");
	G.push_back("7053106601");
	G.push_back("0834282956");
	G.push_back("4607924137");
	
	P.push_back("9505");
	P.push_back("3845");
	P.push_back("3530");
	
	size_t pos;
    int k=0,count=0,flag=0;
    string ans="";
   size_t PrevPos;
    int i=0;
    vector<vector<size_t> >posarr(0);
    vector<size_t>arr(0);
    auto it;
   while(i<G.size())  
   { 
        pos=G[i].find(P[k]);
       // cout<<pos; 
        if(pos!=-1)
        {
            count++;
            
            while(pos!=-1)
            {
            	arr.push_back(pos);
            	pos=G[i].find(P[k],pos+P[k].size());
			}
			
			posarr.push_back(arr);
			arr.clear();
			
            for(int j=i+1;j<i+P.size();j++)
            {
                k++;
                pos=G[j].find(P[k]);
                
                while(pos!=-1)
                {
                	it=find(posarr.begin(),posarr.end(),pos);
                	
				}
                if(pos==PrevPos)
                {

                    count++;

                }
                else
                {
                    if(pos!=-1)
                    {
                        
                    }
                }
                
            }
            if(count==P.size())
            {
                flag=1;
                break;
            }
            else
            {
                count=0;
                k=0;
            }
        }
       i++;
    }
    cout<<count;
    if(flag==1)
        ans="YES";
    else
        ans="NO";
    
	return 0;
}
