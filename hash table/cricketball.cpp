#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
      while(t>0)
      {
      	int n;
      	cin>>n;
      	int a[n];
      	for(int i=0;i<n;i++)
      	{
      		cin>>a[i];
      	}
      	int k;
      	cin>>k;
      	int l=0;
      	for(int i=0;i<n-1;i++)
      	{
      		for(int j=i;j<n;j++)
      		{
      			if((a[i]+a[j])==k)
      			{
      				l=l+1;
      			}
      		}
      	}
      	cout<<l<<"\n";
      	t--;
      }



	return 0;
}