#include <iostream>
using namespace std;

void sort(int arr[],int size)
{
	int l=0, h=(size-1),itr=0;
	while(itr<=h)
	{
		if(arr[itr]==0)
		{
			int temp;
			temp = arr[itr];
			arr[itr] = arr[l];
			arr[l] = temp;
			l++;
			itr++;
		}
		else if(arr[itr]==1)
		{
			itr++;
		}
		else if(arr[itr]==2)
		{
			int temp;
			temp = arr[itr];
			arr[itr] = arr[h];
			arr[h] = temp;
			h--;
		}
	}
}

int main()
{ int arr[] = {0,2,1,0,0,2,1,0};
  int size = sizeof (arr)/sizeof (int);
  sort(arr,size);
for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
cout<<endl;
	return 0;
}
