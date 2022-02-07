#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t>0)
{
int n;
cin>>n;
int a[n][2];
for(int i=0;i<n;i++)
{int b=1;
	cin>>a[i][0];
	for(int j=i-1;j>=0;j--)
	{
        if(a[j][0]==a[i][0])
        {
        	a[j][1]=a[j][1]+1;
        	b=a[j][1];
        }
	}
	a[i][1]=b;
}
for(int i=0;i<n;i++)
{
	if(i==n-1)
		cout<<"-1";
	else
	{int b=0,c;
		for(int j=i+1;j<n;j++)
		{
			if(a[j][1]>a[i][1])
			{
				b=1;
				c=j;
				break;
			}
		}
		if(b==1)
		{
			cout<<a[c][0]<<" ";
		}
		else
			cout<<"-1"<<" ";
	}
}
cout<<"\n";
	t--;
}

	return 0;
}