#include<iostream>
using namespace std;

int fact(int n)
{int s;
	if(n==1)
	return n;

   s=n*fact(n-1);
   return s;
}

int main()
{
	int n;
	cout<<"enter a no. whose factorial is to be found \n";
	cin>>n;
	cout<<"factorial of given no. "<<n<<"! = "<<fact(n);
}