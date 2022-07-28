#include<bits/stdc++.h>
using namespace std;
// vector<int> bfs;
// vector<int>
    vector<int> vis;
void BFS(int n,vector<int> adj[100])
{
    vector<int> bfs;
    // int n = adj.size();
   for(int i=0;i<n;i++)
   {
      if(!vis[i])
      {
         queue<int> q;
         q.push(i);
         vis[i] = 1;
          while(!q.empty())
          {        
          int node = q.front();
        //   bfs.push_back(node);
        cout<<node<<" "<<endl;
          q.pop();
          for(int it : adj[node])
          {
                 if(!vis[it])
                 {
                     q.push(it);
                     vis[it] = 1;
                 }
          }
          }
      }
   }
//    return bfs;
}

int main()
{
int n,e;
cin>>n>>e;
vector<int> v[e+n];
  for(int i = 0; i < e; i++)
  {
      int u,w;cin>>u>>w;
      v[u].push_back(w);
      v[w].push_back(u);
  }
//   vector<int> ans = BFS(n,v);
//   for(auto i : ans)
//   {
//       cout<<i<<endl;
//   }
BFS(n,v);
     for(int i = 0; i < n; i++)
     {
         if(!vis[i])
         BFS(i,v);
         cout<<i<<endl;
     }

  return 0;
}
// 7 7
// 1 2         
// 1 3         
// 2 4
// 2 5 
// 2 6
// 2 7       
// 7 3
