#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> mad={3,5,34
		,23,1,19,23,12,54,4,22,17,52};
	cout<<is_sorted(mad.begin(),mad.end())<<endl;
	vector<int> ::iterator it;
	for(it=mad.begin();it!=mad.end();it++)
	{

		cout<<*it<<" ";

	}

	cout<<endl;
	//sort(mad.begin(),mad.end());

	for(it=mad.begin();it!=mad.end();it++)
	{

		cout<<*it<<" ";

	}

	cout<<endl;
	//nth_element gives nth element after sorting the data
	//if the data given is unsorted.... then its first get sorted and then nth is returned 
	//but the data does not remains sorted in original vector instead the data get shuffeled....
	//anomolous behaviour because the data is shuffeled...

	nth_element(mad.begin(),mad.begin()+4,mad.end());

	cout<<"mad[4] : "<<mad[4]<<endl;

	nth_element(mad.begin(),mad.begin()+7,mad.end());

	cout<<"mad[7] : "<<mad[7]<<endl;
	cout<<"mad[9] : "<<mad[9]<<endl;
	for(auto it2:mad)
	{
		cout<<it2<<" ";
	}

	cout<<endl;
	return 0;
}
