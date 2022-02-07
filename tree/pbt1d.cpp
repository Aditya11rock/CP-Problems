#include <iostream>
using namespace std;

class node
{public:
	int data;
	class node *left;
	class node *right;
};
class node *root=NULL;
class node *createnode()
{
	class node *p;
	p=(class node*)malloc(sizeof(class node));
	return p;
}
void insert(int a)
{
	class node *temp,*t;
	temp=createnode();
	temp->data=a;
	temp->left=NULL;
	temp->right=NULL;
  if(root==NULL)
  {
  	root=temp;
  }
  else
  {t=root;
      while(t!=NULL)
      {
      	if(t->data>a)
      	{
      		if(t->left==NULL)
      		{	t->left=temp;
      		t=NULL;}
      		else
      		t=t->left;
      	}
      	else if(t->data<a)
      	{
      	     if(t->right==NULL)
      			{
      				t->right=temp;
      		       t=NULL;
      		     }
      		else
      		t=t->right;	
      	}
      }
  }
}

/*void display(class node*r)
{  
	if(r==NULL)
		return;
	if(r!=NULL)
	{
		cout<<r->data<<"\n";
		display(r->left);
		display(r->right);
	}
}
*/
bool search(class node *t,int z)
{
	if(t!=NULL)
	{
		if(t->data==z)
		{
			return 1;
		}
		if(t->data>z)
		{
			search(t->left,z);
		}
		if(t->data<z)
		{
			search(t->right,z);
		}
	}
	return 0;
}
int main()
{int n;
	cin>>n;
	while(n>0)
	{int q;
		cin>>q;
		insert(q);
      n--;
	}

//display(root);
	int w;
	cin>>w;
	if(search(root,w))
		cout<<"element is present";
	else 
		cout<<"element is absent";
	return 0;
}