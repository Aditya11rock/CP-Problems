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

void buildTree(class BinaryTree *p,int x)
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
			if(temp2->val>=x)
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

void delNode(class BinaryTree *p,int x)
{
	if(root->val==x)
	{
		root=NULL;
	}
	else{
			class BinaryTree *temp,*temp2;
			temp=root;
			while(temp!=NULL)
			{
				if(temp->val>=x)
				{
					temp2=temp->leftp;
					if(temp2->val==x)
					{
						temp->leftp=NULL;
						break;
					}
					else{
						temp=temp->leftp;
					}
				}
				else{
						temp2=temp->rightp;
					if(temp2->val==x)
					{
						temp->rightp=NULL;
						break;
					}
					else{
						temp=temp->rightp;
					}
				}
			}
	}
}

void printTree(class BinaryTree *p)
{
	cout<<p->val<<endl;
	if(p->leftp!=NULL)
	{
		printTree(p->leftp);
	}
	if(p->rightp!=NULL)
	{
		printTree(p->rightp);
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
		buildTree(root,x);
	}

	printTree(root);
	cout<<"build complete\n";
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		delNode(root,x);
		printTree(root);
	}


	return 0;
}