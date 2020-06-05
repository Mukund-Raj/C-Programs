#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>w{1,2,3,21,7,12,14,21};

    sort(w.begin(),w.end());

    

    int minWeight=0;
    int container=0;

    int index=0;    
    int i=0;

    while(1)
    {
        //minWeight=*(min(w.begin(),w.end()));

        for(i=index;w[i]<=w[minWeight]+4 && i<w.size();i++)
        {
			cout<<w[i];
		}
        
        ++container;

        index=i;

        minWeight=index;

        if(index>=w.size())
            break;

    }
    cout<<"\n"<<container;
}
