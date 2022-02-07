#include<iostream>
#include<string.h>
using namespace std;

bool find(char a[],char b[])
{
char *p;
p=strstr(a,b);

if(p!=NULL)
{
	return 1;
}
	return 0;

}

int main()
{
	int T;
	cin>>T;
  char q;
  q=cin.get();
    for(int i=0;i<T;i++)
     { 
 	        char jhool[200];
              char jadoo[100];

              cin.getline(jhool,200);
                cin.getline(jadoo,100);
               int val=strlen(jhool);
              int len=strlen(jadoo);
              char e[val],f[len];
              strncpy(e,jhool,val);
              strncpy(f,jadoo,len);
                 if(find(e,f))
                    {
	                    cout<<"YES\n";
                     }
                     else
                        {
                             cout<<"NO\n";
                         }

   }
return 0;


}