#include<bits/stdc++.h>
using namespace std;

class solution 
{
  public:
  void dfs(int node,int parent = -1,int n)
  {
      vector<int> v[n];
      vector<int> vis(n+1,0);
       

  }
    
};

int main()
{

int t;
cin>>t;
  while(t--)
  {
      int n,e;
      cin>>n>>e;
      vector<int> v[n];
      for(int i=0;i<e;i++)
      {
          int u,w;
          cin>>u>>w;
          v[u].push_back(w);
          v[w].push_back(u);
      }
  }


  return 0;
}