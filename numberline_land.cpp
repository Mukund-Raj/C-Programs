#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h=4,c=7,b=-1,t=8;
	int total=0;
	
	total=abs(h-b);//go to shop
	total+=1;//waiting at cycle shop
	//cout<<total;
	if(total>t)
		cout<<"NO";
	else
	{
		int dis_bc=abs(b-c);
		
		int remtime=abs(total-t);
		int dis_reach=remtime*3;
		if(dis_reach>=dis_bc)
		cout<<"YES";
		else
		cout<<"NO";
	}
	
	return 0;
}
