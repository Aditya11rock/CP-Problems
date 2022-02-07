#include<iostream>
using namespace std;

class dumb
{
public:
	int front=-1;
	int rear=-1;
	int arr[2][50];
	
void enqueue(int a,int b)
{int n=rear;
	if(rear==-1)
	{
       rear=rear+1;
       arr[0][rear]=a;
       arr[1][rear]=b;
	}
	else
	{
		for(int i=rear;i>=0;i--)
		{
			if(arr[0][i]==a)
			{
               n=i;
               break;
			}
		}
		for(int i=rear;i>n;i--)
		{
             arr[0][i+1]=arr[0][i];
             arr[1][i+1]=arr[1][i];
		}
		arr[0][n+1]=a;
		arr[1][n+1]=b;
		rear=rear+1;
	}
}
void dequeue()
{
	front=front+1;
	cout<<arr[0][front]<<" "<<arr[1][front]<<endl;
}	
	
	
};

int main()
{
	int T;
	cin>>T;
	dumb d1;
	while(T>0)
	{
		int a,b;
        char c;
         cin>>c;
         switch(c)
         {
         	case 'E': cin>>a>>b;
         	          d1.enqueue(a,b);
         	          break;
         	case 'D':
         	          d1.dequeue();
         	          break;            
         }

		T--;
	}
 
}
