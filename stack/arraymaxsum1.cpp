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
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=0)
			{
				a[i]=0;
			}
		}
		int b[n];
		int sum=0,c=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<0)
			{
				if(sum>0)
				{
					b[c]=sum;
					sum=0;
					c++;
				}
			}
			else if(i<(n-1))
			{
				sum=sum + a[i];
			}
			else if(i==(n-1))
			{
				sum=sum + a[i];
				b[c]=sum;
				c++;
			}
		}
		int max=b[0];
		for(int i=0;i<c-1;i++)
		{
			int p=b[i]+b[i+1];
			if(p>max)
			{
				max=p;
			}
		}
		
		cout<<max<<"\n";

	}


	return 0;
}