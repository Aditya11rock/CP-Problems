#include <iostream>
#include <string>
using namespace std;
class Laptop
{
public:
 string name;
 string brand;
 float price;
 string processor;

 void getdata()
 {
 	cin>>name;
 	cin>>brand;
 	cin>>price;
 	cin>>processor;
 } 

 void showdata()
 {
 	cout<<name<<endl<<brand<<endl<<price<<endl<<processor<<endl;
 }
 void startup()
 {
 	cout<<name<<" "<<brand<<" "<<"windows has started"<<endl;
 }
void shutdown()
{
	cout<<name<<" "<<brand<<" "<<"windows is shutting down"<<endl;
}
};
class pizza
{
	string name;
	string test;
	string ingredient;
	int price;
public:
	void getdata()
	{
		cin>>name;
		cin>>test;
		cin>>ingredient;
		cin>>price;
	}
	void showdata()
	{
		cout<<name<<" "<<test<<" "<<ingredient<<" "<<price<<endl;
	}
};


int main()
{ Laptop Laptop1;
	Laptop1.getdata();
	Laptop1.showdata();
    Laptop1.startup();
    Laptop1.shutdown();
  pizza pizza1;
    pizza1.getdata();
    pizza1.showdata();  
	return 0;
}