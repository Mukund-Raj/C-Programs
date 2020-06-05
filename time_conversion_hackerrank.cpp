#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string time="12:12:12PM";
	string hour;
	//cout<<time;
	if(time[8]=='A')
	{
		time.erase(time.begin()+8,time.end());
		//cout<<time;
		time.erase(time.begin()+8,time.end());
		hour.append(time.begin(),time.begin()+2);
		int hour_int=stoi(hour);
		if(hour_int==12)
		{
			hour.clear();
			hour.append("00");
		}
		//hour=to_string(hour_int);
		time.replace(time.begin(),time.begin()+2,hour);
		cout<<time;
	}
	else
	{
		time.erase(time.begin()+8,time.end());
		hour.append(time.begin(),time.begin()+2);
		int hour_int=stoi(hour);
		
		if(hour_int!=12)
		{	
			hour_int+=12;
			hour=to_string(hour_int);
		}
		time.replace(time.begin(),time.begin()+2,hour);
		cout<<time;
	}
	return 0;
}
