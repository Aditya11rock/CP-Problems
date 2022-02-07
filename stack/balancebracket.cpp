#include<iostream>
#include<string.h>
using namespace std;

int main()
{
int n;
cin>>n;
char c;
cin.get(c);
while(n>0)
{
  string s;
 getline(cin,s);
 int b,e=0;
 b=s.size();
 char a[s.size()+1];
 strcpy(a,s.c_str());
 char d[s.size()];
 int front=-1;
 cout<<b<<"\n";

 for(int i=0;i<=b;i++)
 {
 	if(front==-1)
 	{
 		front=front + 1;
 		d[front]=a[i];
 	}
 	else if(a[i]=='(')
 	{
 		if(d[front]==')')
 			front=front - 1;
 		else
 		{
 			front=front + 1;
 			d[front]=a[i];
 		}
 	}
 	else if(a[i]==')')
 	{
 		if(d[front]=='(')
 			front=front - 1;
 		else
 		{
 			front=front + 1;
 			d[front]=a[i];
 		}
 	}
 	else if(a[i]=='[')
 	{
 		if(d[front]==']')
 			front=front - 1;
 		else
 		{
 			front=front + 1;
 			d[front]=a[i];
 		}
 	}
 	else if(a[i]==']')
 	{
 		if(d[front]=='[')
 			front=front - 1;
 		else
 		{
 			front=front + 1;
 			d[front]=a[i];
 		}
 	}
 	else if(a[i]=='{')
 	{
 		if(d[front]=='}')
 			front=front - 1;
 		else
 		{
 			front=front + 1;
 			d[front]=a[i];
 		}
 	}
 	else if(a[i]=='}')
 	{
 		if(d[front]=='{')
 			front=front - 1;
 		else
 		{
 			front=front + 1;
 			d[front]=a[i];
 		}
 	}
 
 }
 cout<<front;
 if(front==-1)
 	cout<<"YES\n";
 else
 	cout<<"NO\n";
 
 n--;
}

	return 0;
} 