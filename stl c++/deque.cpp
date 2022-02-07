#include<iostream>
#include<deque>
using namespace std;

int main()
{

	//all i would conclude is that it's a stack in which access from both side is possible as you can say mix of stack and que is deque
	deque<int> mad={2,3,4,10,11,12};
	//just like list but list has got some other features 
	//difference is in list subscript operator is not allowed but in deque it is allowed...
	mad.push_back(5);//in deque addition from fron and rear is allowed
	//and also it has got less inbuilt feature
	mad.push_front(6);
	deque<int> maddy={5,7,8};
	cout<<mad.size()<<endl;
	
	for(auto it:mad)
	{
		cout<<it<<" ";
	}
	cout<<"\n";
	mad.pop_back();//removal from front and rear is allowed
	mad.pop_front();
	for(int i=0;i<mad.size();i++)
	{
		cout<<mad[i]<<" ";
	}



	return 0;
}