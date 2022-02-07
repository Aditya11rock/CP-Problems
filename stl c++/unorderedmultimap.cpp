#include<iostream>
#include<unordered_map>
#include<string>
#include<map>
using namespace std;

int main()
{
	/*multimap<string,int> mad;

	mad.insert(make_pair("flavia",31));
	mad.insert(make_pair("flavia",41));
	mad.insert(make_pair("aditya",51));
	mad.insert(make_pair("aditya",11));
	mad.insert(make_pair("langford",45));
	mad.insert(make_pair("langford",100));
	mad.insert(make_pair("flavia",35));
*/
	//in normal multimap the data get sorted on the basis of key entered
	// while in unordered multimap the data is rearranged and not sorted but hashed in buckets

	/*for(auto it=mad.begin();it!=mad.end();it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
	}
	cout<<"\n"<<"************\n";
	unordered_multimap<string,int> mad2;

	mad2.insert(make_pair("flavia",31));
	mad2.insert(make_pair("flavia",41));
	mad2.insert(make_pair("aditya",51));
	mad2.insert(make_pair("aditya",11));
	mad2.insert(make_pair("langford",45));
	mad2.insert(make_pair("langford",100));
	mad2.insert(make_pair("flavia",35));	

	for(auto it=mad2.begin();it!=mad2.end();it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
	}	*/

	unordered_multimap<string,string> mad3;
	mad3.insert(make_pair("kathryn Newton","Margaret"));
	mad3.insert(make_pair("kathryn Newton","alleys"));
	mad3.insert(make_pair("Cleo Fraser","Emma"));
	mad3.insert(make_pair("katherine langford","hanna baker"));
	mad3.insert(make_pair("bailee madison","avery"));
	mad3.insert(make_pair("sadie sink","max"));

	for(auto it:mad3)
	{

		cout<<it.first<<" : "<<it.second<<"\n";
	}


	return 0;
}