#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
	unordered_multiset<int> mad;
	//it is a mutliset also unordered but it get's sorted on hash basis...
	mad.insert(3);
	mad.insert(4);
	mad.insert(14);
	mad.insert(16);
	mad.insert(16);
	mad.insert(4);
	mad.insert(3);
	for(auto it:mad)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
	auto it=mad.find(3);
	cout<<"found = "<<*it<<endl;
	for(auto it=mad.begin();it!=mad.end();it++)
	{
		cout<<*it<<" ";
	}


	return 0;
}