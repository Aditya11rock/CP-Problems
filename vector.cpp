#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{vector<int>v1{1,2,5,3};
	cout<<v1.capacity()<<"\n";
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	//cout<<v1[0]<<"\n";
	cout<<v1.capacity();
	v1.pop_back();
	//cout<<"\n"<<v1[0];
	vector<string>v2{"idiot","dumb"};
	cout<<"\n"<<v2[0];
	cout<<"\n"<<v2[1];
	v2.push_back("i miss you dumbo");
	cout<<"\n"<<v2[2];
    cout<<"\n"<<v2.capacity();
    cout<<"\n"<<v1.front()<<"\n"<<v1.back()<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.at(3)<<endl;
   //v1.clear();
    cout<<v1.size()<<endl;
    vector<int>:: iterator it=v1.begin();
    v1.insert(it+3,35);
    int i=0;
    while(i<v1.size())
    {cout<<v1[i]<<" ";
        i++;
    }




}