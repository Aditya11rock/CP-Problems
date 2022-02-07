#include<iostream>
using namespace std;
int check0(long int a[],int y,int size)
{int start=0,b=0;
	while(start<=size)
	{
		int mid;
		mid=(start + size)/2;
		if(a[mid]==y)
		{
			b=b + (size - mid +1);
			break ;
		}
		if(a[mid]<y)
		{
			start=mid + 1;
		}
		else if(a[mid]>y)
		{
		    if(a[mid -1]<y)
		    {
		      b=b +(size - mid);
		      break;    	
		    }	
		    else
		    {
		    	b=b +(size - mid +1);
                size=mid -1;
		    }
		}
	}

return b;
}
int check1(long int a[],int y,int size)
{
int start=0,b=0;
	while(start<=size)
	{
		int mid;
		mid=(start + size)/2;
		if(a[mid]==y)
		{
			b=b + (size - mid);
			break ;
		}
		if(a[mid]<y)
		{
			start=mid + 1;
		}
		else if(a[mid]>y)
		{
		    if(a[mid -1]<y)
		    {
		      b=b +(size - mid);
		      break;    	
		    }	
		    else
		    {
		    	b=b +(size - mid +1);
                size=mid -1;
		    }
		}
	}

return b;
}
int main()
{ios_base::sync_with_stdio(false);
	int n;
cin>>n;
long int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	int y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int q;
cin>>q;
while(q>0)
{int x;
	cin>>x;
	if(x==0)
	{int p;
		cin>>p;
		p=check0(a,p,n-1);
		cout<<p<<"\n";

	}
	else
	{
       int p;
		cin>>p;
		p=check1(a,p,n-1);
		cout<<p<<"\n";
	}

	q--;
}

	return 0;
}