#include<iostream>
#include<vector>
#include<map>
using namespace std;


void addedge(vector<pair<int,int>> adj[],int u,int v,int wt)
{
	adj[u].push_back(make_pair(v,wt));
	adj[v].push_back(make_pair(u,wt));



}

void printgraph(vector<pair<int,int>> adj[],int size)
{
	for(int i=0;i<size;i++)
	{

		cout<<i<<" node\n";
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<<it->first<<" node, "<<it->second<<" weight\n";
		}

	}
}



int main()
{


int q;
cin>>q;
vector<pair<int,int>> adj[q+1];
int z;
cin>>z;
while(z--)
{
	int x,y,w;
	cin>>x>>y>>w;
	addedge(adj,x,y,w);
}
printgraph(adj,q);



	return 0;
}