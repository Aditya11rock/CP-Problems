#include<iostream>
using namespace std;

class Segtree{
public:
	int leftr;
	int rightr;
	int val;
	class Segtree *leftp;
	class Segtree *rightp;


};

class Segtree *root=NULL;

class Segtree *createnode()
{
	class Segtree *p;
	p=new Segtree;
	return p;

}

void buildsegtree(int a[][2],int l,int r,class Segtree *p,int c)
{
	class Segtree *temp;
	temp=createnode();
	temp->leftp=NULL;
	temp->rightp=NULL;
	int s=1;
	for(int i=l;i<=r;i++)
	{
		s=s*a[i][1];
		
	}
	temp->val=s;
	temp->leftr=l;
	temp->rightr=r;
	if(root==NULL)
	{
		root=temp;
	}
	if(l!=r)
	{
		int p=(l+r)/2;
		buildsegtree(a,l,p,temp,1);
		buildsegtree(a,p+1,r,temp,2);
	}
	if(c==1)
	{
		p->leftp=temp;
	}
	else if(c==2)
	{
		p->rightp=temp;
	}

}

void printseg(class Segtree *p)
{
	cout<<p->leftr<<" "<<p->rightr<<" "<<p->val<<"\n";
	if(p->leftp!=NULL)
	{
		printseg(p->leftp);
	}
	if(p->rightp!=NULL)
	{
		printseg(p->rightp);
	}
}

int multirange(class Segtree *p,int l,int r)
{

	if(p->leftr>r || p->rightr<l)
	{
		return 1;
	}
	else if(p->leftr>=l && p->rightr<=r)
	{
		return p->val;
	}
	else{
		return (multirange(p->leftp,l,r))*(multirange(p->rightp,l,r));
	}

}

int main()
{
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0];
		for(int j=(a[i][0])/2;j>=1;j--)
		{
			if(a[i][0]%j==0)
			{
				a[i][1]=j;
				break;
			}
		}
		
	}
	int t;
	buildsegtree(a,0,n-1,root,0);
	//printseg(root);
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		int ans;
		ans=multirange(root,l-1,r-1);
		ans=ans%(1000000007);
		cout<<ans<<"\n";

	}



	return 0;
}