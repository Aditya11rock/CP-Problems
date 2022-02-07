#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

void addedge(vector<vector<pair<int,int>>> &v,int x,int y,int w)
{
	v[x].push_back(make_pair(y,w));
}

void breadthfirst(vector<vector<pair<int,int>>> v,vector<int> &path,int node,bool a[])
{
	queue<int> bad;
	bad.push(node);
	while(!bad.empty())
	{
		int p=bad.front();
		bad.pop();
		for(int i=0;i<v[p].size();i++)
		{
			if(a[v[p][i].first]==false)
			{
				a[v[p][i].first]=true;
				bad.push(v[p][i].first);
				int len=path[p]+v[p][i].second;
				path[v[p][i].first]=len;
			}
			else{
				int len=path[p]+v[p][i].second;
				if(len<path[v[p][i].first])
				{
					path[v[p][i].first]=len;
				}

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

	vector<int> storelength;
	storelength.resize(n,-1);
	bool a[n]={0};
	storelength[0]=0;
	breadthfirst(mad,storelength,0,a);

	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<mad[j].size();k++)
			{
				int len=storelength[j] + mad[j][k].second;
				if(len<storelength[mad[j][k].first])
				{
					storelength[mad[j][k].first]=len;
				}
			}
		}

	}

	for(auto it: storelength)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	vector<int> mad2;
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<mad[j].size();k++)
			{
				int len=storelength[j] + mad[j][k].second;
				if(len<storelength[mad[j][k].first])
				{
					storelength[mad[j][k].first]=len;
					mad2.push_back(mad[j][k].first);
				}
			}
		}

	}

	for(auto it: storelength)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	for(auto it:mad2)
	{
		cout<<it<<" ";
	}
	cout<<endl;

	return 0;
}