#include<iostream>
using namespace std;

class node
{public :
	int data;
	class node *next;
};
class node *start=NULL;

class node *createnode()
{
  class node *p;
  p=(class node*)malloc(sizeof(class node));

  return p;
}
void put(int a)
{class node *temp,*t;
  
temp=createnode();
temp->data=a;
temp->next=NULL;
if(start==NULL)
{
   start=temp; 
}
else
{t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=temp;

}

}
class node* reverse()
{class node *t1=NULL,*t2=NULL,*t3;

	while(start!=NULL)
	{   
		t2=start->next;
		start->next=t1;
		t1=start;
		start=t2;
	}

 return t1;
}

void display()
{class node *t1;
  t1=reverse();
  while(t1->next!=NULL)
  {
         cout<<t1->data<<" ";
         t1=t1->next;
  }
  cout<<t1->data;
}

int main()
{int n;
	cin>>n;
	while(n>0)
	{int a;
		cin>>a;
		put(a);
      n--;
	}
display();

	return 0;
}