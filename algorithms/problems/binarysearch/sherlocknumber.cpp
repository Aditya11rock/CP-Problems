#include<iostream>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t>0)
{int n,k,p;
	scanf("%d%d%d",&n,&k,&p);
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	while(k>0)
	{int x;
		scanf("%d",&x);
		int start=0,end=n-1,d;
		while(start<=end)
             {
             	int mid;
             	mid=(start + end)/2;
             	if(a[mid]==x)
             	{
             		d=mid;
             		break;
             	}
             	else if(a[mid]>x)
             	{
             		end=mid-1;
             	}
             	else if(a[mid]<x)
             	{
             		start=mid +1;
             	}
             }
             for(int i=d;i<n-1;i++)
             {
             	a[i]=a[i+1];
             }
             n=n-1;
		k--;
	}
	if(p>n)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n",a[p-1]);
	}

	t--;
}

	return 0;
}