#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		string s;
		s="";
		while(t>1)
		{
			if(t%2==1)
			{
				s=s+"1";

			}
			else
			{
				s=s+"0";
			}
			t=t/2;
			
		}
		s=s+"1";
		int a=s.length();
		int b[a],c[a],d=1;
		cout<<s<<endl;
		for(int i=a-1;i>=0;i--)
		{
			if(i==a-1)
			{
				b[i]=1;
				c[i]=0;
			}
			else if(s[i]=='0')
			{
				b[i]=1;
				c[i]=1;
			}
			else
			{
				b[i]=0;
				c[i]=1;
			}
		}
	
		int e=0,f=0;
		for(int i=0;i<a;i++)
		{
			e=e + pow(2,i)*b[i];
			f=f + pow(2,i)*c[i];
		}

		cout<<e*f<<"\n";

	}


	return 0;
}