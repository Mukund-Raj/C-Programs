#include<iostream>
#include<fstream>
using namespace std;
main()
{ char ch;
   int c=0;
   ifstream ifs("file.txt");
   
    if(!ifs)
    { cout<<"unable to open a file";
	}
       return 1;
      while(ifs)
      { ifs.get(ch);
       if(isalpha(ch))
       c++;
	  }
	  cout<<"\n\n\ntotal no of characters "<<c;
	  return 0;

}
