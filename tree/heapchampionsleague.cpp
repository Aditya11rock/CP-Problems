#include<iostream>
using namespace std;
int main()
{ int n,m,temp=0,max,c;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(m>0)
	{max=0;
		c=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				c=i;
			}
		}
		temp=temp + max;
		a[c]=a[c]-1;
		m--;

	}
	cout<<temp;


	return 0;
}