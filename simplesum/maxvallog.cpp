#include<iostream>
#include<cmath>
#include<string>
#include<math.h>
#include<vector>
#include<list>
#include<algorithm>
#define ll long long int
using namespace std;
/*
int main()
{
	double p;
	int a,k;
	cin>>p>>a>>k;
	ll ans=1;
	while(k>0)
	{
		if(ans+a>ans*p)
		{
			k--;
			ans=ans+a;
		}
		else{
			break;
		}
	}
	ans=log2(ans)+k*log2(p);
	cout<<ans<<endl;

	return 0;
}
/*
*/
/*
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> mad;
		for(int i=0;i<n;i++)
		{	
			int p;
			cin>>p;
			mad.push_back(p);
		}
		sort(mad.begin(),mad.end());
		/*for(int i=0;i<n;i++)
		{
			cout<<mad[i]<<" ";
		}*/
/*		bool an=true;
		for(int i=0;i<n-1;i=i+2)
		{
			//cout<<i<<endl;
			if((mad[i]^mad[i+1])!=0)
			{
				cout<<mad[i]<<endl;
				an=false;
				break;
			}
		}
		int l=2^2;
		//cout<<l<<endl;
		if(an)
		{
			cout<<mad[n-1]<<endl;
		}
	}

	return 0;
}
*/

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		cin>>n;
		bool odd=false;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2!=0)
			{
				odd=true;
			}
		}
		if(odd==true)
		{
			int count=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]%2==0)
				{
					while(a[i]%2==0)
					{
						count++;
						a[i]=a[i]%2;
					}
				}
			}
			cout<<count<<endl;
		}


	}
	return 0;
		
}
