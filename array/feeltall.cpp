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
int q;
cin>>q;
while(q>0)
{int count,b,l,r;
	cin>>l>>r;
	b=0;
	count=0;
	for(int i=l;i<=r;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
			count=count + 1;
		}
	}
	cout<<count<<"\n";



	q--;
}


	return 0;
}