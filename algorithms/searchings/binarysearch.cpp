#include<iostream>
using namespace std;

void search(int c[],int d,int value)
{
  int start=0;
  while(start<=d)
  {int mid;
  	mid=(start + d)/2;
  	if(c[mid]==value)
  	{
  		cout<<"Present at index = "<<mid<<"\n";
  		break;
  	}
  	else if(c[mid]<value)
        start=mid + 1;
    else if(c[mid]>value)
    	d=mid - 1;

  }
  if(start>d)
  {
  	cout<<"Not Present\n";
  }
}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	int y;
	y=a[i];
	for(int j=i-1;j>=0 && y<a[j];j--)
	{
		a[j+1]=a[j];
		a[j]=y;
	}
}
int q;
cin>>q;
while(q>0)
{int b;
   cin>>b;
search(a,n-1,b);
q--;
}

	return 0;
}