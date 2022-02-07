 #include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   for (int i=1 ,k=1;i<=n;i++ ,k=1)
   {
   	for(int j=1;j<=n;j++)
   		if(j<=n-i)
   			cout<<" ";
   		while(k!=2*i)
   			
   		{if((k==1)  || (k==(2*i)-1) )
   			{cout<<i;}
   		else
   			{cout<<"0";}
   		k++;}
         
   		cout<<endl;


   }

	return 0;
}