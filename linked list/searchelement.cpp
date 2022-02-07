#include<iostream>
using namespace std;

class node
{public :
	int data;
	class node* next;
};
class node *start=NULL;
class node* createnode()
{class node *p;
  p=(class node*)malloc(sizeof(class node));
  return p;
}
void insert(int a)
{class node *temp,*t;
	temp=createnode();
 temp->data=a;
 temp->next=NULL;
if(start==NULL)
{
  start=temp;
}
else
{
	t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=temp;
}

}
void search(int b)
{class node *t1=start;
   while(t1!=NULL)
   {
   	if(t1->data==b)
   	{
   		cout<<b<<" no. is present at address = "<<t1;
   		break;
   	}
    t1=t1->next;  
 
   }
   if(t1==NULL)
   {
   	cout<<"it is not present";
   }
}

int main()
{
	int t;
	cin>>t;
while(t>0)
	{
		int z;
		cin>>z;
		insert(z);
		t--;
	
	}
int c;
cout<<"enter a no. to checked : ";
cin>>c;	
search(c);

	return 0;

}