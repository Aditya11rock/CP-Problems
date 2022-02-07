#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1],b[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		int q,l=0,p[n+1];
		cin>>q;
		while(q--)
		{
			int r;
			cin>>r;
			if(r==1)
			{
				if(l%2==0)
				{
					l++;
					for(int i=1;i<=n;i++)
					{
						p[b[i]]=a[i];
					}
				}
				else{
						l++;
						for(int i=1;i<=n;i++)
						{
							a[b[i]]=p[i];
						}
				}
			}
			else if(r==2)
			{
				if(l%2==0)
				{
					int x,y;
					cin>>x>>y;
					int z=a[x];
					a[x]=a[y];
					a[y]=z;
				}
				else{
					int x,y;
					cin>>x>>y;
					int z=p[x];
					p[x]=p[y];
					p[y]=z;
				}
			}
			else{
					if(l%2==0)
					{
						int x;
						cin>>x;
						cout<<a[x]<<endl;
					}
					else{
						int x;
						cin>>x;
						cout<<p[x]<<endl;
					}
			}
		}

	}

	return 0;
}