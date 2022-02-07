#include<iostream>
#include<vector>
using namespace std;

class Graph{
	int v;
	vector<vector<int>> lst;
	vector<bool> tracked;

public:
	void setthesize(int n)
	{
		this->v=n;
		lst.resize(n);
		for(int i=0;i<n;i++)
		{
			tracked.push_back(false);
		}
	}
	void addedge(int x,int y)
	{

		lst[x].push_back(y);

	}

	void traverse(int p)
	{
		if(tracked[p]==false)
		{
			cout<<"visiting : "<<p<<"\n";
			tracked[p]=true;
			
			for(int j=0;j<lst[p].size();j++)
			{
				traverse(lst[p][j]);
			}

		}
		
	}



};



int main()
{

	Graph g;
	int n;
	cin>>n;
	g.setthesize(n);
	int q;
	cin>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		g.addedge(x,y);
	}

	g.traverse(0);



	return 0;
}