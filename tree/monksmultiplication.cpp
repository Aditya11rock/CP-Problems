#include<iostream>
using namespace std;
int main()
{int n,x;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
for(int c=0;c<n;c++)
{
	if(c<2)
	{
		printf("-1\n");
	}
	else
	{
		for(int i=0;i<c;i++)
		{
			for(int j=i;j<=c;j++)
			{
				if(ar[j]<ar[i])
				{
					int temp;
					temp=ar[i];
					ar[i]=ar[j];
					ar[j]=temp;
				}
			}
		}
		int z;
		z=(ar[c])*(ar[c-1])*(ar[c-2]);
		printf("%d\n",z);
	}


}


	return 0;
}