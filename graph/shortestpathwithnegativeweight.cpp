#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;

void addedge(vector<vector<pair<int,int>>> &v,int x,int y,int w)
{
	v[x].push_back(make_pair(y,w));
}

void printgraph(vector<vector<pair<int,int>>> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<i<<endl;
		for(int j=0;j<v[i].size();j++)
		{
			cout<<"       "<<v[i][j].first<<"  "<<v[i][j].second<<endl;
		}
	}
}

void depthfirstsearch(vector<vector<pair<int,int>>> v,int node,bool a[],stack<int> &ordery)
{

	//topological sort is basically storing dfs as you go on visiting child and add parent to ordery.... it doesn't work with cyclic graph
	//because in cycle every child is dependent on one another that's why topological ordering doesn't work.....
	for(int i=0;i<v[node].size();i++)
	{
		if(a[v[node][i].first]==false)
		{
			a[v[node][i].first]=true;
			depthfirstsearch(v,v[node][i].first,a,ordery);
			ordery.push(v[node][i].first);
		}
	}
}

void shortpathfinder(vector<vector<pair<int,int>>> v,int node,vector<int> &path,bool a[])
{
	for(int i=0;i<v[node].size();i++)
	{

		if(a[v[node][i].first]==false)
		{
			a[v[node][i].first]=true;
			int length=path[node]+v[node][i].second;
			path[v[node][i].first]=length;
		}
		else{

			int length=path[node]+v[node][i].second;
			if(length<path[v[node][i].first])
			{
				path[v[node][i].first]=length;
			}
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

	printgraph(mad);

	bool a[n]={0};
	stack<int> ordery;

	for(int i=1;i<mad.size();i++)
	{
		if(a[i]==false)
		{
			a[i]=true;
			depthfirstsearch(mad,i,a,ordery);
			ordery.push(i);
		}
	}



	vector<int> shortpathgen;
	shortpathgen.resize(n,-1);

	shortpathgen[ordery.top()]=0;
	bool b[n]={0};

	while(!ordery.empty())
	{
		b[ordery.top()]=true;
		cout<<ordery.top()<<" ";
		shortpathfinder(mad,ordery.top(),shortpathgen,b);
		ordery.pop();
	}
	cout<<endl;

	for(auto it:shortpathgen)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	for(int i=0;i<shortpathgen.size();i++)
	{
		cout<<i<<" "<<shortpathgen[i]<<endl;
	}


	return 0;
}