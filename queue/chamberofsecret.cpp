#include<iostream>
using namespace std;

class sol
{public:
	int front=0;
	int rear=-1;
	int t=0;
	int arr[1000];

void get(int a,int b)
{
	for(int i=0;i<a;i++)
	{
		rear=rear+1;
		cin>>arr[rear];
	}
	check(b);
}	
void check(int c)
{int z=c,q=0;
	while(z>0)
{ int i=front,max=i;
     for(int i=front;i<t+c;i++)
        {
          if(arr[i]>arr[max])
          {
          	max=i;
          }
        }
        cout<<max+1<<" ";
       for(int i=front;i<t+c;i++)
       {
          if(i!=max)
          {
          	rear=rear+1;
          	if(arr[i]-1>=0)
          	{
          		arr[rear]=arr[i]-1;
          	}
          }
       }

        z--;
 }	
}


};

int main()
{int n,x;

cin>>n,x;
sol s1;
s1.get(n,x);


	return 0;
}