#include<iostream>
using namespace std;

class BinaryTree{
public :
	int val;
	class BinaryTree *leftp;
	class BinaryTree *rightp;


};

class BinaryTree *root=NULL;

class BinaryTree *createnode()
{
	class BinaryTree *p;
	p=new BinaryTree;
	return p;

}

void buildBinaryTree(int mad)
{
	class BinaryTree *temp;
	temp=createnode();
	temp->val=mad;
	temp->leftp=NULL;
	temp->rightp=NULL;

	if(root==NULL)
	{
		root=temp;
	}
	else{

		class BinaryTree *temp2=root;
		while(temp2!=NULL)
		{
			if(temp2->val<=mad)
			{
				if(temp2->rightp==NULL)
				{
					temp2->rightp=temp;
					break;
				}
				else{
					temp2=temp2->rightp;
				}
			}
			else{
					if(temp2->leftp==NULL)
					{
						temp2->leftp=temp;
						break;
					}
					else{
						temp2=temp2->leftp;
					}
			}
		}
	


	}



}


void traverse(class BinaryTree *p)
{
	cout<<p->val<<endl;
	if(p->leftp!=NULL)
	{
		traverse(p->leftp);
	}
	if(p->rightp!=NULL)
	{
		traverse(p->rightp);
	}
}

int maxdepth(class BinaryTree *p)
{
	if(p==NULL)
	{
		return 0;
	}
	else{

		int ldepth=maxdepth(p->leftp);
		int rdepth=maxdepth(p->rightp);
		if(ldepth>=rdepth)
		{
			return ldepth+1;
		}
		else{
				return rdepth +1;
		}

	}


}


void lowestcommonancestor(class BinaryTree *p,int x,int y)
{
	if(p->val>x && p->val>y)
	{
		lowestcommonancestor(p->leftp,x,y);
	}
	else if(p->val<y && p->val<x)
	{
		lowestcommonancestor(p->rightp,x,y);
	}
	else{
		cout<<p->val<<" is common ancestor of "<<x<<" "<<y<<endl;
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
		buildBinaryTree(x);
	}


	traverse(root);

	cout<<maxdepth(root)<<endl;
	cout<<endl;
	int p;
	cin>>p;
	while(p--)
	{
		int x,y;
		cin>>x>>y;
		lowestcommonancestor(root,x,y);
		


	}


	return 0;
}