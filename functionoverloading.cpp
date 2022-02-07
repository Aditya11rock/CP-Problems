#include <iostream>
using namespace std;
void gold()
{
	cout<<"only gold is running"<<endl;
}
void gold(int a)
{
 cout<<"gold with int "<<a<<" is running"<<endl;
}
void gold(char a)
{
	cout<<"char "<<a<<" gold is running"<<endl;
}
void gold(int a, char b)
{
	cout<<"int and char gold is running"<<endl;
}
void gold(char b,int a)
{
	cout<<"char and int gold is running"<<endl;
}
void gold(int a,int b) 
{
	cout<<"double int gold is running"<<endl;
}
int main()
{  char a;
	gold();
	gold(4);
	return 0;
}