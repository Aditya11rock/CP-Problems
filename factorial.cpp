#include <iostream>
using namespace std;
int main()
{int n,a;
	cout<<"enter no. for factorial:";
	cin>>n;
   a=1;
   for(int i=1;i<=n;i++)
   {
   	a*=i;
   }
cout<<a;
	return 0;
}