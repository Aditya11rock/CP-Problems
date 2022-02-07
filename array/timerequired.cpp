#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
	int n,k,min;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	if(min>=k)
		cout<<"0\n";
    else
    	cout<<k-min<<"\n";
    t--;
}


	return 0;
}