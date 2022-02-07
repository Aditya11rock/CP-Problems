#include<iostream>
#include<map>
#include<vector>
using namespace std;

void addedge(vector<vector<pair<int,int>>> &v,int l,int r,int w)
{
	v[l].push_back(make_pair(r,w));
	//v[r].push_back(make_pair(l,w));
}

void printgraph(vector<vector<pair<int,int>>> v)
{

	for(int i=0;i<v.size();i++)
	{

		cout<<i<<endl;
		for(int j=0;j<v[i].size();j++)
		{
			cout<<"         "<<v[i][j].first<<" "<<v[i][j].second<<endl;
		}
	}

}

//modified of LAZY approach called as EAGER APPROACH
//this is for shortest path for positive weighted graph
// MAP can be arranged in decreasing order default is increasing order
// ERASE function is used to remove particular pair from map using key
//since map contains unique key and values erasing will remove the pair
//but multimap contains duplicate keys, removing pair using key will remove all the pair having same key
// so use find and iterator to locate a particular pair and then use erase with iterator to remove that pair from multimap...

void shortpath(vector<vector<pair<int,int>>> v,vector<int> &p)
{
	multimap<int, int> mad;
	bool visited[v.size()]={0};
	mad.insert(make_pair(0,0));
	visited[0]=true;
	p[0]=0;
	while(!mad.empty())
	{
		auto it=mad.begin();
		int a=it->first;
		int b=it->second;
		auto it1=mad.find(a);
	
		mad.erase(it1);

		for(int i=0;i<v[b].size();i++)
		{
			if(visited[v[b][i].first]==false)
			{
				int length=a+v[b][i].second;
				visited[v[b][i].first]=true;
				p[v[b][i].first]=length;
				mad.insert(make_pair(length,v[b][i].first));
			}
			else{
				int length=a+v[b][i].second;

				if(length<p[v[b][i].first])
				{
					p[v[b][i].first]=length;
				}
			}
		}
		

	}

}

int main()
{
/*	map<int,int,greater<int>> mad;
	mad.insert(make_pair(17,3));
	mad.insert(make_pair(25,3));
	mad.insert(make_pair(23,3));
	mad.insert(make_pair(54,3));
	mad.insert(make_pair(2,3));

	map<int,int>:: iterator it;
	for(it=mad.begin();it!=mad.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
*/

	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>> mad;
	mad.resize(n);

	while(m--)
	{
		int x,y,z;
		cin>>x>>y>>z;

		addedge(mad,x,y,z);

	}


	printgraph(mad);
	vector<int> shortpathdata;
	shortpathdata.resize(n,-1);
	shortpath(mad,shortpathdata);

	for(int i=0;i<n;i++)
	{
		cout<<i<<" "<<shortpathdata[i]<<"\n";
	}

	return 0;
}