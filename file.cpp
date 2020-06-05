#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
using namespace std;

  main()
  { char ch[20],ch1;
   ofstream ofs("file.txt",ios::out);
   ifstream ifs("file.txt",ios::in);
   if(!ofs)
   { cout<<"unable to open a file";
     exit(1);
   }
   cout<<"\n write data to a file\n";
   cout<<"enter something"<<endl;
   gets(ch);
   ofs<<ch;
    cout<<"\n read data now\n";
    while(ifs)
    {  ifs>>ch;
        cout<<ch;
	}
    ofs.close();
    ifs.close();
   return 0;
   
   
  }
