#include<iostream>
using namespace std;

bool check(int x,int y,int z,int p)
{
	if(x>p || y>p)
	{
		if(x>p)
		{
			x=p;
			int a;
			a=check(x,y,z,p);
			if(a==1)
				return 1;
		
		}
	}
	if(x==y)
		return 1;
	else
	{
		if(x<=z  && z<=y)
		{
			return 1;
		}
		else if(y<x)
		{int c=x;
			while(c!=y)
			{
				if(c==z)
					return 1;
				else if(c>=p)
					c=0;
				else
					c++;
			}

		}
		else if(z>x && z>y)
			return 0;
	}
	
	return 0;
}

int main()
{
int t;
cin>>t;
while(t>0)
{
	int n,m,u=0;
	cin>>n>>m;
	int a[m][2];
	for(int i=0;i<m;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++)
	{int b=0;
        for(int j=0;j<m;j++)
        {
           int d;
           d=check(a[j][0],a[j][1],i,n);
           if(d==1)
           {
           	b=b+1;
           	if(b==2)
           		break;
           }


        }

        if(b==1)
           {
           	 cout<<"YES\n";
           	 u=u+1;
           	 break;
           }

	}
	if(u==0)
	{
		cout<<"NO\n";
	}


	t--;
	
}

	return 0;
}