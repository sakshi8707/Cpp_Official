#include<bits/stdc++.h>
using namespace std;

void ZeroOneBFS(int src)
{
      for(int i = 0; i < e;i++)
      {
          
      }
}

int main()
{
int n,e;
cin>>n>>e;
vector<pair<int,int> > v[n];
  for(int i=0;i<e+1;i++)
  {
      int u,v,wt;
      cin>>u>>v>>wt;
      v[u].push_back({v,wt});
      v[v].push_back({u,wt});
  }

  return 0;
}