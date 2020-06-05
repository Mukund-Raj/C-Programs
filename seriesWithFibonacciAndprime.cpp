#include<iostream>
using namespace std;
main()
{
	//declaring varaiables for fibonacci
	int first=0,second=1,third;
	//for prime number
	int k=1,c=0;
	for(int i=1;i<=20;i++)//the position loop
	{
		if(i%2==0)
		{
			k++;
			while(1)
			{
			
			c=0;
			//checking prime number
			for(int j=1;j<=k;j++)
			{
				if(k%j==0)
				c++;
			}
			if(c==2)
			{
				cout<<k<<" ";
				break;
			}
			else
			{
				k++;
				continue;
			}
			
			}
		}
		
		else
		{
			third=first+second;
			cout<<third<<" ";
			first=second;
			second=third;
		}
	}
	
	return 0;
}
