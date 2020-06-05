/*
Using a read7() method that returns 7 characters from a file, 
implement readN(n) which reads n characters.

For example, given a file with the content “Hello world”, 
three read7() returns “Hello w”, “orld” and then “”.

*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string read7(ifstream& ifs)
{
	static int position=0;
	if(ifs.eof())
	{
		cout<<"eof working";
		return string("\"\"");
	}
	else
	{
		char *s=new char[5];
		ifs.read(s,5);
		if(!ifs.fail())
		{
			position+=5;
			return string(s);
		}
		else
		{
		//cout<<"can get only";
		ifs.clear();
		ifs.seekg(0,ifs.end);
		int length=ifs.tellg();
		ifs.seekg(position,ifs.beg);
		ifs.read(s,length-position);
		cout<<string(s);
		//cout<<ifs.tellg();
		}
		
	}
	return "";
}


int main()
{
	ifstream ifs("test.txt");
	
	if(ifs)
	{
		cout<<"file opened\n";
		int length;
		ifs.seekg(0,ifs.beg);
		//cout<<ifs.tellg()<<endl;	
		cout<<read7(ifs)<<endl;
		cout<<read7(ifs)<<endl;
	//	cout<<read7(ifs)<<endl;
	}
	else
	{
		cout<<"file not opened";
	}
	ifs.close();
	return 0;
}
