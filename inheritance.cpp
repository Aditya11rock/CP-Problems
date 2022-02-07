#include <iostream>
#include<string>
using namespace std;
class school
{public:
	string name;
	string location;
	
  school()
  {name = "St. Francis Xavier's high school";
  location ="Naigaon";
  cout<<"school name is : "<<name<<"\nlocation is : "<<location<<endl;
  int x = 5; 
}



};
class students : public school
{  string name;
   int roll;
public :
students()
{name = "aditya";
	cout<<"name is : "<<name<<"\n"<<"roll no is : "<<roll<<endl;
}};
class division : public students 
{
public :	
	string month;
	int year;
  division()
  { month = "january";
  	year = 2019;

    cout<<"month is : "<<month<<"\n"<<"year is : "<<year<<endl;}};
int main()
{int x;
   division div;
   cout<<x<<endl;
	return 0;
}