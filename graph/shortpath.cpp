#include<iostream>
#include<vector>

void addedge(vector<pair<int,int>> adj[],int x,int y)
{
	adj[x].push_back(make_pair(y,1));
	adj[y].push_back(make_pair(x,1));
}

void traverse(vector<pair<int,int>> mit,int n)
{
	for(int i=0;i<n;i++)
	{
		for(auto it=mit[i].begin();it!=mit[i].end();it++)
		{
			cout<<it->first<<" "<<it->second<<"\n";
		}
	}
}

int main()
{

	int n,m,s,k;
	cin>>n>>m>>s>>k;
	vector<pair<int,int>> adj[n];

	

	return 0;
}