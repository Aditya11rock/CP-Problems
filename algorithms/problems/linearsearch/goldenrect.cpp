#include<iostream>
using namespace std;
int main()
{
int t,b=0;
cin>>t;
while(t>0)
{
 float w,h;
cin>>w>>h;
float f;
f=(w/h);
cout<<f<<endl;
if(f>=1.6 && f<=1.7)
{
	b=b+1;
}

	t--;
}
cout<<b<<endl;
	return 0;
}