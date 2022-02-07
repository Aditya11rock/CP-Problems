#include<iostream>
using namespace std;


int main()
{
int t;
scanf("%d",&t);
while(t>0)
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b=0,l=0;
 for(int i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 	if(i==0)
 	{
 		b+=1;
 		l=a[i];
 	}
 	else if(a[i]<=l)
 	{
 		b+=1;
 		l=a[i];
 	}

 }
cout<<b<<"\n";

	t--;
}

	return 0;
}