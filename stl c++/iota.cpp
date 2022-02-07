#include<iostream>
#include<vector>
#include<list>
#include<forward_list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<deque>
#include<algorithm>

using namespace std;


int main()
{
	// in map element's get sorted but list is like queue elements don't get sorted
	list<int> mad={4,5,2};//list initialization in this way is possible.... also deque initialization is possible
	mad.push_back(3);
	mad.push_front(12);
	mad.push_front(23);
	mad.push_front(57);
	mad.push_back(32);

	cout<<is_sorted(mad.begin(),mad.end())<<endl;

	for(auto it=mad.begin();it!=mad.end();it++)
	{

		cout<<*it<<" ";


	}	
	mad.pop_front();
	mad.pop_back();
	cout<<endl;
	mad.sort();
	//list can be directly 

	for(auto it=mad.begin();it!=mad.end();it++)
	{

		cout<<*it<<" ";


	}

	cout<<endl;
	forward_list<int> mad2;
	mad2.push_front(43);
	mad2.push_front(23);
	mad2.push_front(13);

	mad2.push_front(24);
	mad2.push_front(35);
	mad2.push_front(15);

	for(auto it=mad2.begin();it!=mad2.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<is_sorted(mad2.begin(),mad2.end())<<endl;

	mad2.sort();
		for(auto it=mad2.begin();it!=mad2.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;

	stack<int> mad3;
	mad3.push(23);
	mad3.push(43);
	mad3.push(53);
	mad3.push(27);
	mad3.push(13);

	mad3.push(42);

	//since it's a stack you can access top element only so use these container when you want only top element to be accessed
	while(!mad3.empty())
	{
		cout<<mad3.top()<<" ";
		mad3.pop();
	}
	cout<<endl;

	queue<int> mad4;

	mad4.push(23);
	mad4.push(43);
	mad4.push(53);
	mad4.push(27);
	mad4.push(13);

	mad4.push(42);

	while(!mad4.empty())
	{
		cout<<mad4.front()<<" ";
		mad4.pop();


	}

	map<int,int,greater<int>> mad5;

	mad5.insert(make_pair(23,43));
	mad5.insert(make_pair(12,41));
	mad5.insert(make_pair(54,34));
	mad5.insert(make_pair(16,47));
	mad5.insert(make_pair(66,45));
	cout<<endl;
	for(auto it:mad5)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}

	multimap<int,int> mad6;
	mad6.insert(make_pair(23,56));
	mad6.insert(make_pair(23,54));
	mad6.insert(make_pair(23,19));
	mad6.insert(make_pair(23,67));
	mad6.insert(make_pair(12,34));
	mad6.insert(make_pair(12,45));
	mad6.insert(make_pair(23,43));
	mad6.insert(make_pair(54,25));

	cout<<"*************"<<endl;
	for(auto it:mad6)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}

	vector<int> mad7;
	mad7.push_back(23);
	mad7.push_back(68);
	mad7.push_back(47);
	mad7.push_back(34);
	mad7.push_back(14);
	mad7.push_back(75);

	cout<<is_sorted(mad7.begin(),mad7.end())<<endl;

	sort(mad7.begin(),mad7.end());

	cout<<is_sorted(mad7.begin(),mad7.end())<<endl;

	for(auto it=mad7.begin();it!=mad7.end();it++)
	{
		cout<<*it<<" ";
	}

	cout<<endl;

	set<int,greater<int>> mad8={3,5,3,5,34,54,2};// this way initialization of set is allowed

	mad8.insert(3);
	mad8.insert(12);
	mad8.insert(5);
	mad8.insert(54);
	mad8.insert(17);

	// for set subscript operator is not allowed 
	for(auto it=mad8.begin();it!=mad8.end();it++)
	{
		cout<<*it<<" ";
	}

	cout<<endl;

	multiset<int> mad9={2,4,5,3,54,54,3,23,2,2,3,4,23};
	mad9.insert(2);
	mad9.insert(4);

	for(auto it:mad9)
	{
		cout<<it<<" ";
	}

	cout<<endl;
	//deque is simillar to list as it has got some function but list has got many function that can be used
	//while deque hasn't got many function

	deque<int> mad10={3,5,2,4,2,3};

	mad10.push_back(34);
	mad10.push_front(56);
	mad10.push_front(27);
	mad10.push_front(47);
	mad10.push_back(13);
	mad10.push_back(47);

	//removal of elements
	mad10.pop_front();
	mad10.pop_back();

	for(auto it:mad10)
	{
		cout<<it<<" ";
	}

	//max heap by default priority que
	cout<<endl;
	priority_queue<int> mad11;//priority queue cannot be initialized by brace brackets
	mad11.push(12);
	mad11.push(45);
	mad11.push(46);
	mad11.push(15);
	mad11.push(59);
	mad11.push(67);

	// stack maintain order of insertion but priority queue sort and keep max at top and give access to top element only
	// priority queue does not return iterator which signifies that all elements are not accessable
	cout<<mad11.top()<<" ";
	mad11.pop();
	cout<<mad11.top()<<" ";

	cout<<endl;
	// create minimum heap having min vak=lue at the top

	//min heap....
	priority_queue<int,vector<int>,greater<int>> mad12;

	mad12.push(12);
	mad12.push(45);
	mad12.push(46);
	mad12.push(15);
	mad12.push(59);
	mad12.push(67);

	cout<<mad12.top()<<" ";
	mad12.pop();
	cout<<mad12.top()<<" ";


	return 0;
}