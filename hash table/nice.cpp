#include<iostream>
using namespace std;
int main()
{
int n,q;
cin>>n>>q;
int a[n+1];
for(int i=0;i<n+1;i++)
a[i]=0;

while(q>0)
{
	int b;
	cin>>b;
if(b==1)
{int c;
	cin>>c;
	a[c]=1;
}	
else
{int c,d=0;
	cin>>c;
	for(int i=c;i<n;i++)
	{
		if(a[i]==1)
		{
	      cout<<i<<"\n";
			d=d+1;
			break;
		}
	}
	if(d==0)
      cout<<"-1\n";
}
	q--;
}

	return 0;
}