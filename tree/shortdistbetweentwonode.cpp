#include<iostream>
using namespace std;

class BinaryTree{
public:
	int val;
	class BinaryTree *leftp;
	class BinaryTree *rightp;


};

class BinaryTree *root=NULL;

class BinaryTree *createNode()
{
	class BinaryTree *p;
	p=new BinaryTree;
	return p;
}

void buildSegmentTree(class BinaryTree *p,int x)
{

	class BinaryTree *temp;
	temp=createNode();
	temp->val=x;
	temp->leftp=NULL;
	temp->rightp=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else{
		class BinaryTree *temp2;
		temp2=root;

		while(temp2!=NULL)
		{
			if(temp2->val>x)
			{
				if(temp2->leftp==NULL)
				{
					temp2->leftp=temp;
					break;
				}
				else{
					temp2=temp2->leftp;
				}
			}
			else{
					if(temp2->rightp==NULL)
				{
					temp2->rightp=temp;
					break;
				}
				else{
					temp2=temp2->rightp;
				}
			}
		}

	}

}

int findlength(class BinaryTree *p,int x)
{
	if(p->val==x)
	{
		return 0;
	}
	else{
		if(p->val>=x)
		{
			return findlength(p->leftp,x) +1;
		}
		else{
			return findlength(p->rightp,x) +1;
		}

	}
}

void commonancestor(class BinaryTree *p,int x,int y)
{

	if(p->val>x && p->val>y)
	{
		commonancestor(p->leftp,x,y);
	}
	else if(p->val<x && p->val<y)
	{
		commonancestor(p->rightp,x,y);
	}
	else{
		int a=findlength(p,x);
		int b=findlength(p,y);
		cout<<"distance between x and y : "<<a+b<<endl;

	}

}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{

		int x;
		cin>>x;
		buildSegmentTree(root,x);


	}

	cout<<"over"<<endl;
	int p;
	cin>>p;
	while(p--)
	{
		int x,y;
		cin>>x>>y;
		commonancestor(root,x,y);
	}


	return 0;
}