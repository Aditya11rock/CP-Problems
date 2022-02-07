#include <iostream>
using namespace std;
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void addone(int arr[], int size)
{
	arr[size-1] = arr[size-1] + 1;
	for(int i=(size-2);i>=0;i--)
	{
		arr[i] = arr[i] + arr[i+1]/10;
		arr[i+1] = arr[i+1]%10;
	}
	print(arr,size);

}

int main()
{int arr[] = {9,9,9};
  int size = sizeof (arr)/sizeof(int);
  addone(arr, size); 

	return 0;
}