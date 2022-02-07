#include<iostream>
#include<set>
using namespace std;

int main()
{


    set<int, greater<int> >::iterator itr;
	set<int> bac={1,2,3,4,5,5,4,5,6,3,1,2,3};
	for(itr=bac.begin();itr!=bac.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<"\n";

	bac.insert(39);//to insert an element
	bac.insert(40);
	bac.insert(55);

	for(itr=bac.begin();itr!=bac.end();itr++)
	{
		cout<<*itr<<" ";
	}

	cout<<"\n"<<bac.erase(40)<<"\n"<<*bac.upper_bound(39)<<"\n";
	cout<<*bac.lower_bound(7)<<"\n"<<*bac.find(55)<<"\n";

	for(itr=bac.begin();itr!=bac.end();itr++)
	{
		cout<<*itr<<" ";
	}

	return 0;
}