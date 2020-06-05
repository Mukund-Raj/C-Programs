#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
	string big="2229505813";
	string small="9505";
	
	vector<string>G{"400453592126599","114213133098692","474386082879648","522356951189169",
	"887109450487496","252802633388782","502771484966748","075975207693780","511799789562806",
	"404007454272504","549043809916080","962410809534811","445893523733475","768705303214174","650629270887160"};
	
	//vector<string>G{"8998","9893"};
	vector<string>P{"99","99"};	
//	cout<<G.size();
	//P.push_back("3530");
	
	size_t pos;
    int k=0,count=0,flag=1;
    string ans="";
    
    int i=0;
    
   int start_index;
   while(i<=G.size()-P.size())  
   { 
        size_t begin_pos=G[i].find(P[k]);
        
       cout<<"begin_pos"<<begin_pos<<endl; 
        if(begin_pos!=string::npos)
        {
        	start_index=i;

    		while(1)
    	{
            while((++k)<P.size())
            {
            	pos=G[++start_index].find(P[k],begin_pos);
				if(pos!=string::npos && pos==begin_pos)
				{
					continue;
				}
				else
				{
					flag=0;
					break;
				}
			}
			
			if(flag==1)
			{
				cout<<"YES";
				exit(1);
				//break;
			}
			k=0;
			begin_pos=G[i].find(P[k],begin_pos+1);
			flag=1;
			
			if(begin_pos==string::npos) break;
			else
			start_index=i;
		}
	  }
       k=0;
       i++;
       flag=1;
     }
    
    if(i>G.size()-P.size())
        cout<<"NO";
    
	return 0;
}
