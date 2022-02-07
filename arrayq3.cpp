#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T>=1)
{	int N;
	cin>>N;
	int p,q,r;
	cin>>p>>q>>r;
	int a=0,b=0;
	for(int i=1;i<=N;i++)
	{
		if(i%p==0 && i%q!=0 && i%r!=0)
		{
			a++;
		}
		if(i%p!=0 && i%q==0 && i%r!=0)
		{
			a++;
		}
		if(i%p!=0 && i%q!=0 && i%r==0)
		{
			a++;
		}
		
	}
  T--;	
cout<<a<<endl;
}

	return 0;
}