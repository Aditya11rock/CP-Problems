#include<iostream>
using namespace std;
int main()
{int n,q,max,min,c,d,sum,e,x;
	cin>>n>>q;
	int a[n];
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ar[i]=a[i];
	}
	e=n;
	while(q>0)
	{
       int k;
       cin>>k;
       while(k>0)
       {max=0;
       	for(int i=0;i<e;i++)
       	{
       		if(ar[i]>max)
       		{
       			max=ar[i];
       			c=i;
       		}
       	}
       	min=ar[0];
       	d=0;
       	for(int i=1;i<e;i++)
   		{
   			if(ar[i]<min)
   			{
   				min=ar[i];
   				d=i;
   			}
   		}
   		x=max-min;
   		ar[d]=x;
   		 if(d!=e-1)
   		 {
   		 	for(int i=c;i<e-1;i++)
   		 	{
   		 		ar[i]=ar[i+1];
   		 	}
   		 	e=e-1;
   		 }
   		 else
   		 	e=e-1;
   		 k--;
       }
       sum=0;
       for(int i=0;i<e;i++)
       {
       	sum=sum+ar[i];
       }
       cout<<sum<<"\n";
       for(int i=0;i<n;i++)
       {
       	ar[i]=a[i];
       }
       e=n;
       q--;
	}


	return 0;
}