#include<iostream>
using namespace std;

class data
{
public:
	int nodes;
	int edges;
	int **Adj;
	
};

class data* matrix()
{
int u,v;
class data *g=(class data*)malloc(sizeof(class data));


cout<<"enter no. of nodes and no. of edges : "<<endl;
cin>>u>>v;
g->nodes=u;
g->edges=v;
cout<<g->nodes<<" "<<g->edges<<endl;
int size=(g->nodes)*(g->nodes);
g->Adj=(int **)malloc((size)* sizeof(int));
size=sizeof(g->nodes);

cout<<"size : "<<size<<endl;

for(int i=0;i<g->nodes;i++)
{cout<<"yes"<<"\n";
	for(int j=0;j<g->nodes;j++)
	{
		g->Adj[i][j]=0;
		cout<<"no\n";
	}
}
cout<<"edges between two no. :\n";
for(int i=0;i<g->edges;i++)
{
	cin>>u>>v;
	g->Adj[u][v]=1;
	g->Adj[v][u]=1;
}

for(int i=0;i<g->nodes;i++)
{
	for(int j=0;j<g->nodes;j++)
	{
		cout<<g->Adj[i][j]<<" ";
	}
	cout<<"\n";
}

return g;

}


int main()
{
	class data *p;
	p=matrix();

return 0;
}