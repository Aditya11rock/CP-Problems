#include <iostream>
using namespace std;
int power( int a,int b)
{int ans=1;
	cin>>a>>b;
for(int i=1;i<=b;i++)
{
  ans=ans*a;
}

	return ans;
}
int main()
{
	int a,b;

cout<<power(a,b)<<endl;
cout<<power(a,b)<<endl;
cout<<power(a,b)<<endl;

	return 0;
}