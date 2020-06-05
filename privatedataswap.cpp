#include<iostream>
using namespace std;

 class a2;
 class a1
 { int x;
    public:
    a1(int v)
   { x=v;
   }
   void display()
   { cout<<x;
   }
   friend void swap(a1 &,a2 &);
 };
  
   class a2
   { int x;
     public:
     a2(int v)
     { x=v;
	 }
	 void display()
	 { cout<<endl<<x;
	 }
	 friend void swap(a1 &,a2 &);
   };
   
      void swap(a1 &c,a2 &d)
      { int t;
        t=c.x;
        c.x=d.x;
        d.x=t;
	  }
	    
	     main()
	     { a1 cx(5);
	       a2 cy(19);
	       cout<<"Values before exchange\n";
	       cx.display();
	       cy.display();
	       swap(cx,cy);
	       cout<<"\n Values after exhange\n";
	       cx.display();
	       cy.display();
	       
	       return 0;  
	       
		 }
