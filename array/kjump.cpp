#include<iostream>
using namespace std;

int jump(int k,int n,int a[])
{int max=0;
for(int i=0;i<n-1;i++)
{int b=1;
	int y;
	y=a[i];
	for(int j=i+1;j<n;j++)
       {
       	 if(a[j]-y>=k)
       	 {
       	 	b+=1;
       	 	y=a[j];
       	 }
       }
       if(b>max)
       {
       	max=b;
       }
}


	return max;
}

int main()
{
	int k,n;
	scanf("%d%d",&k,&n);
int a[n];
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
int x;
x=jump(k,n,a);
cout<<x<<"\n";


	return 0;

}