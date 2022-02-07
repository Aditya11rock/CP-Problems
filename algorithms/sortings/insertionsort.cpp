#include<iostream>
using namespace std;

void insertsort(int b[],int c)
{int  g=0;
	for(int i=0;i<c;i++)
	{
		int y;
		y=b[i];
		for(int j=i-1;j>=0 && y<b[j];j--)
		{   g=g+1;
			b[j+1]=b[j];
			b[j]=y;
		}
	}
	cout<<g<<"\n";
}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
insertsort(a,n);
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<"\n";

	return 0;
}