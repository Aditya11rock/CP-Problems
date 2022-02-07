#include<iostream>
#include<math.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	int a[1000002];
		for(int i=2;i<=1000001;i++)
		{
			a[i]=i;
			cout<<i<<" ";
		}
		int q=sqrt(1000002)+1;
		for(int i=2;i<=q;i++)
		{
			if(a[i]!=0)
			{
				for(int j=2*i;j<=1000001;j=j+i)
				{
					a[j]=0;
				}
			}
		}
		int z=0;
		for(int i=2;i<=1000001;i++)
		{
			if(a[i]!=0)
			{
				z=z+1;
				a[i]=z;
			}
			else
			{
				a[i]=z;
			}
		}

	while(t--)
	{

		int n,p;
		cin>>n>>p;
		if(n<=1)
		{
			cout<<"Chef"<<endl;;
		}
		else{

			int r=a[n];

		if(r<=p)
		{
			cout<<"Chef"<<endl;
		}
		else{
			cout<<"Divyam"<<endl;
		}



		}




	}

	return 0;
}