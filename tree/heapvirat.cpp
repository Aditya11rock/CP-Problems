#include<iostream>
using namespace std;
int main()
{int n;
	cin>>n;
	int test[n];
	int odi[n];
	int ttwenty[n];
	int final[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>odi[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>ttwenty[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>test[i];
	}
	for(int i=1;i<=n;i++)
	{int y;
		final[i]=odi[i-1]+test[i-1]+ttwenty[i-1];
		y=final[i];
		for(int j=i-1;j>0 && y<final[j];j++)
		{
			final[j+1]=final[j];
			final[j]=y;
		}
	}


	int q;
	cin>>q;
	while(q>0)
	{
       int x;
       cin>>x;
       if(x>n)
       {
         cout<<"-1\n";
       }
       else
       {
       	 cout<<final[x]<<"\n";
       	 for(int i=x;i<n;i++)
       	 {
       	 	final[i]=final[i+1];
       	 }
       	 n=n-1;
       }

		q--;
	}
	

	return 0;
}