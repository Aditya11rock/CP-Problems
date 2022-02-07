#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	priority_queue<int > mad;//by default max heap.... insertion and deletion with logarithmic time complexity....
	mad.push(23);
	mad.push(34);
	mad.push(58);
	mad.push(12);
	mad.push(64);
	mad.push(44);
	cout<<mad.top()<<"\n";//there is only one point of access like stack we get top element but here the data is being sorted 
	//that's the  difference here from stack
	//by default it arrange data in asscending order so at top it would be greater element

	priority_queue<int,vector<int>,greater<>> mad2;// in this way you can create priority que that will store minimum at the top

	mad2.push(23);
	mad2.push(12);
	mad2.push(15);
	mad2.push(17);
	mad2.push(19);
	mad2.push(24);
	cout<<mad2.top()<<"\n";// this is the way to create min heap

	while(!mad2.empty())
	{
		cout<<mad2.top()<<" ";
		mad2.pop();
	}
	cout<<"\n";

	return 0;
}