#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	int y=a[i];
	for(int j=i-1;j>=0 && y<a[i];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int m;
cin>>m;
int c[m];
for(int i=0;i<m;i++)
{
	cin>>c[i];
	int y=c[i];
	for(int j=i-1;j>=0 && y<c[i];j--)
	{
		c[j+1]=c[j];
		c[j]=y;
	}
}
int b[m];
int rear=0,count=0,count2=0,w=1;
while(w<=100 && w<=c[m-1] && count2<m)
   {int x;
   	x=a[count]+w;
 if(count<n)
 {
 	while(count2<m)
 	{
 		if(x<c[count2])
 		{
 			w+=1;
 			break;
 		}
 		if(x==c[count2])
 		{
 			b[rear]=w;
 			rear+=1;
 			count=count +1;
 			count2=count2 + 1;
 			w+=1;
 			break;
 		}
 		else
 			count2=count2 +1;
 	}

 }
else
{
	while(count2<m)
	{
		if(w<c[count2])
 		{
 			w+=1;
 			break;
 		}
 		else if(w==c[count2])
 		{
           b[rear]=w;
           rear=rear + 1;
           w=w+1;
           count2=count2 + 1;
           break;
 		}
 		else
            count2=count2 + 1;
	}

  }
}
for(int i=0;i<rear;i++)
cout<<b[i]<<" ";
cout<<"\n";
	return 0;
   	
}