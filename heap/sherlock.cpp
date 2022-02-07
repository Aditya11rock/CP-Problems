#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
int t;
cin>>t;
while(t>0)
{
int n,k,sherlock=0,watson=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
char g;
cin.get(g);
string c;
cin>>c;
if(c=="HEADS")
{
	for(int i=1;i<=k && n>0;i++)
	{int l,max;
		max=a[0];
		l=0;
		for(int j=1;j<n && n>0;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
				l=j;
			}
		}
		if(a[l]>0)
		sherlock=sherlock + a[l];
         for(int j=l;j<n-1;j++)
         {
         	a[j]=a[j+1];
         }
         n=n-1;
	}
	for(int i=1;i<=k && n>0;i++)
	{int sum=0,l;
        for(int j=0;j<n && n>0;j++)
        {
        	int x,sumi=0;
        	x=a[j];
        	while(x!=0)
        	{
        		sumi=sumi + x%10;
        		x=x/10;
        	}
        	if(sumi>sum)
        	{
        		sum=sumi;
        		l=j;
        	}
        }
        if(a[l]>0)
        	watson=watson + a[l];
        for(int j=l;j<n-1;j++)
         {
         	a[j]=a[j+1];
         }
         n=n-1;
	}

}
else
{
	for(int i=1;i<=k && n>0;i++)
	{int sum=0,p;
        for(int j=0;j<n && n>0;j++)
        {
        	int x,sumi=0;
        	x=a[j];
        	while(x!=0)
        	{
        		sumi=sumi + x%10;
        		x=x/10;
        	}
        	if(sumi>sum)
        	{
        		sum=sumi;
        		p=j;

        	}
        }
        	watson=watson + a[p];
        for(int j=p;j<n-1;j++)
         {
         	a[j]=a[j+1];
         }
         n=n-1;
	}
	for(int i=1;i<=k && n>0;i++)
	{int l,max;
		max=a[0];
		l=0;
		for(int j=1;j<n && n>0;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
				l=j;
			}
		}
		if(a[l]>0)
		sherlock=sherlock + a[l];
         for(int j=l;j<n-1;j++)
         {
         	a[j]=a[j+1];
         }
         n=n-1;
	}

}
cout<<sherlock<<" "<<watson<<"\n";

	t--;
}


	return 0;
}