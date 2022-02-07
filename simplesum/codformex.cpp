/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,s;
    cin>>n>>s;
    ll p;
    if(n%2==0){
      p=n/2;
    }
    else{
      p=n/2 +1;
    }
    p=n-p+1;
    ll ans=s/p;
    cout<<ans<<endl;
  }
  return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,n,r;
  cin>>t;
  while(t--)
  {
    cin>>n;
    vector<int> mad(n,0);
    for(int i=0;i<n;i++)
    {
      cin>>mad[i];
      
    }
    
    list<int> ans;
    for(int i=0;i<n;i++)
    {
      if(ans.size()==0)
      {
        ans.push_back(mad[i]);
      }
      else{
        if(ans.front()<mad[i])
        {
          ans.push_back(mad[i]);
        }
        else{
          ans.push_front(mad[i]);
        }
      }
    }
    
    vector<int> answa;
    
    for(auto it:ans)
    {
      answa.push_back(it);
    }
    int cur=INT_MAX;
    int answ=0;
    for(int i=0;i<(answa.size()-1);i++)
    {
      //cout<<answa[i]<<" ";
      for(int j=i+1;j<(answa.size());j++)
      {
        if(answa[i]>answa[j])
        {
          answ++;
        }
      }
    }
    //cout<<endl;
    
    cout<<answ<<endl;
  }
  
  return 0;
}