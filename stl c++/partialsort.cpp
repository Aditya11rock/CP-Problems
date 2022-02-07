#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	vector<int> mad={2,3,4,64,34,23,35,65,2,4,23,12,43,1,4,7};
	vector<int> :: iterator it;
	for(it=mad.begin();it!=mad.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
	cout<<is_sorted(mad.begin(),mad.end())<<endl;//this function return boolean value based on data provided 

	//let's see partial sort....

	//it takes 3 argument 1st the iterator pointing the first, 2nd upto which data has to be sorted, 3rd the end iterator upto which the 
	//data has to be considered*** the position of the remaining data is undefined....
	//the end iterator can also be manipulated
	partial_sort(mad.begin(),mad.begin()+6,mad.end()-3);

	for(it=mad.begin();it!=mad.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";


	return 0;
}