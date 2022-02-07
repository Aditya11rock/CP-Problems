#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];


for(int i=1;i<n;i++)
{
	int y;
	y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";

	return 0;
}