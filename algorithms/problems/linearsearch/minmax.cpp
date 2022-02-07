#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
long int a[n],min=0,max=0;
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	int y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
for(int i=1;i<n-1;i++)
{
	min=min + a[i];
	max=max + a[i];
}
min=min + a[0];
max=max + a[n-1];
printf("%d %d\n",min,max);

	return 0;
}