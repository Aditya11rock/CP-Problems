#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
}

void printgraph(vector<vector<int>> v)
{
	for(int i=1;i<v.size();i++)
	{
		cout<<i<<endl;
		for(int j=0;j<v[i].size();j++)
		{
			cout<<"     "<<v[i][j]<<endl;
		}
	}
}

void dfs(vector<vector<int>> v,int node,bool bac[],vector<int> &ordere)
{
	//arrays are by default passedd as reference
	//vector<int> is non-array, non-reference, and non-pointer - it is being passed by value, and hence it will call copy-constructor. 
	//So, you must use vector<int>& (preferably with const , if function isn't modifying it) to pass it as a reference
	for(int i=0;i<v[node].size();i++)
	{
		if(bac[v[node][i]]==false)
		{
			bac[v[node][i]]=true;
			dfs(v,v[node][i],bac,ordere);
			ordere.push_back(v[node][i]);

		}
	}
}

void topologicalsort(vector<vector<int>> v,vector<int> &ordere)
{
	bool a[v.size()]={0};
	for(int i=1;i<v.size();i++)
	{
		if(a[i]==false)
		{
			a[i]=true;
			dfs(v,i,a,ordere);
			ordere.push_back(i);
		}
	}

}

int main()
{

	int n,m;
	cin>>n>>m;

	vector<vector<int>> mad;
	mad.resize(n);
	cout<<"reached here\n";
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		addedge(mad,x,y);
	}
	printgraph(mad);
	vector<int> ordere;
	topologicalsort(mad,ordere);

	for(int i=ordere.size()-1;i>=0;i--)
	{
		cout<<ordere[i]<<" ";
	}
	cout<<endl;

	return 0;
}
