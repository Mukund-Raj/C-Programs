#include<iostream>
using namespace std;

int main()
{
	int patlu=1,motu,bricks=0,n=3694;
	
	while(bricks!=n)
	{
		bricks=bricks+patlu;
		if(bricks+(patlu*2)>=n)
		{
			motu=n-bricks;
			bricks=bricks+motu;
		}	
		else
		{
			motu=patlu*2;	
			bricks=bricks+motu;
		}
		patlu++;
	}
	
	if(motu!=0)
	cout<<"Motu wins";
	else
	cout<<"patlu wins";
	return 0;
}
