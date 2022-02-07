#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

long int a[n],max=0,min,b=0,c=0;
for(int i=0;i<n;i++)
{
	cin>>a[i];
	if(a[i]>0)
	{
		max=max + a[i];
		c+=1;
	}
	else if(b==0)
	{
		min=a[i];
		b+=1;
	}
	else
	{
		if(min<a[i])
		{
			min=a[i];
		}
	}
}
if(max!=0)
{
	cout<<max<<" "<<c<<"\n";
}
else
{
	cout<<min<<" 1\n";
}

	return 0;
}