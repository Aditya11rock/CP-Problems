#include <iostream>
using namespace std;
int main()
{ int n;
	cout<<"enter no. of rows :";
	cin>>n;
for(int i=0, k=0, x=1 ;i<=n;i++, k=0 ,x=1)
{ while(k!=n-i)
	{cout<<" ";
	k++;}
for(int j=0;j<=i;j++)
	
if((j==0)  || (j==i))
	{cout<<"1"<<" ";}
else
	{x=x*(i-j+1)/j;
		cout<<x<<" ";}
cout<<endl;}



	return 0;
}