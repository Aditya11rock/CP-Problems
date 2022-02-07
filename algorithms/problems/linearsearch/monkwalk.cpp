#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
char d;
cin.get(d);
while(t>0)
{
string s1;
getline(cin,s1);
int c,b=0;
c=strlen(s1.c_str());
for(int i=0;i<c;i++)
{
	if((s1[i]=='A')||(s1[i]=='a')||(s1[i]=='E')||(s1[i]=='e')||(s1[i]=='I')||(s1[i]=='i')||(s1[i]=='O')||(s1[i]=='o')||(s1[i]=='U')||(s1[i]=='u'))
		b+=1;
}
cout<<b<<"\n";
	t--;
}


return 0;
}