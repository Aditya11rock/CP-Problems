#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
	 for(int i=0; i<size;i++)
  {
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void bubblesort( int arr[], int size)
{  
	
	int temp;
	 for(int i=0; i<(size -1);i++)
      {
          for(int j=0; j<(size-i-1);j++)
            {
	          if(arr[j]<arr[j+1])
	           {
	              temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
               }
             }
       }
}
int main()
{
	int arr[] = {9, 3, 1, 8, 6, 2, 5, 4, 7};
    int size = 9;
    cout<<"unsorted array is : ";
    printarray( arr, size);
     bubblesort( arr , size);
     cout<<"sorted array is : ";
     printarray( arr , size);
	return 0;
}