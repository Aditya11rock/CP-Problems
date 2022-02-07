#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
while(n>0)
{
	int x;
	scanf("%d",&x);
	if(x%21==0)
	{
		printf("The streak is broken!\n");
	}
	else
	{string s1=to_string(x);
		int z;
          z=s1.find("21");
          if(z>0)
          {
          	cout<<"The streak is broken!\n";
          }
          else
          {
          	cout<<"The streak lives still in our heart!\n";
          }
	}
	n--;
}

	return 0;
}