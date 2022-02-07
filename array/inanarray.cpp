#include<iostream>
using namespace std;
int main()
{
int n,k,x,y;
scanf("%d%d%d%d",&n,&k,&x,&y);
int a[n];
for(int i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
int b=0;
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if((a[i]+a[j])%k==x  && (a[i]*a[j])%k==y)
			b+=1;
	}
}
cout<<b<<"\n";

	return 0;
}