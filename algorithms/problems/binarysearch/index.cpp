#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][2];
for(int i=0;i<n;i++)
{
	cin>>a[i][0];
	a[i][1]=i;
}
for(int i=0;i<n;i++)
{
	int y=a[i][0],k=a[i][1];

     for(int j=i-1;j>=0 && y<a[j][0];j--)
     {
     	a[j+1][0]=a[j][0];
     	a[j+1][1]=a[j][1];
     	a[j][0]=y;
     	a[j][1]=k;
     }

}
for(int i=0;i<n;i++)
{
	cout<<a[i][1]<<" ";
}
cout<<"\n";

	return 0;
}