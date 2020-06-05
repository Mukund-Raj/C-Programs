#include<iostream>
#include<regex>
using namespace std;

int main()
{
   cout<<boolalpha;
    string a = "Geek"; 
  
    // Here b is an object of regex (regular expression) 
    regex b("Geeek"); // Geeks followed by any character 
  
    // regex_match function matches string a against regex b 
    if ( regex_match(a, b) ) 
        cout << "String 'a' matches regular expression 'b' \n"; 
  
    // regex_match function for matching a range in string  
    // against regex b 
    if ( regex_match(a.begin(), a.end(), b) ) 
        cout << "String 'a' matches with regular expression "
                "'b' in the range from 0 to string end\n"; 
    //cout<<doesit;

}
