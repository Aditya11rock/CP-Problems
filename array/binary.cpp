#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int n,q;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
while(q>0)
{
	int b;
	cin>>b;
	if(b==0)
	{int l,r,c=0;
		cin>>l>>r;
		
		if(a[r-1]==0)
		{
			cout<<"EVEN\n";

		}
		else
			{
			cout<<"ODD\n";
		}

	}
	else if(b==1)
	{
		int x;
		cin>>x;
		if(a[x-1]==1)
		{
			a[x-1]=0;
		}
		else
			a[x-1]=1;
	}

	
q--;

}


	return 0;
}