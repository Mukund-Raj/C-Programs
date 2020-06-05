#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b=27984,w=1402;
   int  bc=619246,wc=615589,z=247954;
   unsigned long long int cost=0;
if(bc==wc)
    {
        cost=(b*bc)+(w*wc);
        cout<<"equal cost";
    }
    else if((bc+z)>wc || (wc+z)>bc)
    {
        cost=b*bc+w*wc;
        cout<<"not equal cost";
    }
    else if((bc+z)<(wc))
    {
        cost=((b+w)*bc)+(w*z);
        cout<<"first";
    }
    else if((wc+z)<(bc))
    {
        cost=((b+w)*wc)+(b*z);
        cout<<"second";
    }
    
    printf("%llu",cost);
 return 0;   
}
