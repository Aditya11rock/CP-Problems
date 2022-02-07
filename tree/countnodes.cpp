#include<iostream>
#include<queue>
#include<math.h>

using namespace std;

class BinaryTree{

public:
	int val;
	class BinaryTree *leftp;
	class BinaryTree *rightp;


};
class BinaryTree *root=NULL;

class BinaryTree *createNode(){

class BinaryTree *p;
p=new BinaryTree;
return p;

}

void buildBinaryTree(int x)
{
	class BinaryTree *temp;
	temp=createNode();
	temp->val=x;
	temp->rightp=NULL;
	temp->leftp=NULL;

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

void printGraph(class BinaryTree *p)
{
	if(p)
	{
		cout<<p->val<<" ";
		printGraph(p->leftp);
		printGraph(p->rightp);

	}

}

int countNode(class BinaryTree *p)
{
	if(p->leftp!=NULL && p->rightp!=NULL)
	{
		return 2+countNode(p->leftp)+countNode(p->rightp);
	}
	else if(p->leftp!=NULL)
	{
		return 1 + countNode(p->leftp);
	}
	else if(p->rightp!=NULL)
	{
		return 1 + countNode(p->rightp);
	}
	else{
		return 0;
	}
}

int getTheHeight(class BinaryTree *p)
{
	if(p)
	{
		int ld=getTheHeight(p->leftp);
		int rd=getTheHeight(p->rightp);
		if(ld>=rd)
		{
			return ld + 1;
		}
		else{
			return rd +1;
		}
	}
	else{
		return 0;
	}
}

void checkComplete(class BinaryTree *p)
{
	if(p->leftp==NULL && p->rightp==NULL)
	{

	}
	else if((p->leftp!=NULL && p->rightp==NULL)||(p->leftp==NULL && p->rightp!=NULL))
	{
		cout<<"one node";
	}
	else{
		checkComplete(p->leftp);
		checkComplete(p->rightp);
	}
}

void withMaxnode(class BinaryTree *p)
{
	if(p)
	{
		queue<BinaryTree *> mad;
		int max=1;
		int curr=1;
		int next=0;
		int b=0,c=0;
		mad.push(p);
		while(!mad.empty())
		{
			class BinaryTree *temp;
			temp=mad.front();
			mad.pop();
			curr--;
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
			if(curr==0)
			{
				c++;
				if(next>max)
				{
					b=c;
					max=next;
				}
				curr=next;
				next=0;
				
			}
		}

		cout<<"no. of node : "<<max<<" level : "<<b<<endl;

	}
	else{
		cout<<"no. of node : "<<-1<<" level : "<<-1<<endl;
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

	printGraph(root);
	int a;
	a=countNode(root)+1;
	cout<<endl;
	cout<<a<<endl;
	int height=getTheHeight(root);

	cout<<"height : "<<height<<endl;
	int actcount=0;
	for(int i=0;i<height;i++)
	{
		actcount=actcount + pow(2,i);
	}
	cout<<actcount<<endl;
	if(a<actcount)
	{
		cout<<"not complete"<<endl;
	}
	else{
		cout<<"complete\n";
	}

	checkComplete(root);
	withMaxnode(root);
	

	return 0;
}