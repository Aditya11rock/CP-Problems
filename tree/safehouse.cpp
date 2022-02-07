#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

void addedge(vector<vector<int>> &v, int x,int y)
{
		v[x].push_back(y);
}

void getvect(vector<vector<int>> v,int node,int a[],vector<int> &vd)
{
	queue<int> vs;
	vs.push(node);
	int p=a[node];
	while(!vs.empty())
	{
		
		int q=vs.front();
		vs.pop();
		p=p| a[q];
		//cout<<p<<" running here ";
		for(int i=0;i<v[q].size();i++)
		{
			//cout<<v[q].size()<<endl;
			vs.push(v[q][i]);
		}
	}
	vd.push_back(p);

}

int main()
{
	/* code */

	int n,q;
	cin>>n>>q;
	int a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector<vector<int>> mad;
	mad.resize(n+1);
	for(int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		addedge(mad,x,y);
	}
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		getvect(mad,i,a,v);
	}
	//cout<<" here\n";
	/*for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}*/

	while(q--)
	{
		int p;
		cin>>p;
		int b=0;
		for(int i=0;i<v.size();i++)
		{
	
			if((v[i]&p)==v[i])
			{
				b++;
			}
		}
		cout<<b<<endl;
	}

	return 0;
}