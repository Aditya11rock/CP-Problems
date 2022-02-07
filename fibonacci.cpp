#include <iostream>
using namespace std;
int fibonacci()
{int n, a, b, ans;
	cout<<"enter no. of fibonacci term : ";
	cin>>n;
   a=1 ,b=1 ;
   cout<<b<<" "<<a<<" ";
   for( int i=2;i<=n;i++)
   {
   	a=a+b;
   b=a-b;	
   	cout<<a<<" ";
   }
cout<<endl;
   return 0;
}
int main()
{
	fibonacci();
	fibonacci();
	fibonacci();

	return 0;
}