#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

void hashfunc(multimap<int,pair<string,string>>&sto,int key,string name,string passion)
{
	key=key%50;
	sto.insert(make_pair(key,make_pair(name,passion)));

}

int main()
{
	int n;
	cin>>n;
	multimap<int,pair<string,string>> mad;
	while(n--)
	{
		int x;
		cin>>x;
		
		string c1,c2;
		cin>>c1>>c2;
		cout<<c1<<" "<<c2<<endl;
		hashfunc(mad,x,c1,c2);

	}

	cout<<"ends here\n";
	int m;
	cin>>m;
	while(m--)
	{
		int p;
		cin>>p;
		p=p%50;
		auto it=mad.equal_range(p);
		for(auto it1=it.first;it1!=it.second;it1++)
		{
			cout<<it1->first<<it1->second.first<<" "<<it1->second.second<<endl;
		}
	}

	return 0;
}