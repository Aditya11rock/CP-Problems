#include<iostream>
#include<string.h>
using namespace std;
int main()
{int b[100],c=0;
	char *l;
	string s;
	getline(cin,s);
	
    int found=0 ;
    found=s.find(":");
    if(found==-1)
    {found=5;
    	s.erase(0,found);
    cout<<"output:"<<s<<"\n";
    }
    else
    {
    	s.erase(0,found);
    cout<<"output"<<s<<"\n";
    }
    
   
	return 0;
}