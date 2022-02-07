#include<iostream>
#include<math.h>
#include<set>
#define ll long long int
using namespace std;

ll madpower(ll an,ll bn)
{
	ll ans=1;
	while(bn)
	{
		if(bn&1)
		{
			ans=ans*an;
		}
		an=an*an;
		bn=bn>>1;

	}

//cout<<ans<<endl;
return ans;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			int y=a[i];
			for(int j=i-1;j>=0 && a[j]>y;j--)
			{
				int x=a[j];
				a[j+1]=x;
				a[j]=y;
			}
		}

		while(q--)
		{
			int p,count=0;

			bool mad=false;
			cin>>p;
			for(int i=0;i<n;i++)
			{
				if((p-a[i])<0)
				{
					count++;
				}
				else if((p-a[i])==0)
				{
					cout<<"0\n";
					mad=true;
					break;
				}
				else{
					break;
				}
			}
			if(mad==true)
			{
				continue;
			}
			if(count%2==0)
			{
				cout<<"POSITIVE\n";
			}
			else{
				cout<<"NEGATIVE\n";
			}

		}

	}

	return 0;
}