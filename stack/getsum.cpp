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
		int p;
		cin>>p;
		bool che=true;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((a[i]+a[j])==p)
				{
					cout<<i<<" "<<j<<endl;
					che=false;
					break;
				}
			}
			if(che==false)
			{
				break;
			}
		}
		if(che==true)
		{
			cout<<"no answer"<<endl;
		}


	}

	return 0;
}