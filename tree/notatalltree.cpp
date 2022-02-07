#include<iostream>
using namespace std;


int main()
{
	int n,t;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
for(int i=0;i<n-1;i++)
{
	for(int j=i;j<n;j++)
	{
		if(arr[i]>arr[j])
		{int temp;
			temp=arr[i];
			arr[i]=arr[j];
            arr[j]=temp;
		}
	}
}
t=arr[n-1];
int a,b=0;
cin>>a;
int arb[a];
for(int i=0;i<a;i++)
{
	int c;
	cin>>c;
	if(c==t)
	{

	}
	else
		{
			if()
		}
}
	return 0;

}