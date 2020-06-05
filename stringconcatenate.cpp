#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

class strinG
{ char st[30];
  public:
  void get()
  { cout<<"enter a strring";
     gets(st);
      
  }
  void display()
  { cout<<"\n string is:";
     puts(st);
     
  }
  strinG operator +(strinG ch)
  {  strinG t;
     strcat(st,ch.st);
     strcpy(t.st,st);
     return t;
  }
};
    main()
  {  strinG s1,s2,s3;
     s1.get();
      s2.get();
      s3=s1+s2;
      cout<<"strings are:";
      s1.display();
      s2.display();
      cout<<"\n concat string is";
      s3.display();
      return 0;
   }
