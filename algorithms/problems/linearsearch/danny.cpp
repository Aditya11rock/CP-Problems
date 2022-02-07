#include<iostream>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	int y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int z=(n*(n+1))/2;
int b[z];
int p=0;
for(int i=0;i<n-1;i++)
{
  for(int j=i+1;j<n;j++)
  {
    b[p]=a[j]-a[i];
    int y=b[p];
	for(int l=p-1;l>=0 && y<b[l];l--)
	{
		b[l+1]=b[l];
		b[l]=y;
	}
    p=p+1;

  }
}

cout<<b[k-1]<<endl;
	return 0;
}