// efficient APPROCH
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,e;cin>>n>>e;
  vector<int> adj[n];
  for(int i=0;i<e;i++)
  {
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  //prims algo approch naive APPROCH
  int key[n],mstset[n],parent[n];
  for(int i=0;i<n;i++)
  {
    mstset[i] = false;
    key[i] = INT_MAX;
    parent[i] = -1;
  }
  key[0]=0;
  parent[0]= -1;

  for(int count=0;count<n;count++)
  {
    int mini= INT_MAX,u;            
    for(int i=0;i<n;i++)
    {
      if(mstset[i]==false && key[i]<mini)
        {
          u=i;
          mini=key[i];
        }
    }
    mstset[i] = true;
    for(auto it : adj[u] )
    {
      node=it.first;         
      wt=it.second;
      if(mstset[node]==false && key[node]>wt)
      {
        key[node] = wt;
         parent[node] = u;                 
      }
    }
  }

  return 0;
}