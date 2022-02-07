#include<iostream>
#include<string>
using namespace std;

struct arraystack
{
	int top;
    int capacity;
    int *array;

};
struct arraystack* creatstack(int cap) 
{struct arraystack *stack;
	stack=(arraystack *)malloc(sizeof(struct arraystack));
stack->capacity=cap;
stack->top=-1;
stack->array=(int *)malloc(sizeof(int)*stack->capacity);
return (stack);	
}
int isfull(struct arraystack *stack)
{if(stack->top==(stack->capacity-1))
   {	cout<<"\n1"<<endl;
  return(1);}
  else
  	return(0);

}
int isempty(struct arraystack *stack)
{
	if(stack->top==-1)
	return(1);
	else
    return(0);
}
void push(struct arraystack *stack,int val)
{
	if(!isfull(stack))
	{
		stack->top+1;
		stack->array[stack->top]=val;
	}
	else
		cout<<"stack is full"<<endl; 
}
int pop(struct arraystack *stack)
{int item;
if(!isempty(stack))
{item=stack->array[stack->top];
stack->top--;
return(item);}
else
return(-1);
}

int main()
{int choice,item;
struct arraystack *stack;
int n;
cout<<"enter size of array"<<endl;
cin>>n;
creatstack(n);
while(1)
{
	cout<<"1. push \n 2.pop \n 3.exit \n enter your choice \n";
	cin>>choice;
	switch(choice)
	{ case 1: cout<<"enter a no. to be pushed\n";
	          cin>>item;
		      push(stack,item);
		      break;
	 case 2: item=pop(stack);
	          if(item==-1)
	          	cout<<"stack is empty\n";
	          else
	          cout<<item<<"\n";
	         break;	
	 case 3:   exit(0);           

	}
	
}

}