#include<iostream>
using namespace std;

int kadeans(int b[],int c)
{
int cmax,gmax;
cmax=b[0];
gmax=b[0];
for(int i=1;i<c;i++)
{
  if(b[i]>=(b[i]+cmax))
  {
  	cmax=b[i];
  	if(cmax>gmax)
  	{
  		gmax=cmax;
  	}
  }
  else
  {
  	cmax=cmax +b[i];
  	if(cmax>gmax)
  	{
  		gmax=cmax;
  	}
  }

}


	return gmax;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
cout<<kadeans(a,n)<<"\n";


	return 0;
}