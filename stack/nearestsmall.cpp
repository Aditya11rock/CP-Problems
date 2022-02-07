#include<iostream>
using namespace std;
int main()
{
long int n;
cin>>n;
long int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n;i++)
{int b=0;
	for(int j=i-1;j>=0;j--)
	{
		if(a[j]<a[i])
		{
			cout<<a[j]<<" ";
			b=b+1;
			break;
		}
	}
	if(b==0)
	{
		cout<<"-1 ";
	}
}
cout<<"\n";


	return 0;
}