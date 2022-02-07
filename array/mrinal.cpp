#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
    while(q>0)
    {int distinct=0;
    	int l,r,u=0,k=0;
    	cin>>l>>r;
       for(int i=l-1;i<=r-1;i++)
       {
       	  if(u==0)
       	  {
       	  	b[u]=a[i];
       	  	distinct=distinct + 1;
       	  	u=u+1;
       	  }
       	  else
       	  {
       	  	for(int j=0;j<u;j++)
       	  	{
                if(b[j]==a[i])
                {
                	k=k+1;
                	break;
                }
       	  	}
       	  	if(k==0)
       	  	{
       	  		distinct=distinct + 1;
       	  		b[u]=a[i];
                 u=u+1;
       	  	}
       	  	else
       	  		k=0;
       	  }
       }
       cout<<distinct<<"\n";
       

    	q--;
    }


	return 0;
}