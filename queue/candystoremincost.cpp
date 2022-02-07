#include <iostream>
#include<math.h>
#include<string>
using namespace std;
#define ll long long 
#define mod 1000000007

/*long long binpower(long long b) {
    ll a=2;
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res % mod;
}
*/
int main()
{
    int z;
    cin>>z;
    while(z--)
    {

        string b1,b2,b3;
        cin>>b1>>b2>>b3;
        int a[3][3],c=0,x=0,y=0,t=0;
        for(int i=0;i<3;i++)
        {
            if(b1[i]=='X')
            {
                a[0][i]=1;
                x++;
            }
            else if(b1[i]=='O'){
                a[0][i]=0;
                y++;
            }
            else{
                a[0][i]=2;
                c++;
            }
            if(b2[i]=='X')
            {
                a[1][i]=1;
                x++;
            }
            else if(b2[i]=='O')
            {
                a[1][i]=0;
                y++;
            }
            else{
                a[1][i]=2;
                c++;
            }
            if(b3[i]=='X')
            {
                a[2][i]=1;
                x++;
            }
            else if(b3[i]=='O')
            {
                a[2][i]=0;
                y++;
            }
            else{
                a[2][i]=2;
                c++;
            }
        }

        if(y>x)
        {
            cout<<3<<"\n";
            continue;
        }
        if((x-y)>1)
        {
            cout<<3<<"\n";
            continue;
        }


        int p=0;
        if(((a[0][0]==1)&&(a[0][1]==1)&&(a[0][2]==1)))
        {
            p++;
            t=5;
        }
        else if(((a[0][0]==0)&&(a[0][1]==0)&&(a[0][2]==0)))
        {
            p++;
            t=4;
        }
        if((a[1][0]==1 && a[1][1]==1 && a[1][2]==1))
        {
            p++;
            t=5;
        }
        else if(a[1][0]==0 && a[1][1]==0 && a[1][2]==0)
        {
            p++;
            t=4;
        }
        if((a[2][0]==1 && a[2][1]==1 && a[2][2]==1))
        {
            p++;
            t=5;
        }
        else if(a[2][0]==0 && a[2][1]==0 && a[2][2]==0)
        {
            p++;
            t=4;
        }
        if((a[0][0]==1 && a[1][0]==1 && a[2][0]==1))
        {
            p++;
            t=5;
        }
        else if(a[0][0]==0 && a[1][0]==0 && a[2][0]==0)
        {
            p++;
            t=4;
        }
        if((a[0][1]==1 && a[1][1]==1 && a[2][1]==1))
        {
            p++;
            t=5;
        }
        else if(a[0][1]==0 && a[1][1]==0 && a[2][1]==0)
        {
            p++;
            t=4;
        }
        if((a[0][2]==1 && a[1][2]==1 && a[2][2]==1))
        {
            p++;
            t=5;
        }
        else if(a[0][2]==0 && a[1][2]==0 && a[2][2]==0)
        {
            p++;
            t=4;
        }

        if((a[0][0]==1 && a[1][1]==1 && a[2][2]==1))
        {
            p++;
            t=5;
        }
        else if(a[0][0]==0 && a[1][1]==0 && a[2][2]==0)
        {
            p++;
            t=4;
        }
        if((a[0][2]==1 && a[1][1]==1 && a[2][0]==1))
        {
            p++;
            t=5;
        }
        else if(a[0][2]==0 && a[1][1]==0 && a[2][0]==0)
        {
            p++;
            t=4;
        }

        if(p>1)
        {
            cout<<3<<"\n";
            continue;
        }
        if(p==1)
        {
            if(t==5)
            {
                if(x==y)
                {
                    cout<<3<<"\n";
                    continue;
                }
            }
            if(t==4)
            {
                if(x!=y)
                {
                    cout<<3<<"\n";
                    continue;
                }
            }
        }

        if((x+y)<9 && p==0 && c>0)
        {
            cout<<2<<"\n";
            continue;
        }
        else{
            cout<<1<<"\n";
        }

    }



return 0;
}