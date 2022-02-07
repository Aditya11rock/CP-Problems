#include <iostream>
using namespace std;

void pattern()
{
int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(2*n);j++)
			if((j<=i) || (j>(2*n)-i))
				cout<<"*";
			else
				cout<<" ";
			cout<<endl;}

	for(int i=1;i<=n;i++)
		{	for(int j=1;j<=(2*n);j++)
			if((j<=(n-i)+1 ) || (j>=n+i) )
				cout<<"*";
			else
				cout<<" ";

	cout<<endl;	}

	}

int main()
{
  pattern();
  pattern();
  pattern();
	return 0;
}

