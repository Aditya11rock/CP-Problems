#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
	map<string,int> mad;
	mad.insert(make_pair("aditya",12));
	mad.insert(make_pair("flavia",31));
	mad.insert(make_pair("rohan",24));
	mad.insert(make_pair("shakshi",34));
	mad.insert(make_pair("addisonrae",45));
	for(auto it:mad)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
	//this is an example of ordered map now let see unordered map
	cout<<"***********************************\n";
	//in unordered map the data isn't sorted but they get rearranged on the basis of hash
	//they do not maintain the order of insertion...
	unordered_map<string,int> mad2;
	mad2.insert(make_pair("aditya",12));
	mad2.insert(make_pair("flavia",31));
	mad2.insert(make_pair("rohan",24));
	mad2.insert(make_pair("shakshi",34));
	mad2.insert(make_pair("addisonrae",45));
	for(auto it=mad2.begin();it!=mad2.end();it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
		//here it is a pointer referencing the object...
	}
	for(auto it:mad2)
	{
		cout<<it.first<<" "<<it.second<<"\n";
		// here it is the object itself so it can directly access it's members
	}

	return 0;
}