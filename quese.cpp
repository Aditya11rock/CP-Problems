#include<iostream>
using namespace std;

class que
{private :
	int rear;
	int front;
	int arr[5];
public :
 que()
 {
 	rear =-1;
 	front =-1;
 	for(int i=0;i<5;i++)
 	{
 		arr[i]=0;
 	}
  }
 	bool isfull()
 	{
 		if(rear==4)
 			return true;
 		else
 			return false;
 	}
 	bool isempty()
 	{
 		if((front==-1) && (rear==-1))
 			return true;
 		else
 			return false;
 	}
 	void enque(int val)
 	{
 		if(!isfull())
 		{
 			if((front==-1) && (rear==-1))
 			{
 				front=front+1;
 				rear=rear+1;
 				arr[rear]=val;
 			}
 			else
 			{
 				rear=rear+1;
 				arr[rear]=val;
 			}
 		}
 		else
 			cout<<"que is full\n";

 	}
 int deque()
 {int x;
 	if(!isempty())
     {
     	if(front==rear)
     	{
     		x=arr[front];
     		arr[front]=0;
     		front=-1;
     		rear=-1;
     		//return x;
     	}
     	else
     	{
     		x=arr[front];
     		arr[front]=0;
     		front++;
     		//return x;
     	}
     }
     	else
     		{cout<<"que is empty\n";
     	x=-1;}
     	return (x);
     
 }
void display()
{
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int count()
{int x;
	x=rear-front+1;
return(x);
}
};
int main()
{ int choice;
	que q1;
while(1)	
{cout<<"\n0.exit.\n1.isempty\n2.isfull\n3.enque\n4.deque\n5.display\n6.count\n7.clearscreen\nenter your choice"<<endl;
cin>>choice;
switch(choice)
{case 0:exit(0);
 case 1:if(q1.isempty())
         cout<<"que is empty";
         else
         cout<<"que is not empty";
         break;
 case 2:if(q1.isfull())
         cout<<"que is full";
         else
         cout<<"que is not full";
         break;
case 3: int w;
         cin>>w;
         q1.enque(w);
         break;  
case 4:int z;
        z=q1.deque();
        cout<<"\ndequed value = "<<z;
        break;
 case 5:q1.display();
        break;
 case 6:int p;
         p=q1.count();
         cout<<"\n no. of elements present = "<<p<<endl;
         break;
 case 7:system("cls");
         break;                                                          	

}
}

	return 0;
}



















