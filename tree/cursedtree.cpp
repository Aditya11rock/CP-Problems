#include<iostream>
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

int findmax(class node *q,int val,int max)
{
    while(q!=NULL)
    {
    	if(q->data==val)
    	{
    		if(q->data>max)
    		{
    			max=q->data;
    			break;
    		}
    		else
    			break ;
    	}
    	else
    	{
    		if(q->data>max)
    		{
    			max=q->data;
    			if(q->data>val)
    				q=q->left;
    			else
    				q=q->right;
    		}
    		else
    		{
    			if(q->data>val)
    				q=q->left;
    			else
    				q=q->right;
    		}

    	}
    }
    return max;

}

int main()
{int n,x,y;
	cin>>n;
	while(n>0)
	{int b;
		cin>>b;
		insert(b);
		n--;
	}
cin>>x>>y;
while(1)
{
	int i,j;
		i=findmax(root,x,0);
		j=findmax(root,y,0);
		if(i>j)
		 cout<<i<<"\n";
		else
			cout<<j<<"\n";
		break;
}
	return 0;
}