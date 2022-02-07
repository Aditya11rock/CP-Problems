#include<iostream>
using namespace std;

int main()
{

	int t;
	cin>>t;
	int a[5]={0,20,36,51,60};
	while(t--)
	{
		int n;
		cin>>n;


		if(n>4)
		{
			int a1=44*(int(n/4));
			int a2=4*(4-(n%4));
			int a3=a[n%4];
			cout<<int(a1+a2+a3)<<endl;
		}
		else{

			cout<<a[n]<<endl;
		}
		

	}

	return 0;
}