#include <iostream>
using namespace std;

void dupandmis(int arr[],int size)
{int check[100] = {};
for(int i=0;i<size;i++)
{
	check[arr[i]]++;
}
for(int i=1;i<size;i++)
{
	if(check[i]>1)
	{
		cout<<"duplicate no. is = "<<i<<endl;
	}
	if(check[i]==0)
	{
		cout<<"missing no. is = "<<i<<endl;
	}
}

}

int main()
{int arr[] = {2,1,2,5,4,7,8,8,7,7,10};
int size = sizeof (arr)/sizeof (int);

dupandmis(arr,size);

	return 0;
}