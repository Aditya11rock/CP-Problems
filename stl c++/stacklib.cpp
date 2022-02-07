#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<char> mad;//initialization of stack is also probhited just like queue
	//to insert elements you have to use push() inbuilt function

	mad.push('a');
	mad.push('b');
	mad.push('c');
	mad.push('d');
	mad.push('e');
	 //here also for accessing subscript operator is not allowed so any element cannot be randomly accessed
	// here basic rule of stack that is LIFO or FILO is strickly followed
	// like in queue we could only access first element with function front()
	// here we can access only last element with the top() function which represt the top/last eleent of stack

	cout<<mad.size()<<endl;
	//mad.sort();
	//we cannot even sort as we know it would destroy the order of stack and LIFO rule would be hampered
	while(!mad.empty())
	{
		cout<<mad.top()<<" ";// which represent last element which was recently added to stack
		mad.pop();//removes the last element which was recently added by LIFO rule for stack
	}

	return 0;
}