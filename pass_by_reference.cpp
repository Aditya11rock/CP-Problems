#include <iostream>
using namespace std;
int square(int &n)
{
	n=n*n;
	return n;
}
int ball(int &n)
{int a;
	a=10;
n=a+n;
return n;
}



int main()
{int n;
	cin>>n;
	cout<<square(n)<<endl;
  cout<<n<<"\n";
  cout<<ball(n)<<"\n";
  cout<<n;
return 0;
}