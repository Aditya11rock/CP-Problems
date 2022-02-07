#include<iostream>
using namespace std;

class node
{public:
	int data;
	class node *l;
	class node *r;

};
class node *root=NULL;
class node* creatnode()
{class node* p;
	p=(class node*)malloc(sizeof(class node));
  return p;
}

void insert(int a)
{int c=0;
	class node *temp;
	class node *p,*q;
	temp=creatnode();
	temp->data=a;
	temp->l=NULL;
	temp->r=NULL;

  if(root==NULL)
  {
  	root=temp;
  }
  else
  {
  	p=root;
  	while(p!=NULL)
  	{c=2;
  		if(p->data>a)
  		{	q=p;
  			c=0;
  			p=p->l;
  		}
  		else if(p->data<a)
  		{	q=p;
  			p=p->r;
            c=1;
      	}
   }
   if(c==0)
   {
   	q->l=temp;
   }
   if(c==1)
   {
   	 q->r=temp;
   }
  }
}

/*void display(class node* t4)
{
	if(t4!=NULL)
	{cout<<t4->data;<<" "<<t4<<"\n"<<t4->l<<" "<<t4->r;
		display(t4->l);
		display(t4->r);
	}
	if(t4==NULL)
		return ;
}
*/
void search(class node *t,int e)
{
/*	if(t==NULL)
		return 0;*/
	if(t!=NULL)
	{
           if(t->data==e)
           {
           	 cout<<"element is present";
           }
           if(t->data>e)
           {
           	search(t->l,e);
           }
	       if(t->data<e)
           {
           	search(t->r,e);
           }

	}
	//return 0;
}
int main()
{
 int n,w;
 cin>>n;
 while(n>0)
 {
 	int b;
 	cin>>b;
 	insert(b);
 	n--;
 }
 cin>>w;
search(root,w);
 //display(root);

	return 0;
}