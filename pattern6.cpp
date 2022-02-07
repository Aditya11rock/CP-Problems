#include <iostream>
using namespace std;
void rhombus()
{
	int n;
	cout<<"enter no. of rows:";
	cin>>n;
  for(int i=1 , k=1;i<=n;i++, k=1)
  {
  	while( k<(n-i)+1 )
  	{	cout<<" ";
  	k++;}
  	for(int j=1;j<=(2*i)-1;j++)
  		if(j==1  || j==i || j==(2*i)-1 || i==n)
  			cout<<"*";
  		else
  			cout<<" ";
  		cout<<endl;}
for(int i=1, k=1;i<=n;i++, k=1)
  { 
  	for(int j=1;j<=(2*n)-1;j++)
  		if( j==i || j==(2*n)-i || j==n)
  			cout<<"*";
  		else
  			cout<<" ";
  cout<<endl;}

}
int main()
{
	rhombus();
	rhombus();
	rhombus();

	return 0;
}