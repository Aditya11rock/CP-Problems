#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
long int a[n+1];
int q=1;
while(q<=n)
{int y;
	cin>>a[q];
	y=a[q];
	for(int i=q-1;i>0 && y<a[i];i--)
	{
		a[i+1]=a[i];
		a[i]=y;
	}
	if(q%2!=0)
	{
		cout<<a[(q+1)/2]<<"\n";
	}
	else
	{
		int x;
		x=(a[(q+1)/2]+a[((q+1)/2)+1])/2;
		cout<<x<<"\n";
	}
	q=q+1;

}

	return 0;
}