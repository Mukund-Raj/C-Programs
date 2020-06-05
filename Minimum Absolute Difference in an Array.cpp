#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{-59,-36,-13,1,-53,-92,-2,-96,-54,75};

    int min=INT_MAX;

    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=i+1;j<(i+2);j++)
        {
            if(abs(arr[i]-arr[j])<min)
                min=abs(arr[i]-arr[j]);
        }
    }
    
    cout<<min;
    

}
