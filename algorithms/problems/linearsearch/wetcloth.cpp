#include<iostream>
using namespace std;
int main()
{
int n,m,g;
cin>>n>>m>>g;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int b[m];
for(int j=0;j<m;j++)
{
	cin>>b[j];
	int y=b[j];
	for(int k=j-1;k>=0 && y<b[k];k--)
	{
		b[k+1]=b[k];
		b[k]=y;
	}
}
int c=0,s=1,clothes=0,front=0;
while(c<g && s<n && front<m)
{
	int t,collect=0;
	t=(a[s])-(a[s-1]);
	for(int i=front;i<m;i++)
	{
		if(b[i]<=t)
		{
			front=front + 1;
			clothes=clothes + 1;
			collect=collect + 1;
		}
		else if(b[i]>t)
		{
			s=s+1;
			break;
		}

	}
	if(collect>0)
	{
		c=c+1;
	}

}
cout<<clothes<<"\n";
	return 0;
}