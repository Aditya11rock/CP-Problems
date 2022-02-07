#include<iostream>
using namespace std;

class node
{public :
	int candies;
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
void insert(int a)
{class node *temp,*cand;
	temp=createnode();
	temp->candies=a;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		cand=root;
		while(cand!=NULL)
		{
			if(cand->candies>a)
			{
				if(cand->left==NULL)
				{
					cand->left=temp;
					break;
				}
				else
					cand=cand->left;
			}
			if(cand->candies<a)
			{
				if(cand->right==NULL)
				{
					cand->right=temp;
					break;
				}
				else
					cand=cand->right;
			}
		}
	}

}

bool find(class node *w,int key)
{
	while(w!=NULL)
	{
		if(w->candies>=key)
		{
			if(w->candies==key)
				return 1;
			else
				w=w->left;
		}
		else if(w->candies<=key)
		{
			if(w->candies==key)
				return 1;
			else
				w=w->right;
		}
	}
	return 0;
}

int main()
{int t;
	cin>>t;
while(t>0)	
  {
  	int n,m;
  cin>>n>>m;
  while(n>0)
  {int b;
  	cin>>b;
  	insert(b);
    n--;
  }
while(m>0)
{int d;
	cin>>d;
	if(find(root,d))
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
		insert(d);
	}
	
  m--;
}
t--;
}
	return 0;

}