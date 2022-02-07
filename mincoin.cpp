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
		int a[n][3],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0];
			if(i>0)
			{
				if(a[i-1][0]>a[i][0])
				{
					a[i][1]=a[i-1][1]+1;
				}
				else{
					a[i][1]=1;
				}
			}
			else{
				a[i][1]=1;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(i<(n-1))
			{
				if(a[i][0]<a[i+1][0])
				{
					a[i][2]=a[i+1][2]+1;
				}
				else{
					a[i][2]=0;
				}
			}
			else{
				a[i][2]=0;
			}
		}

		for(int i=0;i<n;i++)
		{
			cout<<a[i][1]+a[i][2]<<" ";
		}
		cout<<endl;


	}


	return 0;
}