/*
A numeric string, , is beautiful if it can be split into a sequence of two or more 
positive integers,

, satisfying the following conditions:

for any (i.e., each element in the sequence is
more than the previous element).
No
contains a leading zero. For example, we can split into the sequence , but it is not 
beautiful because and
have leading zeroes.
The contents of the sequence cannot be rearranged. For example, we can split
into the sequence , but it is not beautiful because it breaks our first constraint (i.e.,

    ).

The diagram below depicts some beautiful strings:

image

You must perform
queries where each query consists of some integer string . For each query, print whether 
or not the string is beautiful on a new line. If it's beautiful, print YES x, where is the 
first number of the increasing sequence. If there are multiple such values of

, choose the smallest. Otherwise, print NO.

Function Description

Complete the separateNumbers function in the editor below. It should print a string as
 described above.

separateNumbers has the following parameter:

    s: an integer value represented as a string

Input Format

The first line contains an integer
, the number of strings to evaluate.
Each of the next lines contains an integer string

to query.

Constraints

Output Format

For each query, print its answer on a new line (i.e., either YES x where

is the smallest first number of the increasing sequence, or NO).

Sample Input 0

7
1234
91011
99100
101103
010203
13
1

Sample Output 0

YES 1
YES 9
YES 99
NO
NO
NO
NO

*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int x=01;
	string h="90071992547409929007199254740993";
	//cout<<h.substr(0,2);
	//cout<<x;
	cout<<h.length();
	int c_digits=1;
	int begin=0;
	int n_digits;
	unsigned long long int  starting_digit;
	char ch=h[0];
	int flag=1;
	for(int i=1;i<h.length();i++)
	{
		if(ch==h[i])
		continue;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"NO";
		exit(1);
	}



	while((begin+c_digits)<=h.length()/2)
	{	
		string c_string=h.substr(begin,c_digits);
		unsigned long long int c=stoull(c_string);
		starting_digit=c;
	//	cout<<c<<endl;
		int j=begin+c_digits;
		unsigned long long int next;
		flag=1;
		while(j<h.length())
		{
			c++;
			n_digits=to_string(c).length();
			next=stoull(h.substr(j,n_digits));
			if(c==next)
			{
				c=next;
				j+=n_digits;
				//cout<<next<<endl;
			}
			else
			{
				c_digits+=1;
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"YES "<<starting_digit;
			break;
		}	
	}
	//cout<<endl<<c_digits;
	if(c_digits>h.length()/2)
	cout<<"NO";
	return 0;
}
