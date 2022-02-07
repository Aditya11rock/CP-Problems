#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
      int n,k,max=0;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)
      {
      	cin>>a[i];
      	int y;
      	y=a[i];
      	for(int j=i-1;j>=0 && y<a[j];j--)
      	{
      		a[j+1]=a[j];
      		a[j]=y;
      	}
      }
      while(k>0)
      {
        max=max+a[n-1];
        a[n-1]=a[n-1]/2;
        int y;
        y=a[n-1];
      for(int j=n-2;j>=0 && y<a[j];j--)
      	{
      		a[j+1]=a[j];
      		a[j]=y;
      	}

      	k--;
      }
      cout<<max<<"\n";

		t--;
	}

	return 0;
}