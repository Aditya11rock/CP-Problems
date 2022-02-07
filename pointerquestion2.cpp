#include <iostream>
using namespace std;
int main()
{
	int sad[5];
	int *p = sad;
	*p = 9;
	p = (sad + 1);
	*p = 11;
	p = sad;
	p = (sad + 2);
	*p = 12;
	p = (sad + 3);
	*p = 15;
	p = sad;
	p = (sad + 4);
	*p = 20;
	for(int i=0; i<5;i++)
		{cout<<sad[i]<<" , ";}
	cout<<endl;
	return 0;
}