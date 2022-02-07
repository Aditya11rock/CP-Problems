#include<iostream>
#include<vector>
#include<list>
using namespace std;

bool compare(int m1,int m2)
{
	return m1<m2;
	//compare functon is boolean so it will give output as 1 or 0 so see before you write....
}

int main()
{
	list<int > mad={3,5,6,3,6};
	list<int > maddy={15,20,25,30,30};
	list<int >maddy2={10,20,30,40};
	vector<int> mad2={2,5,6,4,3};
	mad.insert(mad.begin(),1,12);//insert(1st=iterator(pointer),no. of repetation,elements)
	// subscript operator are allowed for vectors but not for list so to access list items you have to use pointers
	mad.push_back(20);
	mad.push_front(30);// for list only adding/removing element from front and adding/removing element from behind is allowed

	mad.splice(mad.begin(),maddy);//1st argument is an iterator and 2nd argument is list that you want to insert

	mad.unique();//makes the list unique with respect to adjacent element
	mad.sort();// sort the element in ascending order

	mad.unique();

	mad.merge(maddy2,compare);//merge list 2 into one by default in sorted format because here we didn't specified any pointer...


	for(auto it=mad.begin();it!=mad.end();it++)
	{
			cout<<*it<<" ";
	}
	cout<<"\n";
	mad2.push_back(12);
	for(int i=0;i<mad2.size();i++)
	{
		cout<<mad2[i]<<" ";
	}


	return 0;
}