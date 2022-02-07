#include<iostream>
#include<vector>
#include<map>
using namespace std;

void addedge(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
	v[y].push_back(x);
}

void printGraph(vector<vector<int>> v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

int retParent(int x,vector<int> dip)
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


void getTheCorrectEdge(vector<vector<int>> v,vector<pair<int,int>> &vs,vector<int> &dis)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{	
			int a=retParent(i,dis);
			int b=retParent(v[i][j],dis);
			

			
			if(a!=b)
			{
				dis[a]=b;
				vs.push_back(make_pair(i,v[i][j]));
			
			}
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
		addedge(mad,x,y);
	}

	printGraph(mad);

	vector<int> mad2;
	mad2.resize(n,-1);

	vector<pair<int,int>> mad3;
	


	getTheCorrectEdge(mad,mad3,mad2);

	for(auto it:mad3)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}





	return 0;
}
