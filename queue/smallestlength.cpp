#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	for(int i=0;i<n;i++)
	{
		int c=0,d=-1;
		for(int j=i;j<n;j++)
		{
			if(a[j]>=a[i])
			{
				c++;
				if(c>=b[i])
				{
					d=j-i+1;
					break;
				}
			}
		}
		
		cout<<d<<" ";

	}
	cout<<endl;

	return 0;
}