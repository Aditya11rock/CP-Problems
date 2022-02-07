#include<iostream>
using namespace std;

int main()
{
int n,d,k;
cin>>n>>d>>k;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	int y;
	y=a[i];
	for(int j=i-1;y<a[j] && j>=0;j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int b=0;
while(k>0)
{
	
    d=d-a[n-1];
    a[n-1]=a[n-1]/2;
    int y;
    y=a[n-1];
    for(int i=n-2;y<a[i] && i>=0;i--)
    {
    	a[i+1]=a[i];
    	a[i]=y;
    }
   b=b+1;
   if(d<=0)
   	break;

k--;
}
if(d>0)
{
	cout<<"-1\n";
}
else
cout<<b<<"\n";


	return 0;
}