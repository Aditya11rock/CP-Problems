#include<iostream>
#include<array>
using namespace std;
template<class x>
x big(x a,x b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
	
}

int main()
{
cout<<big(2,3);
cout<<"\n"<<big(2.3,4.3);
cout<<"\n"<<big('a','z');
array<int , 5> box={};
for(int i=0;i<5;i++)
{
	cin>>box[i];
}
cout<<"\n";
for(int i=0;i<5;i++)
{
	cout<<box[i]<<" ";
}
array<char , 5> boss={};
for(int i=0;i<5;i++)
{
	cin>>boss[i];
}
cout<<"\n";
for(int i=0;i<5;i++)
{
	cout<<boss[i]<<" ";
}

	return 0;

}
