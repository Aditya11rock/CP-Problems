#include<iostream>
using namespace std;
int main()
{
	int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
   	cin>>a[i];

   int b=0;
   for(int i=0;i<n-2;i++)
   {
   	 for(int j=i+1;j<n-1;j++)
   	 {
   	 	for(int l=j+1;l<n;l++)
   	 	{
   	 		if((a[i]+a[j]+a[l])%k==0)
   	 			b=b+1;
   	 	}
   	 }
   }
   cout<<b<<"\n";

	return 0;
}