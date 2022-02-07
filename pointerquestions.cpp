#include <iostream>
using namespace std;


int main()
{ 
	int a = 25;
	int *p = &a;
	char ch = 'A', cp = 'D' , &cho = ch, &ca = cp ;
    
	cho = cho + a;
	*p = a + ch;
	ca = *p - 40;

	cout<<*p<<" "<<ch<<" "<<cp<<" "<<p<<" "<<&cho<<" "<<&ca;

	return 0;
}