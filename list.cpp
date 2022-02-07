#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l1{12,23,56,34,56,24};
	l1.push_back(12);
	l1.push_front(92);
	list<int>::iterator t=l1.begin();
	while(t!=l1.end())
	{
		cout<<*t<<" ";
		t++;
	}
	cout<<"\n";
	l1.sort();
	list<int>::iterator q=l1.begin();
	while(q!=l1.end())
	{
		cout<<*q<<" ";
		q++;
	}
	cout<<"\nno. of elements in the list are = "<<l1.size()<<endl;
	l1.pop_back();
	l1.pop_front();
	l1.reverse();
	list<int>::iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\nno. of elements in the list are = "<<l1.size()<<endl;
	l1.remove(56);
	list<int>::iterator n=l1.begin();
	while(n!=l1.end())
	{
		cout<<*n<<" ";
		n++;
	}
	cout<<"\n";
list<string>l2{"rahul","ashok","dumb"};
l2.push_front("yummy");
l2.push_back("sir");
list<string>::iterator r=l2.begin();
while(r!=l2.end())
{
	cout<<*r<<" ";
	r++;
}

}