#include<iostream>
using namespace std;

class node
{public :
	int data;
	class node *next,*prev;
};
class node *start=NULL;
class node *createnode()
{class node *p;
  p=(class node*)malloc(sizeof(class node));
  return p;
}
void insert(int a)
{class node *temp,*t;
  temp=createnode();
  temp->data=a;
  temp->next=NULL;
  temp->prev=NULL;
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
    temp->prev=t;
  }
}

void disp()
{class node *t7=start;
  while(t7!=NULL)
  {
  	cout<<t7->data<<" ";
  	t7=t7->next;
  }
  cout<<"\n";
}

void del(int b)
{class node *t1=start,*t2,*t3,*t4,*t5,*t6;
	int c=0;
	t4=start->next;
	redo:
	while(t1->next!=NULL)
	{t2=t1->next;
		t3=t2->next;
      if((start->data)<t4->data)
      {
      	start=start->next;
      	start->prev=NULL;
      	t4=start->next;
      	t1=start;
      	c=c+1;
      	if(c==b)
      	{
      		disp();
      		start=NULL;
      		c=0;
      		break;
      	}
      }
      else if((t2->data)<(t3->data))
      {
          t6=t2->prev;
          t6->next=t3;
          t3->prev=t2->prev; 	 
          /*t1=t2;*/
          t4=start->next;
          c=c+1;
          if(c==b)
      	{
      		disp();
      		start=NULL;
      		c=0;
      		break;
      	}
         
      }
      else if((t2->data)>(t3->data) && (t3!=NULL))
      {
      	t1=t2;
      }
      /*else if(t3==NULL)
      {cout<<"redo";
      	del(b,c);
      }*/
      
	}
	

}

int main()
{ int t;
	cin>>t;
	while(t>0)
{int n,x;
 cin>>n>>x;
     while(n>0)
       {int z;
 	     cin>>z;
 	      insert(z);
 	       n--;
        }
 del(x);
 t--;
}

	return 0;
}