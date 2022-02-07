#include <iostream>
using namespace std;

int read(int arr[], int n)
{
	int read[100] = {};
	for(int i=0;i<n;i++)
	{
		read[arr[i]]++;
	}

for(int i=1;i<n;i++)
   {
   	if(read[i]>=(n/3))
   	  {
   	  	return i;

   	  	break;
   	  }

   }
return -1; 
}

int main()
{
	int n;
	cin>>n;
	int arr[n] = {};
	for(int i=0;i<n;i++)
       {
       	cin>>arr[i];
       }
   cout<<read(arr,n)<<endl;

    return 0;

}