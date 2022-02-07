#include <iostream>
using namespace std;

int main()
{ int arr[] = {16,17,4,3,5,2,3};
int size = sizeof (arr)/sizeof (int);
for(int i=0;i<(size);i++)
{  int max = 0;
	for(int j=(i+1);j<size;j++)
	{
		
		if(arr[j]>max)
		{
			max = arr[j];
		}
	}
	if(arr[i]>max)
		cout<<arr[i]<<" ";
	
	
}


	return 0;
}