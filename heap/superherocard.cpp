#include<iostream>
using namespace std;

int maxer(long int b[],int c)
{
	long int max,cmax,gmax,x=0;
cmax=b[0];
gmax=b[0];
for(int i=1;i<c;i++)
{
	if(b[i]>=(b[i]+cmax))
	{
		x=i;
		cmax=b[i];
	}
	else
	{int y=-1;
		for(int j=i-1;j>=x;j--)
		{
			if(b[j]==b[i])
			{
				y=j;
				break;
			}
		}
		if(y==-1)
		{
			cmax=cmax+b[i];
			if(cmax>gmax)
			{
				gmax=cmax;
			}
		}
		else
		{
			i=y;
			cmax=0;
		}
	}
}

	return gmax;
}

int main()
{
long int n;
cin>>n;
long int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
cout<<maxer(a,n)<<"\n";


	return 0;
}