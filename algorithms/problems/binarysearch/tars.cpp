#include<iostream>
using namespace std;
int main()
{
	int n;
	long int sp;
	cin>>n>>sp;
	long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int y=a[i];
		for(int j=i-1;j>=0 && y<a[j];j--)
		{
			a[j+1]=a[j];
			a[j]=y;
		}
	}
	int k,sum1=0,start=0,end=n-1;
	while(start<=end)
	{int mid,sum=0;
		mid=(start + end)/2;
		for(int i=0;i<=mid;i++)
		{
			sum=sum +a[i]+(i+1)*(mid +1);
		
		}
		
		if(sum<=sp)
		{
			if(sum>sum1)
			{
				sum1=sum;
				k=mid+1;
			}
			start=mid +1;
		}
		else if(sum>sp && sum1!=0)
		{
			break;
		}
		else
		{
			start=mid-1;
		}


	}
cout<<k<<" "<<sum1<<endl;

	return 0;
}