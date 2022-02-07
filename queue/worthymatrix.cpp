#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,r;
		cin>>n>>m>>r;
		int a[n][m];
		int count=0;
		vector<vector<int>> mad;
		mad.resize(n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]>=r)
				{
					count++;
				}
				if(j==0)
				{
					mad[i].push_back(a[i][j]);
				}
				else{
					mad[i].push_back(mad[i][j-1]+a[i][j]);
				}
			}
		}
		for(int i=1;i<m;i++)
		{
			if(i<n)
			{
				for(int j=0;j<n-i;j++)
				{
					for(int k=0;k<m-i;k++)
					{
						int sum=0;
						for(int l=j;l<=j+i;l++)
						{
							sum=sum +mad[l][k+i]-mad[l][k]+a[l][k];
						}
						cout<<sum<<"\n";
						if((sum/((i+1)*(i+1)))>=r)
						{
							count++;
						}
					}
				}
			}
			else{
				break;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<mad[i].size();j++)
			{
				cout<<mad[i][j]<<" ";
			}
			cout<<"\n";
		}

		cout<<count<<"\n";

	}

	return 0;

}