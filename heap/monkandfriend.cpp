#include<iostream>
using namespace std;
int main()
{
int c,p,n;
cin>>c>>p>>n;
int a[c+1][3];
int b;
for(int i=1;i<=n;i++)
{
	cin>>a[i][0];
	a[i][1]=0;
	a[i][2]=1;
	b=i;
}
for(int i=b+1;i<c+1;i++)
 {
 	a[i][0]=0;
 	a[i][1]=0;
 	a[i][2]=0;
 }
 while(p>0)
 {
 	int k;
 	cin>>k;
 	int x;
 	x=a[1][2]*(a[1][0]+a[1][1]);
    int y=1;
    for(int i=2;i<c+1;i++)
    {int t;
    	t=(a[i][2])*(a[i][0]+a[i][1]);
    	if(t<x)
    	{
    		x=t;
    		y=i;
    	}

    }
    if(a[y][0]==0)
    {
    	a[y][2]=a[y][2]+1;
    	a[y][0]=k;
    }
   else if(a[y][1]==0)
    {
    	a[y][2]=a[y][2]+1;
    	a[y][1]=k;
    }
    else
    {
    	a[y][2]=a[y][2]+1;
    	a[y][0]=a[y][1];
    	a[y][1]=k;
    }

cout<<y<<" ";

 	p--;
 }
 cout<<"\n";

	return 0;
}