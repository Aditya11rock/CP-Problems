#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t>0)
{int n;
	long int k;
	cin>>n>>k;
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		int y=b[i];
		for(int j=i-1;j>=0 && y<b[i];j--)
		{
			b[j+1]=b[j];
			b[j]=y;
		}
	}
	long int a[k*n];
	int p=1;
	for(int i=0;i<n;i++)
	{
       int l=b[i];
       for(int j=0;j<k;j++)
       {
          a[p]=l+j*l;
          int y=a[p];
          int m,d=0;
          for( m=p-1;m>=1 && y<a[m];m--)
          { 
            if(y<a[m])
          {	
          	a[m+1]=a[m];
          	a[m]=y;
           }
           else if(a[m]==y)  
 			{
 				break;
 			}

          }
        if(a[m]>y)
        {
        	p=p+1;
        }
        else if(a[m]==y)
        {
        	p=p;
        }

       }
	}

for(int i=1;i<=k*n;i++)
	{
        cout<<a[i]<<" ";

	}

cout<<a[k]<<"\n";


	t--;
}

	return 0;
}