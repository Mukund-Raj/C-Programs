#include<iostream>
using namespace std;

 class complex
 { int x,y;
    public:
    	complex()
    	{ }
    void get()
    { cout<<"enter real and img value";
      cin>>x>>y;
	}
    complex operator +(complex c)
    { complex temp;
      temp.x=x+c.x;
      temp.y=y+c.y;
      return temp;
	}
	complex operator -(complex c)
	{ complex temp;
	   temp.x=x-c.x;
	   temp.y=y-c.y;
	   return temp;
	}
	void display()
	{ if(y>0) 
	 cout<<x<<"+i "<<y<<endl;
	  else
	  { y=-y; 
	   cout<<x<<"-i"<<y<<endl;
         y=-y;	  
	  }
	  
	}
 	 
 };
 
  main()
  { complex c1,c2,c3;
    
    c1.get();
    c2.get();
    cout<<"a=";
	c1.display();
    cout<<"b=";
	c2.display();
    cout<<"Addition of two complex number ";
	c3=c1+c2;
	c3.display();
	cout<<"subtraction of two complex number ";
	c3=c1-c2;
	c3.display(); 
	return 0;
  }
 
 
 
 
 
 
 
 
