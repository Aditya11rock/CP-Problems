#include<iostream>
using namespace std;

class node
{public:
	int data;
	class node *left;
	class node *right;
};
class node *root=NULL;
class node *temp=NULL;
class node *creatnode()
{
	class node *p;
	p=(class node*)malloc(sizeof(class node));
	return p;
}
class node *insert(int a)
{
	class node *tem;
	tem=creatnode();
	tem->data=a;
	tem->left=NULL;
	tem->right=NULL;
	return tem;
}
void search(class node* t,int par)
{
	if(t==NULL)
		return;
	else if(t->data==par)
		temp=t;
	search(t->left,par);
	search(t->right,par);
}
int mirror(class node* tree1,class node *tree2,int key)
{
	if(tree1==NULL || tree2==NULL)
		return -1;
	else if(tree1->data==key)
		return tree2->data;
     else if(tree2->data==key)
     	return tree1->data;
     int ans;
     ans=mirror(tree1->left,tree2->right,key);
     if(ans!=-1)
     	return ans;
     return (mirror(tree1->right,tree2->left,key));
	
}

int main()
{int n,q,p,c;
	char ch;
	cin>>n>>q;
	root=insert(1);
while(n>1)
{
   cin>>p>>c>>ch;
   search(root,p);
   if(ch=='L')
   {
   	temp->left=insert(c);
   }
  else if(ch=='R')
   {
   	temp->right=insert(c);
   }
   n--;
}
while(q>0)
{
	int x;
	cin>>x;
	if(x==1)
	{
		cout<<"1\n";
	}
	else
	{int mi;
	    mi=mirror(root->left,root->right,x);
	    cout<<mi<<"\n";
	}
	q--;

}




	return 0;
}