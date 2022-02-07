#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// DUNGEON ALGORITHM TO FIND SHORTEST ROUTE BETWEEN CONNECTED GRAPH
void addedge(vector<vector<int>> &v,int l,int r)
{//here vector is passed by reference that's why value is getting inserted in vector
	v[l].push_back(r);
	v[r].push_back(l);

}

void printgrapedh(vector<vector<int>> v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<i<<" "<<v[i][j]<<endl;
		}
		cout<<"**************************\n";
	}

}

void minimumpath(vector<vector<int>> v,int l)
{
	bool a[v.size()]={0};
	queue<int> che;
	che.push(1);
	int currcount=1;
	int nextcount=0;
	int min=1;
	a[1]=true;
	bool found=false;
	while(!che.empty())
	{
		int b=che.front();
		che.pop();
		currcount--;
		for(int i=0;i<v[b].size();i++)
		{
			if(v[b][i]==l)
			{
				found=true;
				break;
			}
			else if(a[v[b][i]]==false)
			{
				a[v[b][i]]=true;
				che.push(v[b][i]);
				nextcount++;
			}
		}

		if(found)
		{
			
			break;
		}

		if(currcount==0)
		{
			currcount=nextcount;
			nextcount=0;
			min++;
		}



	}

cout<<min<<"\n";


}

int main()
{
	int n;
	cin>>n;
	vector<vector<int>> mad;
	mad.resize(n+1);
	int m;
	cin>>m;
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		addedge(mad,l,r);
	
	}

	cout<<mad.size()<<" \n";
	int q;
	cin>>q;
	while(q--)
	{
		int p;
		cin>>p;
		minimumpath(mad,p);
	}

	//printgrapedh(mad);
	
	return 0;
}