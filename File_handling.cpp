#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifs("lyric.txt");
	
	if(ifs.is_open())
	{
		cout<<"file opened\n";
		char ch;
		while(ifs)
		{
			ch=ifs.get();
			cout<<ch;
		}
	}
	
	return 0;
}
