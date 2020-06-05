#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>calorie{1,3,2};

    int no_of_miles=0;
    //sort it so that we get the order with minimum calorie count
    //we are sorting it in ascending order and we will access the
    //array in reverse order
    sort(calorie.begin(),calorie.end());
    
    int j=0;
    for(int i=calorie.size()-1;i>=0;i--)
    {
        no_of_miles+=((int)pow(2,j)*calorie[i]);
        
        ++j;
    }
    cout<<no_of_miles;
}
