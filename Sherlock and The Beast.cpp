#include<bits/stdc++.h>
using namespace std;

int main()
{
    string decent="";
    int n=3;
    for(int i=0;i<n;i++)
    decent+="5";

    int no5=0;
    int no3=0;
    
    for (int i = 0; i < decent.length(); i++)
    {
        if(decent[i]=='5')
            no5+=1;
       
        else
            no3+=1;
    }
    int pos3=n-5;
	if(n>2)
	{

    while(no5 % 3 != 0 && pos3>=0)
    {
        decent.replace(pos3,5,5,'3');
        pos3-=5;
        no5=count(decent.begin(),decent.end(),'5');  
    }
    if((count(decent.begin(),decent.end(),'5')%3==0) &&
	 (count(decent.begin(),decent.end(),'3')%5==0))
    cout<<decent;
    else
    cout<<"-1";
	}
	else
	cout<<"-1";
    //int x=count(decent.begin(),decent.end(),'3');
    //cout<<x;
    //cout<<decent<<endl;
    //decent.replace(0,0,5,'3');
	//cout<<decent;
    //cout<<no5<<" "<<no3;	
    //cout<<"\n"<<decent.size();
}
