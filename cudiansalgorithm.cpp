#include <iostream>
#include<climits>
using namespace std;

int maxsum(int arr[], int size)
{
	int finalmax = INT_MIN, currentmax = 0;
	
	for(int i=0;i<size;i++)
	{
		currentmax = currentmax + arr[i];
		if(currentmax > finalmax)
		{
			finalmax = currentmax;
		}
		if(currentmax < 0)
		{
			currentmax = 0;
		}
	}
	return finalmax;
}

int main()
{int arr[] = {-2,1,-3,4,-1,2,1,-5,4,3,5,-5};
int size = sizeof (arr)/sizeof(int);

cout<<"max sum is = "<<maxsum(arr,size)<<endl;


	return 0;
}