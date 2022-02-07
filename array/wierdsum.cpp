#include<iostream>
using namespace std;
int main()
{
int n,k,m;
cin>>n>>k>>m;
int arr[n],brr[n],crr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	brr[i]=arr[i];
	crr[i]=0;
}

for(int i=0;i<n-1;i++)
{
	for(int j=i;j<n;j++)
	{
		if(brr[j]<brr[i])
		{
			int min=brr[j];
			brr[j]=brr[i];
			brr[i]=min;
		}
	}
}


int t=n-1;
int d=0;
while(k>0)
{

for(int i=0;i<n;i++)
{
   if(arr[i]==brr[t])
   {
   	d=i;
   	break;
   }
}

crr[d]=arr[d];
arr[d]=0;
t--;
	k--;
}

int sum=0;
int e=1;
for(int i=0;i<n;i++)
{
	if(crr[i]!=0)
	{
		sum=sum +(crr[i]*(e%m));
		e=e+1;
	}
}

cout<<sum<<endl;
	return 0;
}