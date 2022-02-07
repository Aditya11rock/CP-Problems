#include<iostream>
using namespace std;
int main()
{
	int n,t,x;
	cin>>n>>t>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int y=a[i];
		for(int j=i-1;j>=0 && y<a[j];j--)
		{
			int x=a[j];
			a[j]=y;
			a[j+1]=x;

		}


	}
	if(a[n-1]+x>=t)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}



	return 0;
}