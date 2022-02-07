#include<iostream>
#include<forward_list>
using namespace std;



int main()
{

	forward_list<int > maddy = {5,6,45,56,3,5,46,34,23,53};

	forward_list<int> moddy={4,6,8,3};
	maddy.merge(moddy);

	maddy.sort();//sort elements
	maddy.push_front(27);//push elements in front
	maddy.remove(45);//remove specific elements
	maddy.pop_front();//remove first element

	for(auto it:maddy)
	{
		cout<<it<<" ";
	}

	cout<<"\n";//.begin() returns iterator in front 
	for(auto it=maddy.begin();it!=maddy.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n"<<maddy.empty();//returns boolean value



	return 0;
}