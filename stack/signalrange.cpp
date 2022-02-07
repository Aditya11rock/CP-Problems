#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
{int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	/*	if(i==0)
			cout<<"1 ";
		else
		{
			if(a[i]<a[i-1])
				cout<<"1 ";
			else
			{int b=0;
				for(int j=i-1;j>=0;j--)
				{
					if(a[j]<=a[i])
					{
						b=b+1;
					}
					else if(a[j]>a[i])
					{
                       b=b+1;
                       break;
					}
				}
				cout<<b<<" ";
			}
		}*/
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
			cout<<"1 ";
		else
		{
			if(a[i]<a[i-1])
				cout<<"1 ";
			else
			{int b=0;
				for(int j=i-1;j>=0;j--)
				{
					if(a[j]<=a[i])
					{
						b=b+1;
					}
					else if(a[j]>a[i])
					{
                       b=b+1;
                       break;
					}
				}
				cout<<b<<" ";
			}
		}
	}


	t--;
}

		return 0;
}