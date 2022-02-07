#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T>0)
{
int n;
cin>>n;
long int a[n];
int min;
    for(int i=0;i<n;i++)
  {
	cin>>a[i];

  }
   min=(a[0]&a[1])^(a[0] | a[1]);
   for(int i=0;i<n-1;i++)
  {
	for(int j=i+1;j<n;j++)
	{
		int x;
		x=(a[i]&a[j])^(a[i] | a[j]);
		if(x<min)
		{
			min=x;
		}
	}
  }
  cout<<min<<"\n";

	T=T-1;

}
	return 0;

}