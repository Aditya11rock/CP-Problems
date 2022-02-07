#include<iostream>
using namespace std;
int search(int c[][2],int y,int size)
{
int b=1,start=1;
while(c[b][1]<y)
{
	int mid;
	mid=((start)+(size))/2;
	if(c[mid][1]==y)
	{
		return mid;
	}
	else if(c[mid][1]<y)
	{
		start=mid + 1;
	}
	else if(c[mid][1]>y)
	{
		if(c[mid - 1][1]<y)
		{
			return mid;
		}
		else 
		{
			size=mid -1;
		}
	}
}

	return b;
}
int main()
{
	int n,q;
	cin>>n>>q;
int a[n+1][2];
for(int i=1;i<=n;i++)
{
	cin>>a[i][0];
	if(i==1)
	{
		a[i][1]=a[i][0];
	}
	else
	{
		a[i][1]=a[i-1][1]+a[i][0];
	}
}
while(q>0)
{
	int x;
	cin>>x;
	x=search(a,x,n+1);
	cout<<x<<endl;
	q--;
}


	return 0;
}