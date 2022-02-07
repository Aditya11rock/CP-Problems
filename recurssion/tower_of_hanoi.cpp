#include<iostream>
using namespace std;
void tower(int n,char start, char dest,char help)
{
	if(n==1)
	{
		cout<<"move disk 1 from "<<start<<" to "<<dest<<endl;
	}
	if(n>1)
	{tower(n-1,start,help,dest);
	cout<<"move disk "<<n<<" from "<<start<<" to "<<dest<<endl;
	tower(n-1,help,dest,start);
}
}

int main()
{
	int n;
	cout<<"enter no. of discs present\n";
	cin>>n;
	tower(n,'A','C','B');

}