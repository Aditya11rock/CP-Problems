#include<iostream>
using namespace std;

bool great(int x,int y,int z,int q[])
{
	for(int i=y;i<z;i++)
	{
		if(q[i]>x)
			return 0;
	}
	return 1;
}
bool doublecheck(int p[],int w)
{
	for(int i=0;i<w;i++)
	{
		if(p[i]!=i+1)
			return 0;
	}
	return 1;
}

int check(int a[],int b)
{int c=0,l;
while(1)
{
	for(int i=0;i<b;i++)
	{
		if(a[i]>i+1)
		{
			if(great(a[i],i+1,b,a))
			{l=a[i];
				for(int j=i;j<b-1;j++)
				{
					a[i]=a[i+1];
				}
				a[b-1]=l;
                c=c+1;
			}
           else if(!great(a[i],0,i,a))
           {l=a[i];
            for(int j=i;j>0;j--)
            {
            	a[j]=a[j-1];
            }
            a[0]=l;
            c=c+1;
           }
		}
		else if(a[i]<i+1)
		{
			l=a[i];
            for(int j=i;j>0;j--)
            {
            	a[j]=a[j-1];
            }
            a[0]=l;
            c=c+1;
		}
	}

  if(doublecheck(a,b))
  {
  	return c;
  }
}

return c;
}

int main()
{ int z;
	int n;
	cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
} 

z=check(arr,n);
cout<<z;

	return 0;
}