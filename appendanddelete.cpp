#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s="abcd",t=""
	int m=-1,n=0;
    string answer;
    int slength=s.length(),tlength=t.length();
    for(int i=0;i<slength;i++)
        {
            if(s[i]==t[i])
                continue;
            else
            m=i;break;
        }
        cout<<m<<endl;
        if(m==-1)
            answer="Yes";
        else
        {
             if(tlength==m)
            {
            for(int i=0;i<slength-m;i++)
            {
                s.pop_back();
                n++;
            }
            }  

            else
        { 
            for(int i=0;i<slength-m;i++)
            {
                s.pop_back();
                n++;
            }
            for(int i=m;i<tlength;i++)
            {
                s.push_back(t[i]);
                n++;
            }
        }
        }
        cout<<n<<endl;
        if(n==k || n<k)
        answer="Yes";
        
        else if(n>k)
        answer="No";
    cout<<s;
    cout<<endl<<slength;
        return answer;
	return 0;
}
