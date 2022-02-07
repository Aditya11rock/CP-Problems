#include<iostream>
#include<set>
#include<string>
using namespace std;

class Mad{

public:
	int x;
	int y;
	string name;


	Mad(int v,int z,string s)
	{
		x=v;
		y=z;
		name=s;
	}
	//Mad(int v=0): x{x} { cout<<"constructor"<<endl; };
	//Mad(const Mad& rhs) { x= rhs.x; cout<<"copy\n";}
	



};

//bool operator < (const Mad& lhs, const Mad& rhs) {return lhs.x < rhs.x;}
bool operator < (const Mad lh,const Mad rh)
{
	return lh.y > rh.y;
}

int main()
{

	set<Mad> s1;
	Mad m2(20,24,"Aditya");

	s1.insert(Mad(10,35,"Rahul"));
	Mad m3(15,25,"Flavia");
	s1.insert(m3);
	s1.insert(m2);
	s1.emplace(Mad(23,43,"love"));

	for(auto it:s1)
	{
		cout<<it.x<<" "<<it.y<<" "<<it.name<<"\n";
	}

	return 0;
}