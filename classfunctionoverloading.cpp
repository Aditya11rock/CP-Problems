#include <iostream>
#include <string>
using namespace std;
class students
{public:
	string name;
	int roll;

	void id()
	{
		cin>>name;
		cin>>roll;
		cout<<name<<endl<<roll<<endl;
	}
	void id(int a)
	{
		cin>>name;
		cin>>roll;
		cout<<name<<endl<<roll<<endl;
	}
	void id(char a)
	{
		cin>>name;
		cin>>roll;
		cout<<name<<endl<<roll<<endl;
	}
  

};

int main()
{char a;
	students students1;
	students1.id(4);
	students1.id(a);
     students1.id();
	return 0;
}