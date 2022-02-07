#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
#define ll long long int
#define mod 1000000007

void addedge(vector<vector<pair<int,int>>>&v,int x,int y)
{
	v[x].push_back(make_pair(y,0));
	//cout<<x<<" "<<y;
}


int lengthoftree(vector<vector<pair<int,int>>> v,int node)
{
	if(v[node].size()>0)
	{
		int l=0;
		for(int i=0;i<v[node].size();i++)
		{
			int p=lengthoftree(v,v[node][i].first);
			if(p>l)
			{
				l=p;
			}

		}
		return l+1;
	}
	else{
			return 0;
	}
}

int subtreesum(vector<vector<pair<int,int>>>v,int node)
{
	if(v[node].size()>0)
	{
		int p=v[node].size();
		ll ans=p*(p+1)/2;
		for(int i=0;i<v[node].size();i++)
		{
			ans=ans + subtreesum(v,v[node][i].first);
		}

		return ans;
	}
	else{
		return 0;
	}
}


void assignval(vector<vector<pair<int,int>>>&v,int node,int k)
{
	if(v[node].size()>0)
	{
		multimap<int,int,greater<int>> mad; 
		for(int i=0;i<v[node].size();i++)
		{
			int p=v[v[node][i].first].size();
			mad.insert(make_pair(p,i));
		}
		int a=1;
		for(auto it=mad.begin();it!=mad.end();it++)
		{
			v[node][it->second].second=a*k;
			assignval(v,v[node][it->second].first,a*k);
			a++;
		}

	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{


		int n,k;
		cin>>n>>k;
		vector<vector<pair<int,int>>> mad;
		mad.resize(n+1);
		while(n>1)
		{
			int x,y;
			cin>>x>>y;
			addedge(mad,x,y);
			n--;

		}
		vector<ll> vs;
		for(int i=0;i<mad[1].size();i++)
		{
			ll p=subtreesum(mad,mad[1][i].first) +1;
			//cout<<p<<endl;
			vs.push_back(p);
		}
		//cout<<"reached here";
		ll ans=k;
		sort(vs.begin(),vs.end(),greater<int>());
		for(int i=1;i<=vs.size();i++)
			{
				//cout<<vs[i-1]<<" ";
				ans=(ans + vs[i-1]*(k*i))%mod;
			}
			cout<<ans<<endl;

		

	}


	return 0;
}

/*int main()
{
	int t;
	cin>>t;
	//stack<int> mad;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> arrive;
		vector<int> left;
		
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			arrive.push_back(x);
			left.push_back(y);

			
		}
		sort(arrive.begin(),arrive.end());
		sort(left.begin(),left.end());

		int i=1,j=0,maxguest=1,currguest=1;

		while(i<n && j<n)
		{
			if(arrive[i]<=left[j])
			{
				currguest++;
				i++;
				if(currguest>maxguest)
				{
					maxguest=currguest;
				}
			}
			else{
				 j++;
				 currguest--;
			}
		}

		if(maxguest>=k)
		{
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}


	}	


	return 0;

}*/