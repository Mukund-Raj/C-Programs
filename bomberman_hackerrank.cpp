#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;
main()
{
	vector<string>grid=//{"O..OO........O..O........OO.O.OO.OO...O.....OOO...OO.O..OOOOO...O.O..O..O.O..OOO..O..O..O....O...O....O...O..O..O....O.O.O.O.....O.....OOOO..O......O.O.....OOO....OO....OO....O.O...O..OO....OO..O...O"};
	{".......","...O.O.","....O..","..O....","OO...OO","OO.O..."};
	//{".......","...O...","....O..",".......","OO.....","OO....."};
	
	int sec=3;
	
	
	int len=grid[0].length();
	int l=grid.size();
	string bomb(len,'O');
	vector<vector<int>>v(l);
	
	
	int count=0;
	
	
		sec--;
	while(1)
	{
		
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<len;j++)
		{
				if(grid[i][j]=='O')
				{
				v[i].push_back(j);	
				}
		   //cout<<"working";
		   //cout<<v[i][j]<<" ";
			
		}	
	}
	
	cout<<endl;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
				cout<<v[i][j]<<" ";
		   //cout<<"working";
		   //cout<<v[i][j]<<" ";
		}	
		cout<<endl;
	}
		cout<<endl;
		
		sec--;
		for(string &x:grid)
		{
			x=bomb;		
		}
		
		if(sec==0)
		break;
		
		for(int i=0;i<v.size();i++)
		{
			if(!v[i].empty())
		{
			count++;
			for(int j=0;j<v[i].size();j++)
			{
				if((i-1)!=-1)
				{
				  grid[i-1][v[i][j]]='.';
				}
				
				if((i+1)!=l)
				{
				   grid[i+1][v[i][j]]='.';
				}
				
				if((v[i][j]-1)!=-1)
				{ 
				grid[i][v[i][j]-1]='.';
				}
				
				if( (v[i][j]+1)!=len)
				grid[i][v[i][j]+1]='.';	
				   
				grid[i][v[i][j]]  ='.';	
			
			}
		}
	    }
	    sec--;
		if(sec==0)
		break;
		for(vector<int>&x:v)
			x.clear();
		
	
	}
/*
	for(string s:grid)
		cout<<s<<" \n";
	cout<<count;*/
	//cout<<myvector[0][1];
	return 0;
}
