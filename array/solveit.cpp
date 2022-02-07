#include<iostream>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t>0)
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
int max=0;
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
		int x;
		x=a[i]-a[j];
		if(x<0)
		{
			x=x*(-1);
			x=x+(j-i);
			if(x>max)
				max=x;
		}
		else
		{
			x=x+(j-i);
			if(x>max)
				max=x;
		}
	}
}
cout<<max<<"\n";
	t--;
}


	return 0;
}