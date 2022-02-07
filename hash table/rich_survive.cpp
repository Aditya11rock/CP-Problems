#include<iostream>
using namespace std;

bool kil(int ab[],int c)
{int b=1;
	for(int i=0;i<c;i++)
	{
        if(b%6!=0)
        {int min=i;
        	for(int j=0;j<c-b+1;j++)
        	{
                if(ab[j]<ab[min])
                {
                	min=j;
                }
        	}
        	if(ab[min]==0)
        	{
        		cout<<"Goodbye Rick\n";
        		cout<<b-1;
        		return 0;
        	}
        	for(int j=min;j<c-b;j++)
        	{
                ab[j]=ab[j+1];
        	}
        	for(int j=0;j<c-b;j++)
        	{
        		ab[j]=ab[j]-1;
        	}
        	b=b+1;

        } 
      else if(b%6==0)
        {int min=i;
        	for(int j=0;j<c-b+1;j++)
        	{
                if(ab[j]<ab[min])
                {
                	min=j;
                }
        	}
        	if(ab[min]==0)
        	{

        		cout<<"Good bye Rick\n";
        		cout<<b-1;
        		return 0;
        	}
        	for(int j=min;j<c-b;j++)
        	{
                ab[j]=ab[j+1];
        	}
        	for(int j=0;j<c-b;j++)
        	{
        		ab[j]=ab[j]-2;
        	}
        	b=b+1;

        }

	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(kil(a,n))
		{
			cout<<"Rick now go and save Carl and Judas\n";
		}

		t--;

	}
}