#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

bool decr(int a,int b)
{
    return a > b;
}

int main()
{
    vector<int>A{1,2,2,1};
    vector<int>B{3,3,3,4};

    int k=5;
    sort(A.begin(),A.end());

    sort(B.begin(),B.end(),decr);
    bool flag=1;
    for(int i=0;i<A.size();i++)
    {
        if((A[i]+B[i])<k)
        {
            flag=0;
            break;
        }
    }
    
    if(flag)
    cout<<"yes";
    else
    cout<<"NO";

    for(auto x:B)
    cout<<x<<" ";
}
