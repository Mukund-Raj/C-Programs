#include<vector>
#include<iostream>
#include<queue>
using namespace std;

void addEdge(vector<vector<int>>&adj, int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

//v is how many nodes
//loop is there for checking if there any node being left to visit
//means simply disconnected graphs
void BFS(vector<vector<int>>adj, int v,int initial)
{
	queue<int>nodes;
	vector<bool>visited(v, false);
	visited[initial] = true;
	nodes.push(initial);
	int s;
	
	while (!nodes.empty())
	{
		s = nodes.front();
		cout<<s<< " ";
		nodes.pop();
		for (int i = 0; i < adj[s].size(); i++)
		{
			if (visited[adj[s][i]] == false)
			{
				visited[adj[s][i]] = true;
				nodes.push(adj[s][i]);
			}
		}
	}

}

int main()
{
	vector<vector<int>>adj(4);
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 0);
	//addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 3);

	BFS(adj, 4, 0);
	/*
	for (auto v : adj)
	{
		for (auto x : v)
			cout << x << " ";
		cout << endl;
	}
	*/
	return 0;
}
