#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;

		int a[n+1],b[n+1],r=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			{
				b[i]=0;
				r=i;
			}
			else if(a[i]==2)
			{
				b[i]=0;
			}
			else{
				if(r!=0)
				{
					b[i]=i-r;
				}
				else{
					b[i]=-1;
				}
			}
		}
		int s=0;
		for(int i=n;i>=1;i--)
		{
			if(a[i]==2)
			{
				s=i;
			}
			else if(s!=0){

				int z=s-i;
				//cout<<z<<" "<<s<<" "<<i<<endl;
				if(b[i]!=-1)
				{
					b[i]=min(b[i],z);
				}
				else{
					b[i]=z;
				}
			}
		}

		while(q--)
		{
			int x;
			cin>>x;
			cout<<b[x]<<" ";
		}
		cout<<endl;

	}

	return 0;
}