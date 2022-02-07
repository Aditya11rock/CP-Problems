#include<iostream>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	int y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int q;
scanf("%d",&q);
while(q>0)
{int x;
	scanf("%d",&x);

	int start=0,end=n-1,b;
	if(x<=a[end])
	{while(start<=end)
	{
		int mid;
		mid=(start + end)/2;
		if(a[mid]==x)
		{
			b=mid ;
			break;
		}
		else if(a[mid]<x)
		{
			if(a[mid +1]>=x)
			{ 
				b=mid +1;
                break;
			}
			else
			{
				start=mid +1;
			}
		}
		else
		{
			end=mid -1;
		}
	}
   }
   else
   	b=n;
 
 cout<<b<<"\n";

	q--;
}


	return 0;
}