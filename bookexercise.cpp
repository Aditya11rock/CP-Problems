#include<iostream>
#include<string>
using namespace std;

class book
{private :
	int exercise[30];
	string subject[30];
	int top;
public :
book()
{
  top=0;
}
void enter(int val)
{
	exercise[top]=val;
	cin>>subject[top];
	top=top+1;
}
void check()
{int min=exercise[0],d,c;
	for(int i=0;i<top;i++)
	{
        if(exercise[i]<min)
        {
        	min=exercise[i];
        	d=i;
        }
	}
	c=top-d-1;
cout<<c<<" "<<subject[d]<<endl;
for(int i=d;i<top-1;i++)
{
	exercise[i]=exercise[i+1];
	subject[i]=subject[i+1];
}
top=top-1;

}
};

int main()
{int n;
	cin>>n;
	book b1;
	while(n>0)
	{int a;
		cin>>a;
		if(a!=-1)
		{
           b1.enter(a);
		}
		else
		{
			b1.check();
		}

     n--;
	}

return 0;
}