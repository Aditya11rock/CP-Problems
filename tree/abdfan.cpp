#include<iostream>
//#include<bit/c++>
using namespace std;

int main()
{int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a,a+n);
	/*for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[i])
			{int temp;
				temp=a[i];
				a[i]=a[j];
              a[j]=temp;
			}
		}
	}*/
	int b;
	cin>>b;
	while(b>0)
	{
		int c;
		char d;
		cin>>c>>d;
		if(d=='S')
		{
			cout<<a[c-1]<<"\n";
		}
		else
		{
			cout<<a[n-c]<<"\n";
		}
     b--;
	}


	return 0;
}