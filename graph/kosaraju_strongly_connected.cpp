#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<vector<int>> &v,int x,int y)
{
	v[x].push_back(y);
}

void depthfirstsearch(vector<vector<int>> v,bool a[],vector<int> &order,int node)
{
	for(int i=0;i<v[node].size();i++)
	{
		if(a[v[node][i]]==false)
		{
			a[v[node][i]]=true;
			depthfirstsearch(v,a,order,v[node][i]);
			order.push_back(v[node][i]);
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
	cout<<mad.size()<<endl;
	bool a[n]={0};
	vector<int> order;
	for(int i=0;i<mad.size();i++)
	{
		if(a[i]==false)
		{
			a[i]=true;
			depthfirstsearch(mad,a,order,i);
			order.push_back(i);
		}
	}

	/*for(int i=0;i<order.size();i++)
	{
		cout<<order[i]<<" ";
	}*/

	vector<vector<int>> reversegraph;
	reversegraph.resize(n);
	for(int i=0;i<mad.size();i++)
	{
		for(int j=0;j<mad[i].size();j++)
		{
			addedge(reversegraph,mad[i][j],i);
		}
	}
	//cout<<endl;

	/*for (int i = 0; i <reversegraph.size(); i++)
	{
		/* code */

/*		cout<<i<<endl;
		for(int j=0;j<reversegraph[i].size();j++)
		{
			cout<<"      "<<reversegraph[i][j]<<endl;
		}
*/

	bool c[n]={0};
	vector<vector<int>> mad2;
	mad2.resize(n);
	for(int i=order.size()-1;i>=0;i--)
	{
		if(c[order[i]]==false)
		{
			c[order[i]]=true;
			depthfirstsearch(reversegraph,c,mad2[order[i]],order[i]);
			mad2[order[i]].push_back(order[i]);

		}
	}

	bool pe=true;
	for(int i=0;i<mad2.size();i++)
	{
		if(mad2[i].size()>1)
		{
			cout<<"Yes\n";
			pe=false;
			break;
		}
	}
	if(pe==true)
	{
		cout<<"No\n";
	}
	
	

	return 0;

}