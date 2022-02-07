#include<iostream>
#include<vector>
#include<map>
using namespace std;

void addedge(vector<vector<pair<int,int>>> &v,int x,int y,int w)
{
	v[x].push_back(make_pair(y,w));
	v[y].push_back(make_pair(x,w));
}

void printGraph(vector<vector<pair<int,int>>> v)
{

	for(int i=0;i<v.size();i++)
	{
		for(auto it:v[i])
		{
			cout<<it.first<<"  "<<it.second<<"\n";
		}
	}

}

void storeAndSortEdges(vector<vector<pair<int,int>>> v,multimap<int,pair<int,int>> &par)
{
	for(int i=0;i<v.size();i++)
	{
		for(auto it:v[i])
		{
			par.insert(make_pair(it.second,make_pair(i,it.first)));
		}
	}

}

int retparent(int x,vector<int > dip)
{
	if(dip[x]==-1)
	{
		return x;
	}
	else{
		int p=x;
		while(true)
		{
			p=dip[p];
			if(dip[p]==-1)
			{
				break;
			}
		}
		return p;
	}
}


void storeKruskalEdge(multimap<int,pair<int,int>> v,multimap<int ,pair<int,int>> &store,vector<int> &dis)
{
	for(auto it:v)
	{
		int a=retparent(it.second.first,dis);
		int b=retparent(it.second.second,dis);

		if(a!=b)
		{
			dis[a]=b;
			store.insert(make_pair(it.first,make_pair(it.second.first,it.second.second)));
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

	printGraph(mad);

	multimap<int,pair<int,int>> mad2;

	storeAndSortEdges(mad,mad2);

	multimap<int,pair<int,int>> ::iterator it;
	for(it=mad2.begin();it!=mad2.end();it++)
	{
		cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
	}

	vector<int> parentstore;
	parentstore.resize(n,-1);
	multimap<int,pair<int,int>> storefinal;

	storeKruskalEdge(mad2,storefinal,parentstore);
	cout<<"\n***********************************\n";
	for(auto it:storefinal)
	{
		cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
	}

	return 0;

}