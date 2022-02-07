#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0, k=0, l=(n-i) ,m=n;i<=n;i++, k=0, l=(n-i)+1, m=n )
  {
  for(int j=1;j<=n;j++)
  	if(j<=n-i)
  		cout<<" ";
  	else if(j==n+1)
  		cout<<"0";
else
  	while(k!=i)
  		{cout<<l;
  	    k++;
  	    l++;}
  for(int k=0;k<=i;k++)
  if(k==0)
  cout<<"0";
else
  while(k!=i+1)
  {cout<<m;
   m--;
     k++;}
  cout<<endl; 


  }


	return 0;
}