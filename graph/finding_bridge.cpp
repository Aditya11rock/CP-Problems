#include<iostream>
#include<vector>
#include<map>
using namespace std;

void addedgebidirected(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
	v[y].push_back(x);
}

void addedgeunidir(vector<vector<int>> &v,int x,int y)
{

	v[x].push_back(y);

}

void dfs_to_get_link_val(vector<vector<int>> v,bool a[],vector<int> &lin,vector<vector<int>> &ud,int node,int par)
{

	for(int i=0;i<v[node].size();i++)
	{
		if(v[node][i]!=par)
		{
				if(a[v[node][i]]==false)
				{
					a[v[node][i]]=true;
					lin[v[node][i]]=v[node][i];
					
					addedgeunidir(ud,node,v[node][i]);
					dfs_to_get_link_val(v,a,lin,ud,v[node][i],node);
				}
				else if(lin[v[node][i]]<lin[node])
				{
					addedgeunidir(ud,node,v[node][i]);
				}
		}
	}


}

void modifylinkwithdfs(vector<vector<int>> v,int x,int &val,bool a[],vector<int> lin)
{
	for(int i=0;i<v[x].size();i++)
	{
		if(a[v[x][i]]==false)
		{
			a[v[x][i]]=true;
			if(lin[v[x][i]]<val)
			{
				val=lin[v[x][i]];
			}
			modifylinkwithdfs(v,v[x][i],val,a,lin);
		}
	}
}

void dfs_final_to_get_bridge(vector<vector<int>> v,bool a[],int node,vector<int> lin,vector<pair<int,int>> &q)
{
	for(int i=0;i<v[node].size();i++)
	{
		if(a[v[node][i]]==false)
		{
			a[v[node][i]]=true;
			if(node<lin[v[node][i]])
			{
				q.push_back(make_pair(node,v[node][i]));
			}
			dfs_final_to_get_bridge(v,a,v[node][i],lin,q);
		}
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> mad;
	mad.resize(n);
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		addedgebidirected(mad,x,y);


	}

	vector<vector<int>> mad2;
	mad2.resize(n);
	bool a[n]={0};
	vector<int> link;
	link.resize(n);

	link[0]=0;
	a[0]=true;
	dfs_to_get_link_val(mad,a,link,mad2,0,0);

	for(int i=0;i<link.size();i++)
	{
		cout<<link[i]<<" ";
	}

	cout<<endl;
	for(int i=0;i<mad2.size();i++)
	{
		cout<<i<<" ";
		for(int j=0;j<mad2[i].size();j++)
		{
			cout<<mad2[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<link.size();i++)
	{
		int val=link[i];
		bool b[link.size()]={0};
		b[i]=true;
		modifylinkwithdfs(mad2,i,val,b,link);
		link[i]=val;
	}
	for(int i=0;i<link.size();i++)
	{
		cout<<link[i]<<" ";
	}

	vector<pair<int,int>> q;
	bool c[link.size()]={0};
	c[0]=true;
	dfs_final_to_get_bridge(mad2,c,0,link,q);
	cout<<"\n********\n";
	for(int i=0;i<q.size();i++)
	{
		cout<<q[i].first<<" "<<q[i].second<<"\n";
	}

	return 0;
}