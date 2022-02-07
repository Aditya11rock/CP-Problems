#include<iostream>
#include<queue>
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

void levelordertravers(class BinaryTree *p)
{

	queue<BinaryTree *> mad;
	mad.push(p);
	int cur=1;
	int next=0;
	while(!mad.empty())
	{
		class BinaryTree *temp;
		temp=mad.front();
		cout<<temp->val<<" ";
		mad.pop();
		cur--;
		if(temp->leftp!=NULL)
		{
			mad.push(temp->leftp);
			next++;
		}
		if(temp->rightp!=NULL)
		{
			mad.push(temp->rightp);
			next++;
		}
		if(cur==0)
		{
			cout<<endl;
			cur=next;
			next=0;
		}
	}

}

void binaryMirror(class BinaryTree *p)
{
	if(p)
	{
		binaryMirror(p->leftp);
		binaryMirror(p->rightp);

		class BinaryTree *temp;
		temp=p->leftp;
		p->leftp=p->rightp;
		p->rightp=temp;
	}

}

void binaryPreMirror(class BinaryTree *p)
{
	if(p)
	{
		class BinaryTree *temp;
		temp=p->leftp;
		p->leftp=p->rightp;
		p->rightp=temp;

		binaryPreMirror(p->leftp);
		binaryPreMirror(p->rightp);
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
	levelordertravers(root);
	binaryMirror(root);
	levelordertravers(root);
	binaryPreMirror(root);
	levelordertravers(root);




	return 0;
}