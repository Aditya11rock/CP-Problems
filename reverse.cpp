#include<iostream>
using namespace std;
int main()
{int arr[1000]={};
int l=0;
for(int i=0;i<1000;i++)
{
	cin>>arr[i];
}
for(int i=0;i<1000;i++)
{if(arr[i]!=0)
	cout<<arr[i]<<" ";
	else
	{
		break;
	}
}

	return 0;
}