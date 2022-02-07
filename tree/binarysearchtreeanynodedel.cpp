#include<iostream>
using namespace std;

class BinaryTree{
public:
	int val;
	class BinaryTree *leftp;
	class BinaryTree *rightp;
	class BinaryTree *parent;

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
	temp->parent=NULL;
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
					if(temp2->leftp!=NULL)
					{
						temp2=temp2->leftp;
					}
				else{
					temp->parent=temp2;
					temp2->leftp=temp;

					break;
					}
			}
			else if(temp2->val<x)
			{
					if(temp2->rightp!=NULL)
					{
						temp2=temp2->rightp;
					}
					else{
						temp->parent=temp2;
						temp2->rightp=temp;
						break;
					}
			}
			else{
				 break;
			}
		}
	}


}

void printTree(class BinaryTree *p)
{
	cout<<p->val<<" ";
	if(p->leftp!=NULL)
	{
		printTree(p->leftp);
	}
	if(p->rightp!=NULL)
	{
		printTree(p->rightp);
	}


}

void noofchild(class BinaryTree *p)
{
	int q=0;
	if(p->leftp!=NULL)
	{
		q=q+1;
	}
	if(p->rightp!=NULL)
	{
		q=q+1;
	}
	cout<<"NO. OF CHILD : "<<q<<endl;
	if(q==0)
	{
		class BinaryTree *temp;
		temp=p->parent;
		if(temp->leftp==p)
		{
			temp->leftp=NULL;
		}
		else{
			temp->rightp=NULL;
		}
	}
	else if(q==1)
	{
		class BinaryTree *temp;
		temp=p->parent;
		if(temp->leftp==p)
		{
			if(p->leftp!=NULL)
			{
				cout<<"1";
				temp->leftp=p->leftp;
				class BinaryTree *temp5=p->leftp;
				temp5->parent=p->parent;
			}
			else{
				cout<<"2";
				temp->leftp=p->rightp;
				class BinaryTree *temp5=p->rightp;
				temp5->parent=p->parent;
			}
			
		}
		else{

			
				if(p->leftp!=NULL)
				{
					cout<<"3";
					temp->rightp=p->leftp;
					class BinaryTree *temp5=p->leftp;
					temp5->parent=p->parent;
				}
				else{
					cout<<"4";
					temp->rightp=p->rightp;
					class BinaryTree *temp5=p->rightp;
					temp5->parent=p->parent;
				}

		}
	}

	else{

		class BinaryTree *temp1=p->rightp;
		while(temp1->leftp!=NULL)
		{
			temp1=temp1->leftp;
		}
		if(temp1->rightp==NULL)
		{
			int val2=temp1->val;
			class BinaryTree *temp3=temp1->parent;
			if(temp3->leftp==temp1)
			{
				temp3->leftp=NULL;
			}
			else{
				temp3->rightp=NULL;

			}
			p->val=val2;
		}
		else{
			int val2=temp1->val;

			class BinaryTree *temp3=temp1->parent;
			if(temp3->leftp==temp1)
			{
				temp3->leftp=temp1->rightp;
				class BinaryTree *temp4=temp1->rightp;
				temp4->parent=temp1->parent;
			}
			else{
				temp3->rightp=temp1->rightp;
				class BinaryTree *temp4=temp1->rightp;
				temp4->parent=temp1->parent;
			}
			p->val=val2;
		}

	}

}

int findNode(class BinaryTree *p,int x)
{
	if(p->val==x)
	{
		noofchild(p);
		return 1;
	}
	else if(p->val>x)
	{
		if(p->leftp==NULL)
		{
			return -1;
		}
		else
		{
			return findNode(p->leftp,x);
		}
	}
	else{
			if(p->rightp==NULL)
			{
				return -1;
			}
			else{
				return findNode(p->rightp,x);
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

	printTree(root);
	cout<<endl;
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		cout<<findNode(root,x)<<endl;
		printTree(root);
		cout<<endl;
	}



	return 0;
}