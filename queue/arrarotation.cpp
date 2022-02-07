#include<iostream>
#include<math.h>
using namespace std;
#define mod 1000000007
#define ll long long int

int getinvent(ll gas,ll answer,ll modnumber)
{
	ll result,diff,num;

	num=answer%modnumber;
	num--;

	diff=((gas-1)/modnumber)*modnumber;
	if(num>diff)
	{
		result=(diff+1)*((gas-1)/modnumber +1)+(num - diff)*((gas-1)/modnumber);
	}
	else{

		result=((gas-1)/modnumber +1)*(num+1);

	}

	for(int i=num+1;i<gas;i+=modnumber)
	{
		result++;
		if(i==answer)
		{
			return result;
		}
	}

	return 0;


}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		ll gas,answer,modnumber;
		cin>>gas>>answer>>modnumber;

		cout<<getinvent(gas,answer,modnumber)<<endl;

	}


	return 0;
}