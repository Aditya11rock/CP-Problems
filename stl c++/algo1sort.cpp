#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<execution>
#include<string>
using namespace std;

class Motu{
public:
	int x;
	int y;
	map<string,int> z;
	Motu(int x=0,int w=0,string r="aditya")
	{
		this->x=x;
		this->y=w;
		this->z.insert(make_pair(r,w));
	}

	/*bool operator < (const Motu&p1)
	{
		return p1.x>x;
	}*/


};

bool operator <(const Motu p,Motu q)
{
	return p.x>q.x;
}


int main()
{
	vector<int> mad={5,4,2,3,34,45,56,34,45,34,2,32,52,3};

	vector<int>:: iterator it;
	for(it=mad.begin();it!=mad.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	//without sorting 
	//it it an inbuilt sort function define under algorithm library
	vector<int>::iterator it2=mad.begin();
	it2++;
	it2++;
	it2++;
	std ::sort(it2,mad.end());
	//so this sort function sort between two given range... and that can be manipulated
	for(int i=0;i<mad.size();i++)
	{
		cout<<mad[i]<<" ";
	}
	cout<<"\n";


	set<int> mad2={2,4,5,45,34,2,4,5};
	set<int>::iterator it1;
	for(it1=mad2.begin();it1!=mad2.end();it1++)
	{
		cout<<*it1<<" ";
	}
	cout<<"\n";

	vector<Motu> vec;
	Motu m1(12,3,"flavia");
	vec.push_back(m1);
	Motu m2(4,6,"rohan");
	vec.push_back(m2);
	Motu m3(25,6,"kathrine");
	vec.push_back(m3);
	Motu m4(7,3,"newton");
	vec.push_back(m4);
	Motu m5(23,5,"cleo");
	vec.push_back(m5);

	vector<Motu>::iterator it3;
	cout<<"*****************************************"<<endl;
	cout<<"this is non primitive data type without sorted\n";
	for(it3=vec.begin();it3!=vec.end();it3++)
	{
		cout<<it3->x<<" "<<it3->y<<" ";
		//here it3->z is accessing map container 
		for(auto it4:it3->z)
		{	
			//it4 has been assigned the map container wohhhh......
			cout<<it4.first<<" "<<it4.second<<"\n";
		}
	}

	std::sort(vec.begin(),vec.end());
	cout<<"********************************************\n";
	for(it3=vec.begin();it3!=vec.end();it3++)
	{
		cout<<it3->x<<" "<<it3->y<<" ";
		//here it3 is a pointer pointing to the container of map that is z
		for(auto it4=it3->z.begin();it4!=it3->z.end();it4++)
		{
			//it4 is a pointer point to the first block of map container
			cout<<it4->first<<" "<<it4->second<<"\n";
		}
	}

	return 0;
}