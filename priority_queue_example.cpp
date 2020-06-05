#include<bits/stdc++.h>
using namespace std;

int main()
{   
    //for max heap
    //priority_queue<int>pq;
    priority_queue<int ,vector<int>,greater<int>>pq;
    pq.push(1);
    pq.push(14);
    pq.push(2);
    pq.push(20);

    cout<<"size is "<<pq.size();
    cout<<"the pq is\n";
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}
