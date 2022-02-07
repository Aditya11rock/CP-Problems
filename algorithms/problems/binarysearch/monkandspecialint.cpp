#include<iostream>
using namespace std;
int main()
{
int n;
long int x;
cin>>n>>x;
long int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	int y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int k=1,sum=0;
while(k<n)
{sum=sum + a[n-k];
	if(sum<=x)
	{
		k=k+1;
	}
	else
	{
		break;
	}

}

cout<<k-1<<endl;
	return 0;
}