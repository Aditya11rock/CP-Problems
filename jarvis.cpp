#include <iostream>
using namespace std;
bool check(int game[],int a)
{
	for(int i=0;i<a;i++)
	{
		if(game[i]==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{int T;
	cin>>T;
	while(T>0)
{		
int n;
cin>>n;
int arr[n][n]={};
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>arr[i][j];
	}
}
int fun[]={};
int l=0;
for(int i=0;i<n;i++)
{
	for(int j=0;j<(n-1)/2;j++)
	{
		if(arr[i][j]!=arr[i][n-j-1])
		{
			fun[l]=0;
			l++;
			break;
		}
	}
}
for(int i=0;i<(n-1)/2;i++)
{
	for(int j=0;j<n;j++)
	{
		if(arr[i][j]!=arr[n-i-1][j])
		{

			fun[l]=0;
			l++;
			break;
		}
	}
}
if(check(fun,l))
{
	cout<<"YES\n";
}
else
{
	cout<<"NO\n";
}
T--;
}
	return 0;

}