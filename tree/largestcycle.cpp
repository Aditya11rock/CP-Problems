#include<iostream>
using namespace std;
class node
{public:
	int data;
	class node *left;
    class node *right;
};
class node *root=NULL;
class node *tem=NULL;
class node *createnode()
{
	class node *p;
	p=(class node*)malloc(sizeof(class node));
	return p;
}
class node* insert(int a)
{
	class node *temp;
	temp=createnode();
	temp->data=a;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void search(class node *t,int key)
{
	if(t->data==key)
		tem=t;
	else if(t->left==NULL)
		return;
	else
	{
         search(t->left,key);
         search(t->right,key);
	}
}

int maxdepth(class node*q)
{
	if(q==NULL)
		return 0;
	else
	{
	 int ldepth=maxdepth(q->left);
	 int rdepth=maxdepth(q->right);
	 if(ldepth>rdepth)
	 	return ldepth+1;
	 else
	 	return rdepth+1;
	}
}
int display(class node *w,int max,int com)
{
   if(com==max)
   	return w->data;
   else if(w==NULL)
   return 0;
   else 
   {
   	int x;
   	x=display(w->left,max,com+1);
   	if(x!=0)
   		return x;
   	else
   		return display(w->right,max,com+1);
   }

}

int main()
{int n,g,h;
	cin>>n;
	root=insert(1);
	for(int i=1;i<7;i++)
	{int y,z;
		cin>>y>>z;
		search(root,y);
		if(tem->left==NULL)
			tem->left=insert(z);
		else
			tem->right=insert(z);

	}
g=maxdepth(root->left);
g=display(root->left,g,1);
cout<<g<<" ";
h=maxdepth(root->right);
h=display(root->right,h,1);
cout<<h<<"\n";



	return 0;
}