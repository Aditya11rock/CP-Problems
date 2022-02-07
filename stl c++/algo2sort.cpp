#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Motu{
public:
	int x;
	int y;
	string name;

	Motu(int x=0,int y=0,string s="empty")
	{
		this->x=x;
		this->y=y;
		this->name=s;
	}

	bool operator < (const Motu &p)
	{
		return x<p.x;
	}

};

int main()
{

	vector<int> mad;

	mad.push_back(34);
	mad.push_back(45);
	mad.push_back(12);
	mad.push_back(69);
	mad.push_back(61);
	mad.push_back(16);
	mad.push_back(23);

	sort(mad.begin(),mad.end(),std::greater<int>());

	for(auto it=mad.begin();it!=mad.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	//is_sorted() is an inbuilt function which checks whether the given data is sorted or not
	cout<<is_sorted(mad.begin(),mad.end(),greater<>())<<endl;

	vector<Motu> maddy;
	Motu m1(4,6,"aditya");
	maddy.push_back(m1);
	maddy.push_back(Motu(2,3,"flavia"));
	maddy.push_back(Motu(45,34,"kathrine"));
	maddy.push_back(Motu(21,54,"emma"));
	vector<Motu> ::iterator it;
	for(it=maddy.begin();it!=maddy.end();it++)
	{
		cout<<it->x<<" "<<it->y<<" "<<it->name<<"\n";
	}
	cout<<is_sorted(maddy.begin(),maddy.end())<<endl;

	sort(maddy.begin(),maddy.end());

	cout<<is_sorted(maddy.begin(),maddy.end())<<endl;

	return 0;

}