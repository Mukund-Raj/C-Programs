#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{4,2,3,5,1};
    int k=1;
    int temp;
    vector<int>pos(6,0);

    int n=arr.size();

    for(int i=0;i<arr.size();i++)
    {
        pos[arr[i]]=i;
    }
    
    int t;
    for(int i=0;i<arr.size() && k;i++)
    {

        if(arr[i]==n-i)
        continue;

        temp=pos[n-i];

        pos[arr[i]]=pos[n-i];

        pos[n-i]=i;

        //swapping of actual elements
        t=arr[i];

        arr[temp]=arr[i];

        arr[i]=t;
        --k;
    }
    


    /*
    for(int i=0;i<k;i++)
    {
        auto max_ele=max_element(arr.begin()+i,arr.end());

        int pos_max=max_ele-arr.begin();

        if(arr[i]<arr[pos_max])
        {
            temp=arr[pos_max];
            arr[pos_max]=arr[i];
            arr[i]=temp;
        }
    }
    */
    for(auto x:arr)
    cout<<x<<" ";
    //cout<<max_ele-arr.begin();
}
