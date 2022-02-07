#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{
	int n;
	cin>>n;
	long int a[n+1];
	for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }
  int win=0,index;
  for(int i=1;i<=n;i++)
  {
  	int x=0;
  	for(int j=i-1;j>0;j--)
  	{
  		if(a[j]>=a[i])
  		{
  			x=x+1;
  			break;
  		}
  		else
  		{
  			x=x+1;
  		}
  	}
  	for(int j=i+1;j<=n;j++)
  	{
  	    if(a[j]>=a[i])
  		{
  			x=x+1;
  			break;
  		}
  		else
  		{
  			x=x+1;
  		}	
  	}
    int y;
    y=x*i;
    if(y>win)
    {
	  win=y;
	  index=i;
    }

 }
 cout<<index<<"\n";
		t--;
}

	return 0;
}