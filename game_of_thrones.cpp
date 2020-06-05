#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string test="cdefghmnopqrstuvw";
	vector<int>v_length(0);
	int count=0;
	size_t found=1;
	char toSearch;
	//for(int i=0;i<test.length();i++)
	while(test.length()!=0)
	{
		toSearch=test[0];
		while(found!=-1)
		{
			found=test.find(toSearch);
			
			if(found!=-1)
			{
				test.erase(test.begin()+found);
				count++;
			}	
		}
		//test.erase(test.begin());
		v_length.push_back(count);
		count=0;
		found=1;
		cout<<test<<endl;
	}
 	//cout<<v_length[1];
	count=0;
	for(int i=0;i<v_length.size();i++)
	{
		if(v_length[i]%2!=0)
		{
			count++;
			continue;
		}
		if(count>2)
		break;
	}
	if(count==1)
	cout<<"palindrome";
	
	else
	cout<<"no";
	return 0;
}
