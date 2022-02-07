#include<iostream>
using namespace std;

int fibo(int n)
{int c;
	if(n==0)
	return 0;
   else if(n==1)
   	return 1;
   else
   	{c=fibo(n-1)+fibo(n-2);
   	return c;}
}

int main()
{
	int n;
	cout<<"enter no. of fibonacci terms to printed.\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<fibo(i)<<"   ";
	}

}