#include<iostream>
using namespace std;

class para
{
public:
	int top;
	char a[25];

para()
{
	top = -1;

}	
void enqueue(char b)
{
	if(top==-1)
	{
		top=top+1;
		a[top]=b;
		cout<<"a";
	}
	else if(a[top]!=b)
	{
		top=top+1;
		a[top]=b;
	}
	else if(a[top]==b)
	{
		top=top-1;
	}

}
};
int main()
{
  para p1;
  while(1)
  {
  	char c;
  	cin>>c;
  	cout<<c;
  switch(c)
  {
  	case '(': p1.enqueue(c);
  	          break;
  	case ')': p1.enqueue(c);
  	          break;
  	default : 
  	           exit(0);                   
  }

  }
  cout<<p1.top;

}