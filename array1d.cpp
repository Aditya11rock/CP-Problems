#include <iostream>

using namespace std;
int main()
{int arr[8]={35,26,484,72,46,5,24,47};
	int large=35;
for(int i=0;i<8;i++)
{	if(arr[i]>large)
   {
   	large=arr[i];
   }
}
cout<<large;

	return 0;
}