#include<iostream>
#include<queue>
using namespace std;

class BinaryTree {

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

void buildBinaryTree(int x)
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
		class BinaryTree *temp2=root;
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
			else if(temp2->val<x)
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
				break;
			}
		}

	}

}

void preOrderTraversal(class BinaryTree *p)
{
	cout<<p->val<<" ";
	if(p->leftp!=NULL)
	{
		preOrderTraversal(p->leftp);
	}
	if(p->rightp!=NULL)
	{
		preOrderTraversal(p->rightp);
	}
}

void inOrderTraversal(class BinaryTree *p)
{
	if(p->leftp!=NULL)
	{
		inOrderTraversal(p->leftp);
	}
	cout<<p->val<<" ";
	if(p->rightp!=NULL)
	{
		inOrderTraversal(p->rightp);
	}

}

void postOrderTraversal(class BinaryTree *p)
{
	if(p->leftp!=NULL)
	{
		postOrderTraversal(p->leftp);
	}
	if(p->rightp!=NULL)
	{
		postOrderTraversal(p->rightp);
	}
	cout<<p->val<<" ";


}

void levelOrderTraversal(class BinaryTree *p)
{

	queue<BinaryTree *> mad;
	mad.push(p);
	while(!mad.empty())
	{
		class BinaryTree *temp;
		temp=mad.front();
		mad.pop();
		cout<<temp->val<<" ";
		if(temp->leftp!=NULL)
		{
			mad.push(temp->leftp);
		}
		if(temp->rightp!=NULL)
		{
			mad.push(temp->rightp);
		}
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

	preOrderTraversal(root);
	cout<<endl;
	inOrderTraversal(root);
	cout<<endl;
	postOrderTraversal(root);
	cout<<endl;
	levelOrderTraversal(root);
	cout<<endl;


	return 0;
}