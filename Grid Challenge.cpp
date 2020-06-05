#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>grid{"ebacd","fghij","olmkn","trpqs","xywuv"};
    
    for(int i=0;i<grid.size();i++)
    {
        sort(grid[i].begin(),grid[i].end());

    }
    bool flag=true;
    for(int i=0;i<grid.size()-1;i++)
    {
        for(int j=0;j<grid[i].size();j++)
        {
            if(grid[i][j]>grid[i+1][j])
            {
                flag=false;
                break;
            }
        }
        if(!flag)
            break;
    }
    if(flag)
    cout<<"true";
    else
    cout<<"false";
}
