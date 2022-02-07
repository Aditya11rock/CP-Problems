#include<iostream>
using namespace std;
int main()
{int n;
	cin>>n;
	int arr[n+1];
	arr[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++)
	{int x=-1,y=-1,d;
		for(int j=1;j<i;j++)
		{
			if(arr[j]>arr[i])
			{
				x=j;
			}
		}
		for(int k=n;k>i;k--)
		{
			if(arr[k]>arr[i])
			{
				y=k;
			}
		}
       d=x+y;
    cout<<d<<" ";
	}


	return 0;
}