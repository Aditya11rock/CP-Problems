#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	multimap<string,int> multmap;
	multmap.insert(make_pair("aditya",31));
	multmap.insert(make_pair("aditya",11));
	multmap.insert(make_pair("flavia",14));
	auto ta=multmap.lower_bound("aditya");
	cout<<ta->second<<"\n";
	auto tat=multmap.upper_bound("flavia");
	cout<<tat->second<<"\n";
	for(auto it:multmap)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
	auto it=multmap.find("aditya");
	cout<<multmap.count("aditya")<<"\n";
	cout<<multmap.count("flavia")<<"\n";
	cout<<it->second<<"\n";


	return 0;
}