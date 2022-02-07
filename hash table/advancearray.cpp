#include<iostream>
using namespace std;
int main()
{int n,b=1,c,d,k,x;
	cin>>n;
	int a[n];
	while(n>0)
{
	int z;
	cin>>z;
	if(z==1)
	{
		cin>>a[b];
		b=b+1;
	}
	else if(z==2)
	{ x=0;
		cin>>c>>d>>k;
		for(int i=c;i<=d;i++)
		{
            if(a[i]<k)
            	x=x+1;
		}
		cout<<x<<"\n";

	}
	else if(z==3)
	{
		x=0;
		cin>>c>>d>>k;
		for(int i=c;i<=d;i++)
		{
            if(a[i]==k)
            	x=x+1;
		}
		cout<<x<<"\n";
	}
	else
	{
		x=0;
		cin>>c>>d>>k;
		for(int i=c;i<=d;i++)
		{
            if(a[i]>k)
            	x=x+1;
		}
		cout<<x<<"\n";
	}

n=n-1;

}

	return 0;
}