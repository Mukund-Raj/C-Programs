#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1="8",s2="92323";
	vector<string>vec(0);
	vec.push_back("115435435643543643543");
	vec.push_back("2345342");
	vec.push_back("34343455");
	//sort(s.begin(),s.end());
	
	std::sort(vec.begin(), vec.end(), [](const std::string& a, const std::string& b){
        return a.length() < b.length() || a.length() == b.length() && a < b; 
          });
	/*for(int i=0;i<s.size();i++)
		cout<<s[i]<<endl;
*/
	return 0;
}
