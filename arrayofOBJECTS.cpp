#include<iostream>
using namespace std;


class student
{ int age;
  char name[20];
  int roll_no;
  public:
  	void get()
  	{ cout<<"enter values";
  	cin>>age>>roll_no;
  	gets(name);
  	
	  }
	  void display()
	  { cout<<name<<" "<<age<<" "<<roll_no;
	  }
};
	  main()
	  { int n;
	  cout<<"enter how many objects you want";
	   cin>>n;
	  student st[n];
	   exit(1);   
	  for(int i=0;i<n;i++)
	    st[i].get();
	    
	    cout<<"\n display";
		for(int i=0;i<n;i++)
	     st[i].display(); 
	      
	
	  }
  

