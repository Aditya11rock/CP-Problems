#include<iostream>
using namespace std;
int main()
{
int n,a=0,e=0,i=0,o=0,u=0;
cin>>n;
char t[n];
char q;
q=cin.get();
cin.getline(t,n+1);

for(int j=0;j<n;j++)
{
	if(t[j]=='a')
		a=1;
	else if(t[j]=='e')
		e=1;
	else if(t[j]=='i')
		i=1;
	else if(t[j]=='o')
		o=1;
	else if(t[j]=='u')
		u=1;
}
if((a==1)&&(e==1)&&(i==1)&&(o==1)&&(u==1))
	cout<<"YES\n";
else
	cout<<"NO\n";
return 0;
}