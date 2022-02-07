#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m+1];
	for(int i=0;i<m+1;i++)
	{
		a[i]=0;
	}
while(n>0)
{
	int i;
	cin>>i;
	a[i]=a[i]+1;
	int max,c;
	max=a[0];
	c=0;
	for(i=1;i<m+1;i++)
	{
		if(a[i]>=max)
		{
           max=a[i];
           c=i;
		}
	}
	cout<<c<<" "<<max<<"\n";
	n--;
}

	return 0;

}