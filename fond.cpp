#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n;
  	cin>>n;
  	int c=1,d=n;

  	int a[n];
  	for(int i=0;i<n;i++)
  	{
  		if(i%2==0)
  		{
  			a[i]=c;
  			c++;
  		}
  		else{

  			a[i]=d;
  			d--;
  		}

  	}
  	int sum=0;
  	for(int i=0;i<n-1;i++)
  	{

  		int l=a[i+1]-a[i];
  		if(l<=0)
  		{
  			l=l*(-1);

  		}
  		sum=sum + l;

  	}


  		cout<<sum<<endl;

  }

	
	return 0;
}