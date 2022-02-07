#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<float > mad;//initialization of queue with brace is not allowed

	//initialization not allowed and insertion of elements by push function only
	mad.push(2.3);
	mad.push(3.4);
	//access since it's a queue access to front element is only allowed FIFO strictly
	//subscript operator is not allowed so any element cannot be accessed randomly
	// means that first element can only be accessed and neither it returns pointer so to access next element 1st element must be popped
	// no accesse allowed
	cout<<mad.size()<<"\n";
	while(!mad.empty())
	{
		cout<<mad.front()<<" ";
		mad.pop();//strictly removes first element and follows FIFO order
	}
	cout<<endl;

	return 0;
}