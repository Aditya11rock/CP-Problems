#include <iostream>
using namespace std;
void prime(int (x) )
{int n , i;
	cout<<"enter no. to check prime :";
cin>>n;
for( i=2;i*i<n;i++)
{
	cout<<i<<" ";
	if(n%i==0)
{cout<<"not a prime"<<endl;
break;	}	
	}
if(i*i>=n)
{
	cout<<"it's a prime no."<<endl;
}	
}
	int main()
	{int x;
     prime(x);
     prime(x);
     prime(x);
     prime(x);

		return 0;
	}