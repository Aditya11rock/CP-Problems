#include<iostream>
using namespace std;
int main()
{int *p;
	p=(int *)malloc(4);//it creats a block of void type so it needs to be casted in particular to use it. 
	*p=24;
	cout<<*p<<endl;
	free(p);
cout<<*p<<endl;
float *q,*z;
q=(float *)calloc(5,4);
*(q+0)=21.23;
*(q+1)=34.46;
*(q+2)=45.34;
*(q+3)=75.36;
*(q+4)=43.57;
for(int i=0;*(q+i)!='\0';i++)
{
	cout<<*(q+i)<<endl;
}

z=(float *)realloc(q,8);
*(z+5)=98.34;
*(z+6)=532.30;
for(int i=0;*(z+i)!='\0';i++)
{
	cout<<*(z+i)<<endl;
}
	return 0;
}