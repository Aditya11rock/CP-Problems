#include <iostream>
using namespace std;
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{int a=5,b=10;
cout<<"Before swaping values of A = "<<a<<", B = "<<b<<endl;
swap(a,b);
cout<<"After swaping values of A = "<<a<<", B = "<<b<<endl;
	return 0;
}