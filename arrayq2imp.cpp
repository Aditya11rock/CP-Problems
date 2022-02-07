#include <iostream>
using namespace std;
char killing(char arr[] , int size )
{int low = 0;
	for(int i=0;i<size;i++)
	{char temp;
		if(arr[i]==arr[i+1])
		{
			arr[i] = 0;
			arr[i+1] = 0;
			i++;
		}
		if(arr[i]!=arr[i+1])
		{
			temp = arr[i];
			arr[i] = 0;
			arr[low] = temp;
			low++;
		}
	}
return size = low,arr[low];
 
}
int main()
{int size;
	cin>>size;
	char arr[size] = {};
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	} 
killing( arr,size );
killing(arr,size);
for(int i=0;i<size;i++)
cout<<arr[i];

	return 0;
}