#include<iostream>
using namespace std;

class node
{public:
	int data;
	class node *left;
    class node* right;
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
	class node *temp,*par; 
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
 	par=root;
 	while(par!=NULL)
 	{
 		if(par->data>a)
 		{
 			if(par->left==NULL)
 				{
 					par->left=temp;
 				    break;	
                }
              else
              par=par->left;  
 		}
 		if(par->data<a)
 		{
 			if(par->right==NULL)
 				{
 					par->right=temp;
 				    break;	
                }
              else
              par=par->right;  
 		}
 	}
 }
}
int maxdepth(class node *l)
{
	if(l==NULL)
		return 0;
	else
	{
		int ldepth=maxdepth(l->left);
		int rdepth=maxdepth(l->right);
		if(ldepth>rdepth)
			return ldepth+1;
		else
			return rdepth+1;
	}
}
int main()
{
 int t;
 cin>>t;
 while(t>0) 
 { int n;
  cin>>n;
  while(n>0)
  {int b;
  	cin>>b;
  	insert(b);
  	n--;
  }
int c;
c=maxdepth(root);
cout<<c<<endl;
t--;
}
	return 0;
}