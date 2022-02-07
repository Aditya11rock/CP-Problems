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
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{

			cin>>a[i];
			int y=a[i];
			b[i]=y;
			for(int j=i-1;j>=0 && y<b[j];j--)
			{
				int k=b[j];
				b[j]=y;
				b[j+1]=k;

			}

		}

		for(int i=0;i<n;i++)
		{

			int y=0;
			for(int j=0;j<n;j++)
			{
				if(a[j]==b[i])
				{
					y=j;
					break;
				}
			}

			if(y!=i)
			{
				int k=a[i];
				a[i]=b[i];
				a[y]=k;
				break;
			}


		}

		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;


	}



	return 0;
}