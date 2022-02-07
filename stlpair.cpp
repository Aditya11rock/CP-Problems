#include<iostream>
using namespace std;
int main()
{
	pair<string ,int>b1;
	b1=make_pair("rahul",10);
	cout<<b1.first<<" "<<b1.second;
	pair<string,float>b2;
	b2=make_pair("you can win",320.0);
	cout<<" "<<b2.first<<" "<<b2.second;
	pair<string,string>b3;
	b3=make_pair("gaurav","gadha");
	cout<<b3.first<<" "<<b3.second;
	pair<int,int>b4;
	b4=make_pair(12,45);
	cout<<b4.first<<" "<<b4.second;
	pair<char,char>b5;
	b5=make_pair('a','b');
	cout<<b5.first<<" "<<b5.second;
	pair<float,float>b6;
	b6=make_pair(12.56,36.45);
	cout<<b6.first<<" "<<b6.second;


}