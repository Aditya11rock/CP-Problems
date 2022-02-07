#include<iostream>
#include<cstring>
#include<string>
using namespace std;
struct book
{public :
	int bookid;
	float price;
	char bookname[100];
	string book;
      void getdata()
    {
    	cin>>bookid>>price>>bookname;
    }
    void showdata()
    {
    	cout<<"\nbookid = "<<bookid<<"\nprice of the book = "<<price<<"\nname of the book = "<<bookname<<"\nother way to write : "<<book;
    }	
	
};

int main()
{
book b1,b2,b3;
b2.bookid=123;
b2.price=234.34;
b1.getdata();
b1.showdata();
strcpy(b2.bookname,"this is the way to copy a string into a character array");
b2.book="two ways of writing a string.";
b2.showdata();
	return 0;
}