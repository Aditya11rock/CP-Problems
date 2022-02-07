#include<iostream>
using namespace std;

class node
{
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
	class node*temp,*t;
	temp=createnode();
	temp->data=a;
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
			if(t->data>a)
			{
				if(t->left==NULL)
				{
					t->left=temp;
					break;
				}
				else
				  t=t->left;
			}
			if(t->data<a)
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
/*class node *find(class node *t)
{
	class node *q;
	q=q->left;
	if(q->data>t->data)
		
}*/
class node *deletenode(class node *p,int key)
{class node *tem;
	if(p==NULL)
		cout<<"no such element found ";
	else if(p->data>key)
		p->left=deletenode(p->left,key);
	else if(p->data<key)
		p->right=deletenode(p->right,key);
	else
	{
		if(p->left && p->right)
		{
           temp=find(p->left);
           p->data=temp->data;
           p->left=deletenode(p->left,p->data);
		}
		else
		{
			temp=p;
			if(p->left==NULL);
			p=p->right;
			if(p->right==NULL)
				p=p->left;
			free(temp);
		}
	}
	return p;
}
int main()
{
int n;
cin>>n;
while(n>0)
{int b;
	cin>>b;
 insert(b);
 n--;
}

	return 0;
}