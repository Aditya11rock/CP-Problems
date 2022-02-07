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
		int a[(n*m)+1],b=0;
		int ans2=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=m;j++)
			{
				if(i==1 && j==1)
				{
					ans2=k+ 2;
					
				}
				else{
					
					ans2=ans2 ^(k+i+j);
				}
			}
		}
		
		cout<<ans2<<"\n";

	}

	return 0;
}