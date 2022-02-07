#include <iostream>
using namespace std;
int main()
{  int k=0;
	int size = 12;

	char arr[size] ;
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}
for(int i=0;i<(size-1);i++)
{
	if(arr[i]==arr[i+1])
	{
		arr[i] = 0;
		arr[i+1] = 0;	
	}
}
char num[] = {};
int low = 0;
	for(int j=0;j<size;j++)
	{	char temp;
          if(arr[j]!=0)
          {
              temp = arr[j];
               num[low] = temp;
               low++;
          }
	}
for(int i=0;i<low;i++)
{
	if(num[i]==num[i+1])
	{
		num[i] = 0;
		num[i+1] = 0;
	}
}	
char ans[] = {};
int min = 0;
for(int j=0;j<low;j++)
	{	char temp;
          if(arr[j]!=0)
          {
              temp = num[j];
               ans[min] = temp;
               min++;
          }
	}
	for(int i=0;i<min;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"size of array is = "<<min<<endl;

	return 0;
}