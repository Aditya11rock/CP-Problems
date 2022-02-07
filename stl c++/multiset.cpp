#include<iostream>
#include<set>
#include<functional>
using namespace std;

int main()
{

	multiset<int,less<int>> ::iterator itr;
	multiset<int> q={2,4,5,3,6,7,3,4,2,5};
	for(itr=q.begin();itr!=q.end();itr++)
	{
		cout<<*itr<<" ";
	}


	return 0;
}