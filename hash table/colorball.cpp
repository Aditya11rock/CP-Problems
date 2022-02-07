#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long int
#define pb push_back


//MAX COVERAGE SUM WHERE COMMON RANGE WAS TO BE FOUND OUT

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int>> v;
		while(n--)
		{
			int x,y;
			cin>>x>>y;
			v.push_back(make_pair(x,y));
		}
		ll ans=0;
		cout<<"\nvector before sorting\n";
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		sort(v.begin(),v.end());
		cout<<"vector after sort\n";
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		for(int i=0;i<v.size();i++)
		{
			ans=ans + v[i].second-v[i].first;
			cout<<ans<<endl;
			int a=v[i].first,b=v[i].second;
			for(int j=i-1;j>=0;j--)
			{
				if((a>=v[j].first && a<=v[j].second))
				{
					if(b>v[j].second)
					{
						ans=ans-(v[j].second-a);
						a=v[j].second;
					}
					else{
							ans=ans - (b-a);
							a=0;
							b=0;
					}
				}
				else if(b>=v[j].first && b<=v[j].second)
				{
					if(a<v[j].first)
					{
						ans=ans -(b-v[j].first);
						b=v[j].first;
					}
					else{
							ans=ans-(b-a);
							a=0;
							b=0;
					}
				}
			}
			cout<<ans<<endl;
		}

		cout<<ans<<endl;

	}


	return 0;
}