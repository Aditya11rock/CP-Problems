#include<iostream>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int s;
		cin>>s;
		int a[s];
		for(int i=0;i<s;i++)
		{
			cin>>a[i];
		}
		int ans=0;
		for(int i=0;i<s;i++)
		{
			int p;
			cin>>p;
			for(int j=1;j<=p;j++)
			{
				int q;
				cin>>q;
				ans=ans + q;
			}
			ans=ans-(a[i]*(p-1));
		}
		cout<<ans<<endl;


	}

	return 0;
}