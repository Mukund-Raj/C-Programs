#include<bits/stdc++.h> 
using namespace std;

void rotation(string s1,string s2)
{
	//distance which should be same for every word
    //if that word is rotated wrongly then we don't care too much
    //the distance should be same for every character
    
	int distance=s2.find(s1[0]);
	int pos;
	bool flag=true;
	for(int i=0;i<s1.length();i++)
	{
		pos=(i+distance)%s1.length();//position of the actual rotation
		if(s1[i]==s2[pos]){
			continue;
		}
		else
			flag=false;
	}
	
	cout<<flag;
}

// Driver program to test above functions 
int main() 
{ 
	cout<<boolalpha;
	string s1="abcd";
	string s2="dabc";
	
	//rotation(s1,s2);
	int a=2,b=2;
	int c=a|b;
	cout<<c;
	return 0; 
} 

