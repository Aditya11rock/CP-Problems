#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<vector<int>> &v,int x,int y,int &n)
{

	if(x<n && y<n)
	{
			v[x].push_back(y);
			v[y].push_back(x);
	}
	else{
		n=n+1;
		v.resize(n);
		v[x].push_back(y);
		v[y].push_back(x);
	}

}

void depthFirstSearch(vector<vector<int>> v,int node,bool a[])
{
	for(int i=0;i<v[node].size();i++)
	{
		if(a[v[node][i]]==false)
		{
			a[v[node][i]]=true;
			depthFirstSearch(v,v[node][i],a);
			break;
		}
	}
}

int main()
{
	int n,m,r;
	cin>>n>>m;
	n=n+1;
	r=m;
	vector<vector<int>> mad;
	mad.resize(n);
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		addedge(mad,x,y,n);

	}

	bool check=false;

	if(r>0)
	{
		int d=0;
		for(int i=1;i<=n;i++)
		{
			if((mad[i].size())%2==1)
			{
				d++;
				if(d>2)
				{
					break;
				}
			}
		}
		if(d%2==1)
		{
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}

	}
	else{
		cout<<"Yes"<<endl;
	}

	return 0;
}