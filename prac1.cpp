#include<iostream>
#include<vector>
#include<math.h>
using namespace std;




int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1][3];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i][0];
			a[i][2]=i;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>a[i][1];
		
		}
		int ans=0;
		for(int i=1;i<n;i++)
		{
			int b=0,c=0;
			for(int j=1;j<=n;j++)
			{
				if(a[j][0]==i)
				{
					b=a[j][2];
				}
				else if(a[j][0]==i+1)
				{
					c=a[j][2];
				}
			}

			if(c>b)
			{

			}
			else
			{
				int d=c;
				while(c<=b){
					ans=ans +1;
					a[d][2]=a[d][2]+a[d][1];
					c=c+a[d][1];

				}
			}

		}

		cout<<ans<<endl;

	}
	

	return 0;
	
}