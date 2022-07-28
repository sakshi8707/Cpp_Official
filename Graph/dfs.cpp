#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
void dfs(int vertex,vector<int> &vis,vector<int> adj[],vector<int> &ans)
{
  ans.push_back(vertex);
  vis[vertex] = 1;
  for(auto it : adj[vertex])
  {
    if(!vis[it])
    {
        dfs(it,vis,adj,ans);
    }
  }
}

vector<int> DFS(int n,vector<int> adj[])
{
  vector<int> vis(n+1,0);
  vector<int> ans;
  for(int i=0;i<n;i++)
  {
      if(!vis[i])
      {
          dfs(i,vis,adj,ans);
      }
  }
  return ans;
}
};

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
  solution obj;
  vector<int> vec = obj.DFS(n,adj);
  for(int i=0;i<vec.size();i++)
  {
      cout<<vec[i]<<" ";
  }
  return 0;
}