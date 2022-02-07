#include<iostream>
using namespace std;
class node
{public:
	int parent;
	class node *a[20];
	int front;
	int rear;
};
class node *root=NULL;
class node *tem=NULL;
class node *createnode()
{
	class node *p;
	p=(class node*)malloc(sizeof(class node));
	return p;
}

class node *insert(int x)
{
	class node *temp;
	temp=createnode();
	temp->parent=x;
	temp->front=-1;
	temp->rear=-1;
	return temp;
}
void search(int par,class node *p)
{
	if(p->parent==par)
	{
		tem=p;
	}
	else
	{
		if(p->front!=-1)
		{
			for(int i=p->front;i<p->rear;i++)
			{
				search(par,p->a[i]);
			}
		}
		else if(p->front==-1)
			return;
	
	}
}

int find(int key,class node *q)
{
	if(q->parent==key)
	{  cout<<q->parent<<" ";
		q->front=-1;
		q->rear=-1;
		q->parent=-1;
		return 1;

	}
	else
	{
         if(q->front!=-1)
         {
         	for(int i=q->front;i<=q->rear;i++)
         	{int a;
         		a=find(key,q->a[i]);
         		if(a==1)
         			return a;

         	}
         }
         if(q->front==-1)
         	return 5;
	}
	return 5;
}

int sho(int z[],class node *t,int t1)
{
	int c=0;
	for(int i=0;i<t1;i++)
	{int l=0;
		l=find(z[i],t);
		if(l==1)
			{
				c=c+1;
			}
	}
	return c;
}

void display(class node *u)
{
	cout<<u->parent<<" ";
	if(u->front==-1)
		return;
	else
	{
		for(int i=u->front;i<=u->rear;i++)
		{
			display(u->a[i]);
		}
	}
}

int main()
{ 
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 	int a;
 	cin>>a;
 	if(a==-1)
 	{
 		root=insert(i);
 	}
 	else
 	{
 		search(a,root);
 		if(tem->front==-1)
 		{
 			tem->front=tem->front + 1;
 			tem->rear=tem->rear + 1;
 			tem->a[tem->rear]=insert(i);
 		}
 		else if(tem->front!=-1)
 		{
           tem->rear=tem->rear +1;
           tem->a[tem->rear]=insert(i);

 		}
 	}
 }
 display(root);
// cout<<"\nend";
/*int w,y;
cin>>w;
int arr[w];
for(int i=0;i<w;i++)
{
	cin>>arr[i];
	}
y=sho(arr,root,w);
cout<<"\n"<<y;*/
	return 0;

}