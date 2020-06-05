#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<vector<int>>contests{
    {5,1},
    {2,1},
    {1,1},
    {8,1},
    {10,0},
    {5,0}
    };

int k=1;

int luck=0;
vector<int>important_contests(0);

if(k==0)
{
            for(auto x:contests){
            if(x[1]==1)
                luck-=x[0];
            else
            {
                //adding here the unimportant contests here
                luck+=x[0];
            }
            
        }
        cout<< luck;
        exit(1);
}

        for(auto x:contests)
            if(x[1]==1)
                important_contests.push_back(x[0]);

int important_contests_left_to_win=important_contests.size()-k;

if(important_contests_left_to_win>0)
{
            for(auto x:contests)
            if(x[1]==0)
                luck+=x[0];

        sort(important_contests.begin(),important_contests.end());

        //adding contests which we can loose
        for(int i=important_contests.size()-1;i>=important_contests_left_to_win;i--)
        {
            luck+=important_contests[i];
        }

        //minusing contests which we have to win
        for (int i = 0; i < important_contests_left_to_win; i++)
        {
            luck-=important_contests[i];
        }
}
else {
      for(auto x:contests){  
                //adding here the unimportant contests here
                luck+=x[0];
        }  
}
cout<<luck;


}