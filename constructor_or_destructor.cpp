#include <iostream>
#include<string>
using namespace std;
class students
{
public:
	string name;
	int id;
	int marks;
	students()
	{
		cout<<"name is : "<<name<<"\n"<<"id is : "<<id<<"\n"<<"marks is : "<<marks<<endl;
	}
	students(string sname,int sid)
	{
	    name = sname;
		id = sid;
		marks =25;
		cout<<"name is : "<<name<<"\n"<<"id is : "<<id<<"\n"<<"marks is : "<<marks<<endl;
	}
	students( const students &p)
	{
		 name = p.name;
		id = p.id + 12;
		marks =25 + 25;
		cout<<"name is : "<<name<<"\n"<<"id is : "<<id<<"\n"<<"marks is : "<<marks<<endl;
	}
	~students()
	{
		cout<<"destructing : "<<id<<" "<<marks<<endl;
	}

};

int main()
{
    students s1;
   students s2("aditya" ,12);
     students s3=s2;

	return 0;
}