#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int k;
cin>>k;
while(k>0)
{
int l,r,b=0,max=0;
cin>>l>>r;
for(int i=l;i<=r;i++)
{
	if(a[i]>max)
	{
		max=a[i];
		b=b+1;
	}
}
cout<<b<<"\n";

	k--;
}


	return 0;
}