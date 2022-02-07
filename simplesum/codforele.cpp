#include <bits/stdc++.h>
using namespace std;
#define ll long long

void get(int ind,vector<vector<int>>&v,vector<bool>&vis,int dis
,int cur,vector<int>&col,int c)
{
  for(int i=0;i<v[ind].size();i++)
  {
    if(vis[v[ind][i]]==false)
    {
      vis[v[ind][i]]=true;
      col[v[ind][i]]=c;
      if(cur+1<dis)
      {
        get(v[ind][i],v,vis,dis,cur+1,col,c);
      }
    }
  }
}

int main()
{
  //write your code here
  ll n,m,x,y,q,z;
  cin>>n>>m;
  vector<vector<int>> mad(n+1);
  for(int i=0;i<m;i++)
  {
    cin>>x>>y;
    mad[x].push_back(y);
    mad[y].push_back(x);
  }
  vector<int> col(n+1,0);
  cin>>q;
  while(q--)
  {
    cin>>x>>y>>z;
    if(y==0)
    {
      col[x]=z;
    }
    else if(y==1){
      col[x]=z;
      for(int i=0;i<mad[x].size();i++)
      {
        col[mad[x][i]]=z;
      }
    }
    else{
      vector<bool> vis(n+1,0);
      vis[x]=true;
      col[x]=z;
      for(int i=0;i<mad[x].size();i++)
      {
        if(vis[mad[x][i]]==false)
        {
          vis[mad[x][i]]=true;
        col[mad[x][i]]=z;
        get(mad[x][i],mad,vis,y,1,col,z);
        }
        
      }
    }
    
  }
/*
  for(int i=0;i<mad[2].size();i++)
  {
    cout<<mad[2][i]<<" ";
  }
  cout<<endl;
  */
  
  for(int i=1;i<=n;i++)
  {
    cout<<col[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}