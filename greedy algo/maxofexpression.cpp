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
		}
		int b=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((a[i]|a[j])-(a[i]&a[j])==(a[i]-a[j]))
				{	
					b++;
				}
			}
		}
		cout<<b<<endl;
	}


	return 0;
}