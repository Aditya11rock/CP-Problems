#include <iostream>
using namespace std;

void pascal(int n)
{
	for(int i=1;i<=n;i++)
	{int x=1;
		for(int j=1;j<=i;j++)
		{
			cout<<x<<" ";
			x = x*(i-j)/j;
		}
        cout<<endl;
    }
}

int main()
{ int n;
   cin>>n;
   pascal(n);

	return 0;
}