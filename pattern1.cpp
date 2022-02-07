  #include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
		if(j<=(n-i)+1)
		cout<<"*";
	else
		cout<<" ";
	for(int k=1;k<=n;k++)
		if(k<=i-1)
			cout<<" ";
		else
			cout<<"*";
        cout<<endl;}
    for(int l=1;l<=n;l++)    
  {
	for(int j=1;j<=n;j++)
		if(j<=l)
		cout<<"*";
	else
		cout<<" ";
	for(int k=1;k<=n;k++)
		if(k<=n-l)
			cout<<" ";
		else
			cout<<"*";
        cout<<endl;}
   
      
   
    


return 0;
}