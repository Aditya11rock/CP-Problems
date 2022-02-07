#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;

void addedge(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
}

void printGraph(vector<vector<int>> v,int x,bool a[])
{
	for(int i=0;i<v[x].size();i++)
	{
		cout<<x<<" -> "<<v[x][i]<<"\n";
		if(a[v[x][i]]==false)
		{
			
			a[v[x][i]]=true;
			printGraph(v,v[x][i],a);
		}
	}
}

void dfs(vector<vector<int>> v,bool a[], vector<int> &vd,int node,vector<vector<int>> &v2,vector<int> &lin)
{
	for(int i=0;i<v[node].size();i++)
	{
		//cout<<"1\n";
		if(a[v[node][i]]==false)
		{
			a[v[node][i]]=true;
			lin[v[node][i]]=v[node][i];
			vd.push_back(v[node][i]);
			dfs(v,a,vd,v[node][i],v2,lin);
			//cout<<vd.size()<<endl;
			cout<<lin[v[node][i]]<<endl;

			if(lin[node]>lin[v[node][i]])
			{
				//cout<<lin[node]<<" "<<lin[v[node][i]]<<endl;
				lin[node]=lin[v[node][i]];
			}

		}
		else{

				auto it=find(vd.begin(),vd.end(),v[node][i]);
				if(it!=vd.end())
				{
					if(lin[node]>lin[v[node][i]]){
						cout<<lin[node]<<" "<<lin[v[node][i]]<<endl;
						lin[node]=lin[v[node][i]];
					}
				}

		}
	}
}


int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v;
	v.resize(n);
	while(m--)
	{
		int x,y;
		cin>>x>>y;

		addedge(v,x,y);
	}

	bool a[n]={0};

	for(int i=0;i<n;i++)
	{
		if(a[i]==false)
		{
			a[i]=true;
			printGraph(v,i,a);
		}
	}

	bool b[n]={0};
	vector<int> sta;
	vector<vector<int>> store;
	store.resize(n);
	vector<int> lowlink;
	lowlink.resize(n);

	for(int i=0;i<v.size();i++)
	{
		if(b[i]==false)
		{
			b[i]=true;
			lowlink[i]=i;
			sta.push_back(i);
			dfs(v,b,sta,i,store,lowlink);
		}
	}

	for(int i=0;i<store.size();i++)
	{
		cout<<endl;
		for(int j=0;j<store[i].size();j++)
		{
			cout<<store[i][j]<<" ";
		}
	}

	cout<<"\n";
	for(int i=0;i<sta.size();i++)
	{
		cout<<sta[i]<<" ";
	}

	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<lowlink[i]<<" ";
	}

	return 0;
}