#include<iostream>
#include<map>
using namespace std;
int main()
{ map<string,int>l1 {{"aaditya",10},{"aananya",24}};//direct initialization can be done
	l1["aditya"]=19;   //this way values can be assigned
	l1["banku"]=10;
	l1["casley"]=22;
	l1.insert(pair<string,int>("rahul",14));//insert function to enter data using pair stl
	map<string,int>::iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<p->first<<" "<<p->second<<endl;
		p++;
	}
cout<<l1.at("banku")<<"\n";//at() function to direct access the data
cout<<"no. of data in the list are = "<<l1.size()<<endl;//this gives the size of the map
cout<<l1.empty()<<endl;//tells whether map is empty or not



}