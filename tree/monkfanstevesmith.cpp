#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
while(k>0)
{
	int max=0,c=0;
	for(int i=0;i<n;i++)
	{
      if(a[i]>max)
      {
      	max=a[i];
      	c=i;
      }
	}
	if(a[c]!=0)
	{
		cout<<c+1<<"\n";
		a[c]=a[c]-1;
	}
   

	k--;
	
}

	return 0;
}