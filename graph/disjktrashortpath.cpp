#include<iostream>
#include<vector>
using namespace std;



void addedge(vector<pair<int,int>> adj[],int u,int v,int wt)
{
	adj[u].push_back(make_pair(v,wt));
	adj[v].push_back(make_pair(u,wt));



}

void printgraph(vector<pair<int,int>> adj[],int size)
{
	for(int i=1;i<size;i++)
	{

		
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<<it->first<<" node, "<<it->second<<" weight\n";
		}

	}
}

class Shorthistory{

public:
	int dest;
	int length;
	int previousnode;


};

void printshortgraph(vector<Shorthistory> vis,int n)
{

	for( auto it:vis)
	{
		cout<<it.dest<<" "<<it.length<<" "<<it.previousnode<<"\n";
	}


}


void shortestpath(vector<pair<int,int>>adjlist[],bool arr[],vector<Shorthistory> vis,int n)
{
	int len=-1;
	int prenode=-1;
	int currnode=-1;

	for(int i=0;i<vis.size();i++)
	{

		
		for(auto it=adjlist[vis[i].dest].begin();it!=adjlist[vis[i].dest].end();it++)
		{
			if(arr[it->first]==false)
			{
				//cout<<it->first<<" ";
				int len2=vis[i].length + it->second;
				if(len==-1)
				{
					len=len2;
					prenode=vis[i].dest;
					currnode=it->first;

				}
				else if(len2<len)
				{
					len=len2;
					prenode=vis[i].dest;
					currnode=it->first;

				}


			}
		}
		//cout<<"\n";
	}

	if(len!=-1)
	{
		arr[currnode]=true;
		//cout<<currnode<<"\n";
		vis.push_back({currnode,len,prenode});
		
		
		shortestpath(adjlist,arr,vis,n);
		
		//printshortgraph(vis);
		


	}
	else{
		printshortgraph(vis,n+1);
	}


}


int main()
{

	int n,m,s,k;
	cin>>n>>m>>s>>k;
	vector<pair<int,int>> adjlst[n+1];

	while(m--)
	{

		int x,y;
		cin>>x>>y;
		addedge(adjlst,x,y,1);
	}



vector<Shorthistory> vis;
bool fan[n+1];
for(int i=0;i<=n;i++)
{
	fan[i]=false;
}
fan[1]=true;
vis.push_back({0,0,0});
shortestpath(adjlst,fan,vis,n);



	return 0;
}