#include<iostream>
using namespace std;
bool check(int b[],int c,int x)
{
	for(int i=0;i<c-1;i++)
	{
		for(int j=i+1;j<c;j++)
		{
			if(x==b[i]+b[j])
			return 1;
		}
	}
	return 0;
}
int main()
{
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
if(check(a,n,k))
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";

	return 0;
}