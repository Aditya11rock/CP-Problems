#include<iostream>
#include<vector>
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

		int ans=0,b=1;
		for(int i=1;i<n;i++)
		{
			if(i==(n-1))
			{
				if(a[i]==a[i-1])
				{
					b++;
					ans=ans+((b*(b+1))/2);
				}
				else{
					ans=ans+((b*(b+1))/2)+1;
				}
			}
			else{
				if(a[i]==a[i-1])
				{
					b++;
				}
				else{
					ans=ans + (b*(b+1)/2);
					b=1;
				}
			}
		}


		cout<<ans<<endl;

	}


	return 0;
}