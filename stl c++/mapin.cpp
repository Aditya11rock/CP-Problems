#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main()
{
	map<string,int,std::greater<>> vij;

	vij["aditya"]=98;
	vij["ashok"]=45;
	vij["puc"]=35;
	vij.insert(make_pair("bot",85));
	for(auto it:vij)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}

	map<string,vector<int>> mak;
	mak["ron"].push_back(49);
	mak["ron"].push_back(59);
	mak["bas"].push_back(24);
	mak["bas"].push_back(45);
	mak["pan"].push_back(56);
	for(auto it:mak)
	{
		cout<<it.first<<"\n";
		for(int i=0;i<it.second.size();i++)
		{
			cout<<it.second[i]<<" ";
		}
		cout<<endl;
	
	}


	return 0;
}
