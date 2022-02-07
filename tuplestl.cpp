#include<iostream>
#include<tuple>
using namespace std;
int main()
{tuple<string,int,float,char>b1;
	b1=make_tuple("rahul",13,12.256,'a');
	cout<<"\n"<<get<0>(b1)<<" "<<get<1>(b1)<<" "<<get<2>(b1)<<" "<<get<3>(b1);


}