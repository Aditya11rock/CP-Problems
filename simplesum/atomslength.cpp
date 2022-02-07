#include<iostream>
#include<string>
#include<math.h>
#define ll long long int
using namespace std;


/*int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,a,p,q;
		cin>>d>>a>>p>>q;

		ll ans=d*p;
		for(int i=1;i<=d;i++)
		{
			ans=ans + p;
			if(i%a==0)
			{
				p=p+q;
			}
		}
		d=d-a;
		while(d>0)
		{
			ans=ans + d*q;
			d=d-a;
		}

		cout<<ans<<endl;
	}
	

	return 0;
}*/

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int a,d,p,q;
		cin>>a>>d>>p>>q;
		int r=a%d;
		
		int w=floor(a/d);
		int s=w+1;

		ll ans=0;
		ans+=((s*(2*p+(s-1)*q))/2)*r;
		ans+=((w*(2*p+(w-1)*q))/2)*(d-r);
		cout<<ans<<endl;

	}

	return 0;

}