#include<iostream>
using namespace std;
int main()
{
	int n,k,s;
	cin>>n>>k>>s;
	int a[n][3];
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0];
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i][1];
		if(a[i][0]<=6)
		{
			if(a[i][1]==1)
			{
				a[i][2]=9;
			}
			else{
					a[i][2]=10;

			}
		}
		else if(a[i][0]>=7 && a[i][0]<=16)
		{
			if(a[i][1]==1)
			{
				a[i][2]=7;
			}
			else{
					a[i][2]=8;

			}

		}
		else if(a[i][0]>=17 && a[i][0]<=18)
		{
			if(a[i][1]==1)
			{
				a[i][2]=5;
			}
			else{
					a[i][2]=6;

			}

		}
		else if(a[i][0]>=19 && a[i][0]<=22)
		{
			if(a[i][1]==1)
			{
				a[i][2]=3;
			}
			else{
					a[i][2]=4;

			}

		}
		else{
			if(a[i][1]==1)
			{
				a[i][2]=2;
			}
			else{
					a[i][2]=1;

			}
		}

	}

	int p=0;
	int y[s][2];
	while(p<s)
	{
		int q=0,c[k][4];
		for(int i=0;i<n;i++)
		{
			if(q<k)
			{
				if(a[i][0]>0)
				{
					c[q][0]=a[i][0];
					c[q][1]=a[i][1];
					c[q][2]=a[i][2];
					c[q][3]=i;
					q++;

				}
			}
			else{
				break;
			}
		}

		int min=c[0][2],w=0;
		for(int i=1;i<k;i++)
		{
			if(c[i][2]<=min)
			{
				min=c[i][2];
				w=i;
			}
		}
		
		y[p][0]=c[w][0];
		y[p][1]=c[w][1];
		a[c[w][3]][0]=0;
		p++;

	}
	cout<<y[s-1][0]<<" "<<y[s-1][1]<<"\n";
	return 0;
}