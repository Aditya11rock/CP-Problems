#include<iostream>
#include<vector>
#include<map>
using namespace std;
// algorithm for minimum spanning tree.... graph with all vertices with minimum number of edges 

void addedge(vector<vector<pair<int,int>>> &v,int x,int y,int w)
{
	v[x].push_back(make_pair(y,w));
	v[y].push_back(make_pair(x,w));
}

void spammingTree(vector<vector<pair<int,int>>> v,bool vis[],vector<pair<int,int>> &ma,int p)
{
	int min=-1,node=-1;
	for(int i=0;i<ma.size();i++)
	{
		for(int j=0;j<v[ma[i].first].size();j++)
		{
			if(vis[v[ma[i].first][j].first]==false)
			{
				int len=ma[i].second + v[ma[i].first][j].second;
				if(min==-1)
				{
					min=len;
					node=v[ma[i].first][j].first;
				}
				else if(len<min)
				{
					min=len;
					node=v[ma[i].first][j].first;
				}
			}
		}
	}
	ma.push_back(make_pair(node,min));
	vis[node]=true;
	if(ma.size()<=p)
	{
		spammingTree(v,vis,ma,p);
	}


}

void graph(vector<vector<pair<int,int>>> v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j].first<<" "<<v[i][j].second<<"\n";
		}

	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>> mad;
	mad.resize(n);
	while(m--)
	{
		int x,y,w;
		cin>>x>>y>>w;
		addedge(mad,x,y,w);

	}

	graph(mad);

	bool a[n]={0};
	a[0]=true;
	vector<pair<int,int>> mad2;
	mad2.push_back(make_pair(0,0));
	spammingTree(mad,a,mad2,n-1);

	cout<<"hello world\n";
	for(auto it:mad2)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}


	return 0;
}

