#include<iostream>
using namespace std;

class time
{ public:
	int rear=-1;
	int t=0;
	int b;
	int front = 0;
	int mfront = 0;
	int mix[1000];
	int ideal[100];
void get(int a)
{
   for(int i=0;i<a;i++)
   {
   	 cin>>mix[i];
   }
   for(int i=0;i<a;i++)
   {
   	cin>>ideal[i];
   }
rear=a;
b=a;
   check(); 

}
void check()
{
  while(front!=b)
  {
  	if(mix[mfront]==ideal[front])
  	{
  		mfront=mfront+1;
  		front=front+1;
  		t=t+1;
  	}
  	else if(mix[mfront]!=ideal[front])
  	{
  		mix[rear]=mix[mfront];
  		rear=rear+1;
  		mfront=mfront+1;
  		t=t+1;
  	}
  }

cout<<t;
}


};

int main()
{int n;
	time t1;
	cin>>n;

t1.get(n);

	return 0;
}