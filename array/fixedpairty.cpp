#include<iostream>
using namespace std;

int main()
{int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
int q;
cin>>q;
while(q>0)
{
	int w,x,y,z;
	cin>>w>>x>>y>>z;
	if((a[w-1]+b[x-1])%2==(a[y-1]+b[z-1])%2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	q--;
}

	return 0;
}