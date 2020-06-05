#include<bits/stdc++.h>
using namespace std;



bool sort_deliverTime(const vector<int>&v1, const vector<int>&v2)
    {
    	cout<<"Invoking"<<endl;
    return v1[1] < v2[1];
    }

int main()
{
    vector<vector<int>>orders{{8,1},{4,2},{5,6},{3,1},{4,3}};

    vector<vector<int>>deliver(0);
    
    for(int i=0;i<orders.size();i++)
    {
        
        deliver.push_back(vector<int>{i+1,orders[i][0]+orders[i][1]});
         
    }
    for(auto c:deliver)
    {
        cout<<" "<<c[0]<<" "<<c[1];
        cout<<endl;
    
	}
    //for(auto it=deliver.begin();it!=deliver.end();it++)

    
    sort(deliver.begin(),deliver.end(),sort_deliverTime);
	
	cout<<"After sorting"<<endl;
    
    for(auto c:deliver)
    {
        cout<<" "<<c[0]<<" "<<c[1];
        cout<<endl;
    
	}
    /*
	vector<int>time_to_deliver_customer(0);
    
    for(auto c:deliver)
    {
        time_to_deliver_customer.push_back(c[0]);
	}
    for(auto c:time_to_deliver_customer)
    {
        cout<<c<<"  ";
        cout<<endl;
    
	}*/
}
