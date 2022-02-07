#include<iostream>
#include<vector>
#include<map>
using namespace std;

void addundirectededge(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
	v[y].push_back(x);
}

void add_directed_edge(vector<vector<pair<int,int>>> &v,int x,int y,int z)
{
	
	v[x].push_back(make_pair(y,z));
}

void dfs_tree(vector<vector<int>> v,bool a[],int node,vector<vector<pair<int,int>>>&vs,int par,vector<int> &lin)
{
	for(int i=0;i<v[node].size();i++)
	{
		if(v[node][i]!=par)
		{
			if(a[v[node][i]]==false)
			{
				a[v[node][i]]=true;
				lin[v[node][i]]=v[node][i];
				add_directed_edge(vs,node,v[node][i],0);
				dfs_tree(v,a,v[node][i],vs,node,lin);
			}
			else if(v[node][i]<node){
					add_directed_edge(vs,node,v[node][i],1);
			}
		}
	}
}

void printGraph(vector<vector<int>> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<i<<" ";
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

void dfs_modifyLowLinkVal(vector<vector<pair<int,int>>>v,int node,int &val,vector<int> lin)
{
	for(int i=0;i<v[node].size();i++)
	{
		if(val>v[node][i].first)
		{
			val=v[node][i].first;
		}
		if(v[node][i].second==0)
		{
			dfs_modifyLowLinkVal(v,v[node][i].first,val,lin);
		}
	}
}

void get_articulation_point(vector<vector<pair<int,int>>> v,int root,int node,vector<int >lin,vector<int> &p)
{
	if(node!=root)
	{
		for(int i=0;i<v[node].size();i++)
		{
			if(node<=lin[v[node][i].first])
			{
				p.push_back(node);
				break;
			}
		}
	}
	else{
			int val=-1;
			for(int i=0;i<v[node].size();i++)
			{
				if(val!=-1)
				{
					if(val!=lin[v[node][i].first])
					{
						p.push_back(node);
						break;
					}
				}
				else{
						val=lin[v[node][i].first];
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
		addundirectededge(v,x,y);

	}
	cout<<"Graph\n";
	printGraph(v);

	bool a[n]={0};
	vector<int> lowlinkval;
	lowlinkval.resize(n,-1);
	vector<vector<pair<int,int>>> vd;
	vd.resize(n);
	a[0]=true;
	lowlinkval[0]=0;
	dfs_tree(v,a,0,vd,0,lowlinkval);

	cout<<"\ndfs tree\n";
	for(int i=0;i<vd.size();i++)
	{
		cout<<i<<"\n";
		for(int j=0;j<vd[i].size();j++)
		{
			cout<<"   "<<vd[i][j].first<<" "<<vd[i][j].second<<endl;
		}
	}
	cout<<"\ninitial low link value\n";
	for(int i=0;i<v.size();i++)
{
	cout<<lowlinkval[i]<<" ";
}

	cout<<"\n\n*****\n";


	for(int i=1;i<v.size();i++)
	{
		int val=lowlinkval[i];
		
		dfs_modifyLowLinkVal(vd,i,val,lowlinkval);
		
		lowlinkval[i]=val;
	}
	cout<<endl;

	/*for(int i=0;i<vd.size();i++)
	{
		cout<<i<<" \n";
		for(int j=0;j<vd[i].size();j++)
		{
			cout<<vd[i][j].first<<" "<<vd[i][j].second<<endl;
		}
		cout<<endl;
	}*/

cout<<"final lowlinkval\n";
for(int i=0;i<v.size();i++)
{
	cout<<lowlinkval[i]<<" ";
}

vector<int> articulation_pt;

int root=0;

for(int i=0;i<lowlinkval.size();i++)
{
	get_articulation_point(vd,root,i,lowlinkval,articulation_pt);
}
cout<<"\narticulation points\n";
for(int i=0;i<articulation_pt.size();i++)
{
	cout<<articulation_pt[i]<<" ";
}

	return 0;
}