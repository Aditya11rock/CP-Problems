#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{long int d,a,m,b,x;
	cin>>d>>a>>m>>b>>x;
int k=0;
while(d<x)
{int c=m,p=0;
	while(c>0)
	{d=d+a;
		k+=1;
		if(d>=x)
		{  p+=1;
			break;
         }
		c--;
	}
	if(p==0)
	{k+=1;
      d=d+b;
	}

}
cout<<k<<endl;

	t--;
}

	return 0;
}