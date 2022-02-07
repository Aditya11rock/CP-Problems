#include<iostream>
using namespace std;

class tower
{public:
	int rear=-1;
	int front = 0;
	int t;
	int arr[10000];
	int max=0;
	void get(int a)
	{
        for(int i=0;i<a;i++)
        {
        	cin>>arr[i];
        }
        t=a;
        check(a);
	}
	void check(int q)
	{int z=0;
		for(int i=0;i<q;i++)
		{max=arr[front];
           if(!find(max))
           {
           	 front=front+1;
           	 cout<<"\n"; 
           }
           else
           {
               for(int i=z;i<=front;i++)
               {
               	for(int j=i;j<=front;j++)
                	{int p;
               		   if(arr[j]>arr[i])
               		   {
               		   	 p=arr[i];
               		   	 arr[i]=arr[j];
               		   	 arr[j]=p;
               		   }

                	}
               }


                    for(int j=z;j<=front;j++)
                    {  
                      if(find(arr[j]))	
                    	{cout<<arr[j]<<" ";
                    	   z=z+1;
                    	}
                    }
               cout<<"\n";
               front=front+1;
           }

		}
	}
bool find(int p)
{
	for(int j=front+1;j<t;j++)
	{
		if(arr[j]>p)
		{
			return 0;
			break;
		}
	}
	return 1;
}

};

int main()
{int n;
	cin>>n;
	tower t1;
	t1.get(n);



	return 0;
}