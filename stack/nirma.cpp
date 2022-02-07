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
int a[n];
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
int max=0;
max=a[0]|a[1];
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{int m1,m2;
		m1=a[i];
		m2=a[i+1];
		for(int k=i+2;k<=j;k++)
		{
			if((a[k]<m1) || (a[k]<m2))
			{
				if(a[k]<m1)
					m1=a[k];
				else
					m2=a[k];
			}
		}

  		int x;
  		x=m1 | m2;
  		if(x>max)
  		{
  			max=x;
  		}	


	}
}
cout<<max<<"\n";

	t--;
}


	return 0;

}