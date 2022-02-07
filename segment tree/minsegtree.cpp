#include<iostream>
using namespace std;

class node {
public:
	int minval;
	int leftrange;
	int rightrange;
	class node *left;
	class node *right;


};

class node *root=NULL;

class node *createnode()
{
	class node *p;
	p=new node;
	return p;

}

void buildminseg(class node *p, int a[],int l,int r,int c)
{
	class node *temp;

	temp=createnode();
	int val=a[l];
	for(int i=l;i<=r;i++)
	{
		if(a[l]<val)
		{
			val=a[l];
		}
	}

	temp->minval=val;
	temp->leftrange=l;
	temp->rightrange=r;
	if(root==NULL)
	{
		root=temp;
	}
	if(l!=r)
	{
		int q=(l+r)/2;
		buildminseg(temp,a,l,q,1);
		buildminseg(temp,a,q+1,r,2);
	}
	else{
		temp->left=NULL;
		temp->right=NULL;
	}

	if(c==1)
	{
		p->left=temp;

	}
	else if(c==2)
	{
		p->right=temp;
	}


}

void traverse(class node *p)
{
	cout<<p->minval<<" ("<<p->leftrange<<","<<p->rightrange<<")\n";
	if(p->left!=NULL)
	{
		traverse(p->left);
	}
	if(p->right!=NULL)
	{
		traverse(p->right);
	}


}

void update(class node *p,int val, int index)
{
	if(p->leftrange<=index && index<=p->rightrange)
	{
		if(p->minval>val)
		{
			p->minval=val;
			if(p->left!=NULL)
			{
				update(p->left,val,index);
			}
			if(p->right!=NULL)
			{
				update(p->right,val,index);
			}
		}
	}
}

int query(class node *p,int l,int r)
{
	if(p->leftrange>r || p->rightrange<l)
	{

		return -1;
	}
	else if(p->leftrange>=l && p->rightrange<=r)
	{
		
		return p->minval;
	}
	else{
			int lr=0,rr=0;
			if(p->left!=NULL)
			{
				lr=query(p->left,l,r);

			}
			if(p->right!=NULL)
			{
				rr=query(p->right,l,r);
			}
			if(lr==-1 )
			{
				if(rr==-1)
				{
					return -1;
				}
				else{
					return rr;
				}
			}
			else if(rr==-1)
			{
				if(lr==-1)
				{
					return -1;
				}
				else{
					return lr;
				}
			}
			else{
				 if(lr<=rr)
				 {
				 	return lr;
				 }
				 else{
				 	return rr;
				 }
			}
	}
}

int main()
{

int b[10];
for(int i=0;i<10;i++)
{

	b[i]=i+1;

}

buildminseg(root,b,0,9,0);
traverse(root);

update(root,1,8);
traverse(root);
int q;
cin>>q;
while(q--)
{
	int l,m;
	cin>>l>>m;
	int z=query(root,l,m);
	cout<<z<<"\n";
}


	return 0;
}