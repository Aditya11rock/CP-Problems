#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n][2];
for(int i=0;i<n;i++)
{
	cin>>a[i][0]>>a[i][1];
}
int k;
cin>>k;
int b=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if((a[i][0]-a[j][0])+(a[i][1]-a[j][1])==k)
			b=b+1;
	}
}
cout<<b<<"\n";

	return 0;
}