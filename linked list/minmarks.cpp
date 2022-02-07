#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int minfunc(int x,int y)
{
  if (x<=y)
  {
    return x;
  }
  else{
    return y;
  }
}
/*
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> mad;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
          int a;
          cin>>a;
          mad.push_back(a);

        }
        else if(x==2)
        {
          cout<<mad[mad.size()-1]<<endl;
          mad.pop_back();
        }
        else if(x==3)
        {
          cout<<mad[mad.size()-1]<<endl;
        }
        else{
            auto it=min(mad.begin(),mad.end());
            cout<<*it<<endl;
        }
    }


  }
  
  return 0;
}*/

int main()
{
  int t;
  cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int m=a[0];
      int leftm[n];
      int rightm[n];
      for(int i=0;i<n;i++)
      {
        leftm[i]=m;
        m=max(m,a[i]);
      }
      m=a[n-1];
      for(int i=n-1;i>=0;i--)
      {
        rightm[i]=m;
        m=max(m,a[i]);
      }
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum=sum+abs(a[i]-min(leftm[i],rightm[i]));
      }
      cout<<sum<<endl;
      cout<<-1<<endl;

    }

  return 0;
}
