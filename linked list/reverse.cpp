#include<iostream>
using namespace std;

class node
{public :
	int data;
     class node *next;
};
class node *start=NULL,*z=NULL;
class node *get()
{  
	class node *p;
	p=(class node*)malloc(sizeof(class node));
return p;
}

void insert(int p)
{class node *temp,*t,*x;
  temp=get();
  temp->data=p;
  temp->next=NULL;
  if(start==NULL)
  	{  
  		start=temp;
         z=start;
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
void sort()
{class node *t1=start,*t2=start,*t3,*t4,*t5,*t6=NULL,*t7;
	t7=start;
	int b=1;
   while(t1->next!=NULL)
   {t3=t2->next;
   	t4=t3->next;
   	if((t2->data)%2==0 && (t3->data)%2==0)
   	{ t2->next=t6;
   		t6=t2;
   		t2=t3;
        t1=t2;
   	}
   	else if((t2->data)%2==0 && (t3->data)%2!=0)
   	{
       if(b==1)
       {
       	start=t2;
       	start->next=t6;
       	t2=start;
       	while(t2->next!=NULL)
       	{
       		t2=t2->next;
       	}
       	t2->next=t3;
       	t6=NULL;
       	t2=t3;
       	b++;
       	t1=t2;
       }
       else if(t6==NULL)
       {
       	t2=t3;
       	t1=t2;
       }
       else if(t6!=NULL)
       {
       	t2->next=t6;
       	t5->next=t2;
       	t5=NULL;
       	t6=t2;
       	while(t6->next!=NULL)
       	{
       		t6=t6->next;
       	}
       	t6->next=t3;
       	t2=t3;
       	t1=t2;
       	t6=NULL;
       }
   	}
   	else if((t2->data)%2!=0)
   	{   t5=t2;
   		t2=t3;
   		t1=t2;
   	}

  }	
  t2->next=t6;
  t5->next=t2;
    if(start==t7)
     {
 	     start=t2;
      }	

}

void display()
{class node *q;
	q=start;
	if(start==NULL)
		cout<<"list is empty";
	else
	{
		while(q->next!=NULL)
		{
			cout<<q->data<<" ";
			q=q->next;
		}
		cout<<q->data;
	}

}

int main()
{ 
	int t;
	cin>>t;
	while(t>0)
	{int n;
        cin>>n;
    insert(n);
		t--;
	}
sort();
display();

	return 0;
}