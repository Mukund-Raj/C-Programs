/*
Given a 2D matrix of characters and a target word, write a function that
 returns whether the word can be found in the matrix by going left-to-right, or up-to-down.

For example, given the following matrix:

[['F', 'A', 'C', 'I'],
 ['O', 'B', 'Q', 'P'],
 ['A', 'N', 'O', 'B'],
 ['M', 'A', 'S', 'S']]

and the target word 'FOAM', you should return true, since it's the leftmost column.
 Similarly, given the target word 'MASS', you should return true, since it's the last row.
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string ret_row(vector<vector<char>>mat,int row,int col,int string_size)
{
	
	string st;
	if((col+string_size)<=mat[row].size())
	{	
		st.append(mat[row].begin()+col,mat[row].begin()+string_size+col);
		cout<<st;
		return st;
	}
	else
	return "";
	
}
string ret_col(vector<vector<char>>mat,int row,int col,int size)
{
	string st;
	if((row+size)<=mat.size())
	{
		for(int i=row;i<mat.size();i++)
	{
		st.append(mat[i].begin()+col,mat[i].begin()+col+1);
		
	}
	cout<<" "<<st<<" ";
	return st;
	}
	return "";
}

bool check_string(vector<vector<char>>mat,string to_check)
{
	bool found=false;
	
	for(int i=0;mat.size();i++)
	{
		for(int j=0;j<mat[i].size();j++)
		{
			if(to_check[0]==mat[i][j])
			{
				string fetch_r=ret_row(mat,i,j,to_check.length());
				string fetch_c=ret_col(mat,i,j,to_check.length());
				if(!fetch_r.empty() || !fetch_c.empty())
				{
					if(fetch_r==to_check || fetch_c==to_check)
					{
						//cout<<"Found it";
						found=true;
						break;
					}
				}
			}
		}
		if(found)
			break;
		
	}
	return found;
}

int main()
{
	cout<<boolalpha;
	 vector<vector<char>>mat{{'F', 'A', 'C', 'I'},
								  {'O', 'B', 'Q', 'P'},
							      {'A', 'N', 'O', 'B'},
							      {'M', 'A', 'S', 'S'}};
	
	string m1="FOAM";
	string m2="FOA";
	//cout<<mat.size();
	//cout<<check_string(mat,m1)<<endl;
	cout<<check_string(mat,m2);
	
	return 0;
}









