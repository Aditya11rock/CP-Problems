#include<iostream>
using namespace std;
int main()
{
int n,s1=0,s2=0,d,p;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int b;
 b=n/2;
	for(int i=0;i<=b;i++)
	{
		s1=s1+a[i];
	}
	for(int i=b+1;i<n;i++)
	{
		s2=s2+a[i];
	}

	int c;
	c=s2-s1;
	if(c<0)
	{
		c=(-1)*c;
	}
d=b+1;
for(int k=d;k<n-1 && d<(n-1);k++)
{int s3=0,s4=0;
  for(int i=0;i<=d;i++)
	{
		s3=s3+a[i];

	}
	for(int i=d+1;i<n;i++)
	{
		s4=s4+a[i];

	}

	int f;
	f=s4-s3;
	if(f<0)
	{
		f=(-1)*f;
	}
	if(c>f)
	{
		s1=s3;
		s2=s4;
		d=d+1;
		c=f;
	}
	if(c<f)
	{
       break;
	}
}
d=b-1;
for(int i=d;i>0 && d>=0;i--)
{int s3=0,s4=0;
  for(int i=0;i<=d;i++)
	{
		s3=s3+a[i];
	}
	for(int i=d+1;i<n;i++)
	{
		s4=s4+a[i];
	}
	int f;
	f=s4-s3;
	if(f<0)
	{
		f=(-1)*f;
	}
	if(c>f)
	{
		s1=s3;
		s2=s4;
		d=d-1;
		c=f;
	}
	if(c<f)
	{
       break;
	}
}

p=s1*s2;
cout<<p<<"\n";
	return 0;
}