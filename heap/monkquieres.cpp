#include<iostream>
using namespace std;
int main()
{
	 int n;
	cin>>n;
	int a[n];
	int crent=0,front=0;
	while(n>0)
	{int q;
		cin>>q;
		if(q==1)
		{int t;
			cin>>t;
			a[crent]=t;
			int y;
			y=a[crent];
			for(int i=crent-1;i>=front && y<a[i];i--)
			{
				a[i+1]=a[i];
				a[i]=y;
			}
			crent=crent + 1;

		}
		else if(q==2)
        {
        	int value,d=0;
        	cin>>value;
        	int start,end;
        	start=front;
        	end=crent-1;
        	while(start<=end)
        	{int mid;
        		mid=(start + end)/2;
        		if(a[mid]==value)
        		{
        		 for(int i=mid;i<crent-1;i++)
        		 {
        		 	a[i]=a[i+1];
        		 }
        		 crent=crent - 1;
        		 d=d+1;
        		 break;
        		}
        		else if(a[mid]>value)
        		{
        			end=mid-1;
        		}
        		else if(a[mid]<value)
        		{
        			start=mid + 1;
        		}

        	}
        	if(start>=end && d==0)
        		{
        			cout<<"-1\n";
        		}

        }
        else if(q==3)
        {
        	if(crent>front)
        	{
               cout<<a[crent-1]<<"\n";
               crent=crent - 1;
        	}
        	else
        		cout<<"-1\n";
        }
        else
        { 
             if(front<crent)
             {
             	cout<<a[front]<<"\n";
             	front=front + 1;
             }
             else
             {
             	cout<<"-1\n";
             }
        }
        
    n--;
	}


	return 0;
}