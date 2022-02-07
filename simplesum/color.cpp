#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;


int main()
{
	int t;
	cin>>t;

	//cout<<"mad\n";
	while(t--)
	{
		// 1: A   2: B
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+1][m+1]={0};
		bool mt=false;
		for(int i=1;i<=n*m;i++)
		{
			int x,y;
			cin>>x>>y;
			if(i%2!=0)
			{
				a[x][y]=1;
			}
			else{
				a[x][y]=2;
			}
			if(i>=(2*(k*k)-1))
			{
				int al=0,bo=0;
				
				for(int i=1;i<=(n-k+1);i++)
				{
					for(int j=1;j<=(m-k+1);j++)
					{
						for(int l=i;l<=k;l++)
						{
							for(int p=j;p<j+k;p++)
							{
								if(a[l][p]==1)
								{
									bo=0;
									al++;
								}
								else if(a[l][p]==2)
								{
									bo++;
									al=0;
								}
								else{
									al=0;
									bo=0;
								}
							}
						}
						if(al==k*k)
						{
							cout<<"Alice\n";
							mt=true;
							break;
						}
						else if(bo==k*k)
						{
							cout<<"Bob\n";
							mt=true;
							break;
						}
					}
					if(mt==true)
					{
						break;
					}

				}
				if (mt==true)
				{
					/* code */
					break;
				}
			}


		}

		if(mt==true)
		{
			continue;
		}
		else{
			cout<<"Draw\n";
		}


	}


	return 0;
}