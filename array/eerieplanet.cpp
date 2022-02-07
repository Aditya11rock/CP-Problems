#include<iostream>
using namespace std;

bool check(int b[][3],int h,int t,int w)
{
   for(int i=0;i<w;i++)
   {
   	 if(b[i][1]<=t  && t<=b[i][2])
   	 {
   	 	if(h<=b[i][0])
   	 		return 0;
   	 }
   }
   return 1;
}

int main()
{
int h,c,q;
cin>>h>>c>>q;
int a[c][3];
for(int i=0;i<c;i++)
{
	cin>>a[i][0]>>a[i][1]>>a[i][2];
	if(a[i][2]>h)
	{
		a[i][2]=h;
	}
}
while(q>0)
{
	int h,t;
	cin>>h>>t;

	if(check(a,h,t,c))
		cout<<"YES\n";
	else
		cout<<"NO\n";


q--;
}


	return 0;
}