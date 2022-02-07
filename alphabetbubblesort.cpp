#include <iostream>
using namespace std;

void alphabetsort(char arr[],int size)
{ char temp;
	for(int i=0;i<(size-1);i++)
	{
		for(int j=0;j<(size-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;}
			}
		}
}	
int main()
{ 
 char arr[26];
  int size = 26;
  cout<<"unsorted alphabets are : ";
  for(int i=0;i<size;i++)
  {cin>>arr[i];  }
 alphabetsort(arr , size);
 cout<<"sorted alphabets are : ";
 for(int i=0;i<size;i++)  
{
	cout<<arr[i]<<" ";
}
cout<<endl;


	return 0;
}