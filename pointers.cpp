#include <iostream>
using namespace std;

 void swap(int& x, int& y)
 {
 	int temp;
 	temp = x;
 	x = y;
     y = temp;
 }
void swap1(int* x, int* y)

	{ int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
  int a =5, m =8;
   int *p = &a;
  int **b = &p;
  int ***c = &b;
  int ****f = &c;
  cout<<"address of integer "<<a<<" is = "<<p<<" address of p is = "<<b<<" address of b is = "<<c<<" address of c = "<<f<<endl;
  cout<<*p<<" = "<<**b<<" = "<<***c<<" = "<<****f<<" = "<<a<<" address of "<<****f<<" = "<<&a<<endl;
  cout<<"before swaping values of A = "<<a<<" ,M = "<<m<<endl;
  swap(a,m);
  cout<<"after swaping values of A = "<<a<<" ,M = "<<m<<endl;
   swap1(&a,&m);
  cout<<"after swaping values of A = "<<a<<" ,M = "<<m<<endl;

	return 0;
}