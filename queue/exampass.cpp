#include<iostream>
using namespace std;

int max(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else{
		return b;
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,r;
		cin>>n>>r;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}

		int ans=b[0],cur=b[0];

		for(int i=1;i<n;i++)
		{
			cur=cur  - (r*(a[i]-a[i-1]));
			
			if(cur<0)
			{
				cur=0;
			}
			cur=cur + b[i];
			ans=max(cur,ans);

		}

		cout<<ans<<endl;

	}

	return 0;
}