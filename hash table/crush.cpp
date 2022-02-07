#include<iostream>
using namespace std;

bool check(int b[],int c,int value)
{
int start=0;
if(b[start]==value)
  return 1;
do
{int mid;
	mid=(start + c)/2;
	if(b[mid]==value)
		return 1;
	else if(b[mid]<value)
	{
		start=mid + 1;
	}
	else if(b[mid]>value)
		c=mid - 1;
	/*else if(start==c)
	{
		if(b[start]==value)
			return 1;
		else 
			return 0;
	}*/

}while(start<=c);

return 0;
}

int main()
{
int t;
cin>>t;
while(t>0)
{
  int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
  {
	  cin>>a[i];
	   int y;
	   y=a[i];
	  for(int j=i-1;j>0 && y<a[j];j--)
	 {
		a[j+1]=a[j];
		a[j]=y;
	 }
  }	
	int q;
	cin>>q;
	while(q>0)
	{
		int l;
		cin>>l;
      if(check(a,n-1,l))
      	cout<<"YES\n";
      else
      	cout<<"NO\n";

		q--;
	}


	t--;
}

	return 0;
}