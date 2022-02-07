#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
        int n;
        cin>>n;
        int a[n][2];
        int disleft,cpet;
        cin>>disleft>>cpet;
        for(int i=0;i<n;i++)
        {	
            cin>>a[i][0]>>a[i][1];
         }
         int b=0,k=0;
         while(disleft!=0)
         {int d=0,l;
         	for(int i=k;disleft-a[i][0]<cpet;i++)
         	{
                if(a[i][1]>d)
                {
                	d=a[i][1];
                	l=i;
                	k=i;
                }
         	}
         	cpet=cpet-(disleft-a[l][0]);
         	cpet=cpet +a[l][1];
         	b=b+1;
         	disleft=a[l][0];
         	if((cpet-disleft)>0)
         		break;

         }
         cout<<b<<"\n";

		t--;
	}
	return 0;
}