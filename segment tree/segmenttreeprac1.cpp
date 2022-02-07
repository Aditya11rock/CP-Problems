#include<iostream>
using namespace std;

class node{

public:
	int val;
	int leftrange;
	int rightrange;
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

void buildseg(class node *p,int a[],int l,int r,int c)
{

	class node *temp;
	temp=createnode();
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum=sum + a[i];
	}
	temp->val=sum;
	temp->leftrange=l;
	temp->rightrange=r;
	if(l!=r)
	{
		int p=(l + r)/2;
		buildseg(temp,a,l,p,1);
		buildseg(temp,a,p+1,r,2);
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
	else if(c==0)
	{
		root=temp;
	}


}

void traverse(class node *p)
{
	cout<<p->val<<" leftrange = "<<p->leftrange<<" rightrange = "<<p->rightrange<<"\n";
	if(p->left !=NULL)
	{
		traverse(p->left);
	}
	if(p->right !=NULL)
	{
		traverse(p->right);
	}

}


int querysum(class node *p,int l,int r)
{
	if(p->rightrange<l || p->leftrange>r)
	{
		return 0;
	}
	else if(l<=p->leftrange && p->rightrange<=r)
	{
		//cout<<p->val<<"\n"<<p->leftrange<<" "<<p->rightrange<<"\n";
		return p->val;
	}
	else{

		return querysum(p->left,l,r) + querysum(p->right,l,r);

	}



}

void update(class node *p,int pos,int val)
{
	if(p->leftrange<=pos && pos<=p->rightrange)
	{
		
		p->val=p->val + val;

		if(p->left !=NULL)
		{
			update(p->left,pos,val);
		}
		if(p->right !=NULL)
		{
			update(p->right,pos,val);
		}
		

	}



}



int main()
{
	int n;
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<"work now"<<endl;

	buildseg(root,b,0,n-1,0);
	if(root==NULL)
	{
		cout<<"root is still null\n";
	}
	traverse(root);
	int r;
	cin>>r;
	while(r--)
	{
		int x,y;
		cin>>x>>y;
		cout<<querysum(root,x,y)<<"\n";
	}
	int q;
	cin>>q;
	while(q--){

		cout<<"update query\n";
		int x,y;
		cin>>x>>y;
		int w=x-b[y];
		b[y]=x;
		update(root,y,w);
		traverse(root);

	}



	return 0;
}