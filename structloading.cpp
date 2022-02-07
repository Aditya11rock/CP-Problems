#include<iostream>
#include<string>
using namespace std;

struct book
{
	string title;
	float price;
};
struct author
{
	string name;
	int date;
	
};
struct info
{
  struct book b1;
  struct author a1;
};

int main()
{info i1;
i1.b1.title="the last lecture";
i1.b1.price=150.00;
i1.a1.name="randy pausch";
i1.a1.date=1950;
cout<<i1.b1.title<<endl;
cout<<i1.b1.price<<endl;
cout<<i1.a1.name<<endl;
cout<<i1.a1.date<<endl;
	return 0;
}