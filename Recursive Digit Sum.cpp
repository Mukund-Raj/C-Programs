#include<bits/stdc++.h>
using namespace std;

string superdigit(string s)
{
    long sumd=0;

    if(s.length()==1)
        return s;
    else
    {
        int x;
        for (int i = 0; i < s.length(); i++)
        {
            x=int(s[i])-48;
            sumd+=x;
        }
        return superdigit(to_string(sumd));
    }
    
}

int main()
{
    string s="9875";
    string temps=s;
    int k=4;
    for(int i=0;i<k;i++)
    {
        s+=temps;
    }
    //cout<<s;
    int x=134;
    cout<<superdigit(s);
    
}
