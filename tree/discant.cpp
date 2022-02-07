#include<iostream>
using namespace std;

class node
{public :
	int price;
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
	temp->price=a;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		t=root;
		while(t!=NULL)
		{
			if(t->price>a)
			{
				if(t->left==NULL)
				{
					t->left=temp;
					break;
				}
				else
					t=t->left;
			}
			if(t->price<a)
			{
				if(t->right==NULL)
				{
					t->right=temp;
					break;
				}
				else
					t=t->right;
			}
		}
	}
}
bool chec(class node *q,int key)
{
	while(q!=NULL)
	{
		if(q->price==key)
			return 0;
		else if(q->price>key)
			q=q->left;
		else if(q->price<key)
			q=q->right;
	}
	return 1;
}
int main()
{int t;
	cin>>t;
while(t>0)
{ 
	int n,distinct,c=1;
	cin>>n>>distinct;
 while(n>0)
  { 
  	int b;
	cin>>b;
	if(root==NULL)
	{
		insert(b);
	}
	else
	{ if(chec(root,b))
		{
			c=c+1;
			insert(b);
		}
	   
	}
   n--;
  }
		
if(c==distinct)
{
	cout<<"Good\n";
	root=NULL;
}
else if(c>distinct)
{
	cout<<"Average\n";
	root=NULL;
}
else if(c<distinct)
{
	cout<<"Bad\n";
	root=NULL;
}
  t--;
}
	return 0;
}