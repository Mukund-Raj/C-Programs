#include<bits/stdc++.h>

using namespace std;
/*
string breakpoint(string palindromeStr)
{
	string t=palindromeStr;
	for(int i=0;i<t.length();i++)
	{
		int charx=(int)t[i];
		
		if( (charx-1) >=97)
		{
			t[i]=t[i]-1;
			break;
		}
		//cout<<t[i];
	}
	return t;
}
*/
class a{
	public:
	  a(){
		cout<<"0";
	}
	~a(){
		cout<<"-0";
	}
};
class b{
	public:
	  b(){
		cout<<"1";
	}
	 ~b(){
		cout<<"-1";
	}
};

class d:public b,a{
	public:
		
	 d():b(),a(){
		cout<<"derived";
	}
	~d(){
		cout<<"derived";
	}
};
int main()
{
	
	d p;

//	string s="bab";
	//cout<<breakpoint(s);

}
