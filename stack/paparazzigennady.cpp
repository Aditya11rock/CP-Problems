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
		double a[n];
		for(int i=0;i<n;i++)
		{

			cin>>a[i];

		}
		int max=1;
		int i=0;
		while(i<n){

			double p=double((a[i+1]-a[i])/1);
			int d=i+1;
			for(int j=i+2;j<n;j++)
			{
				double q=double((a[j]-a[i])/(j-i));
				if(q>=p)
				{
			
					p=q;
					d=j;
				}
			}
			int r=d-i;
			i=d;
			if(r>max)
			{
				max=r;
			}


		}

		cout<<max<<endl;


	}

	return 0;
}