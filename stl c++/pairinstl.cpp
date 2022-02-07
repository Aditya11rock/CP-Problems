#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{

pair<string,int> pat=make_pair("Aditya",21);//pair itself is a datatype which can be customize
vector<pair<string,int>> mad;
mad.push_back(pat);
mad.push_back(make_pair("flavia",31));
mad.push_back(make_pair("shakshi",6));
cout<<pat.first<<" "<<pat.second<<"\n";
for(int i=0;i<mad.size();i++)
{
	cout<<mad[i].first<<" "<<mad[i].second<<"\n";
}


	return 0;
}