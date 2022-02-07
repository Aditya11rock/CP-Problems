#include <iostream>
using namespace std;
int main()
{
	int arr[] = {5 ,3 ,8 ,4 ,1 ,2 ,7 ,6};
	int size = 8;
	int minIndex;
	int temp;
 cout<<"unsorted array is : ";
   for(int i=0; i<size;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<(size -1);i++)
{
minIndex = i;
for(int j=i+1; j<size;j++)
{
	if(arr[minIndex]>arr[j])
	{
		minIndex = j;
	}	
}
temp = arr[minIndex];
arr[minIndex] = arr[i];
arr[i] = temp;

}
cout<<"sorted array is : ";
for(int i=0; i<size;i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;
	return 0;
}