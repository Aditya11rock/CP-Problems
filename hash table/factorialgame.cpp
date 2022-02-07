#include<iostream>
using namespace std;
int fact(int a)
{
	if(a==0 || a==1)
		return 1;
	else
		return a*fact(a-1);
}
int main()
{
int q;
cin>>q;
while(q>0)
{
int n;
cin>>n;
n=fact(n);
cout<<n<<"\n";
	q--;
}

	return 0;
}