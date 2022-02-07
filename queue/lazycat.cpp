#include<iostream>
using namespace std;

void fib(int n)
{
	if(n==0 || n==1)
	{
		cout<<"YES"<<endl;
	}
	else{

		int a=0,b=1;
		int ans=0;
		while(ans<n)
		{
			ans=a+b;
			a=b;
			b=ans;
		}
		if(ans==n)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}


}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		fib(n);

	}

	return 0;
}