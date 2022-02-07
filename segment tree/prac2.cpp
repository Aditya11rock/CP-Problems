#include<iostream>
using namespace std;

class node {
public: 
	
	int maxval;
	class node *left;
	class node *right;

	int leftrange;
	int rightrange;


};

class node *root=NULL;

class node *createnode()
{
	class node *p;
	//p=(class node*)malloc(sizeof(class node));
	p=new node;

	return p;
}

void buildmaxseg(class node *p,int a[],int l,int r,int c)
{
	class node *temp;
	temp=createnode();
	int val=a[l];
	for(int i=l;i<=r;i++)
	{
		if(a[i]>val)
		{
			val=a[i];
		}
	}

	temp->maxval=val;
	temp->leftrange=l;
	temp->rightrange=r;
	
	if(root==NULL)
	{
		root=temp;
	}

	if(l!=r)
	{
		int q=(l+r)/2;
		buildmaxseg(temp,a,l,q,1);
		buildmaxseg(temp,a,q+1,r,2);


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
	cout<<p->maxval<<" ( "<<p->leftrange<<" , "<<p->rightrange<<" )\n";
	if(p->left!=NULL)
	{
		traverse(p->left);
	}
	if(p->right !=NULL)
	{
		traverse(p->right);
	}

}

void update(class node *p,int val,int index)
{

	if(p->leftrange<=index && index<=p->rightrange)
	{
		if(p->maxval<val)
		{
			p->maxval=val;
		}
		if(p->left !=NULL)
		{
			update(p->left,val,index);
		}
		if(p->right !=NULL)
		{
			update(p->right,val,index);
		}
	}

}

int query(class node *p,int l,int r)
{
	if(p->leftrange>r || p->rightrange<l)
	{
		return 0;
	}
	else if(p->leftrange>=l && p->rightrange<=r)
	{
		return p->maxval;
	}
	else{
			int lr=0,rr=0;
			if(p->left !=NULL)
			{
				lr=query(p->left,l,r);
			}
			if(p->right !=NULL)
			{
				rr=query(p->right,l,r);
			}
			if(lr>=rr)
			{
				return lr;
			}
			else{
				return rr;
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

	buildmaxseg(root,b,0,9,0);
	traverse(root);
	cout<<"out1 \n";
	//update(root,7,2);
	traverse(root);
	cout<<"out2\n";
	int z;
	z=query(root,2,5);
	cout<<z<<"\n";

	return 0;
}