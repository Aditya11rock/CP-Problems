#include<iostream>
#include<set>
#include<list>
#include<unordered_set>
using namespace std;

int main()
{
	// difference between set and unordered set is that in unordered set the elements aren't rearrange and they remain same as order of insertion
	//while in nomal set they get dorted
	set<int> mad={2,3,4,5,3,5,34,5,6};
	//list<int> mad2={3,4,5,6}; 

	//****unordered set is like a stack with a feature which enables no duplicate which is beneficial
	unordered_set<int> mad2={2,3,4,5,3,5,34,5,6};
	for(auto it=mad.begin();it!=mad.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto it=mad2.begin();it!=mad2.end();it++)
	{
		cout<<*it<<" ";//why do we access these values with a pointer only??
		//because internally the data is being sorted so there location is being changed so that's why no subscript operator
	}


	return 0;
}