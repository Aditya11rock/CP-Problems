#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int ans=k+2;
		for(int i=2;i<=n;i++)
		{
			if(i<=m)
			{
				if(i%2!=0)
				{
					ans=ans ^(k+i+1);
					
				}
			}
			else{
				if(m%2!=0)
				{
					ans=ans ^(k+i+1);
				}
			}
		}
		for(int i=2;i<=m;i++)
		{
			if((m-i+1)%2!=0)
			{
				ans=ans ^(k+n+i);
				
			}
		}

		cout<<ans<<"\n";

	}


	return 0;
}