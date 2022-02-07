#include<iostream>
#include<vector>
using namespace std;

int func(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else{
		return n * func(n-1);
	}
}

int main()
{

	vector<vector<int>> v;
	int n;
	cin>>n;

	v.resize(n);
	int q;
	cin>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}




	return 0;
}