#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
while(t>0)
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int d=1,e=0;
	while(d<=n)
	{
		if(d%a==0 || d%b==0 || d%c==0)
			e=e+1;
		d=d+1;
	}
	cout<<e<<"\n";
t--;
}

	return 0;
}