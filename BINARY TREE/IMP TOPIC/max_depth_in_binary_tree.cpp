#include<bits/stdc++.h>
using namespace std;
 const int N = 1e3+10;
 bool vis[N];
 int depth[N];
 int m;
// int maxDepth(TreeNode* root)
 int dfs(int vertex,vector<int> v[],int parent)
 {
     int maxdepth = 0;
    vis[vertex] = true;
    for(int child : v[vertex])
    {
        // cout<<"vertex "<<" "<<vertex<<"child "<<" "<<child<<endl;
       depth[child] = depth[vertex] + 1;
      if(vis[child])
      {
          continue;
      }
      dfs(child,v,vertex);
      maxdepth = max(depth[child],maxdepth);
      //m = depth[child];
    }
//  cout<<maxdepth<<endl;
return maxdepth;
 }

int main()
{
int n;
cin>>n;
vector<int> adj[n+1];
 for(int i = 0; i < n-1; i++)
 {
     int v,u;           
     cin>>v>>u;
     adj[v].push_back(u);
     adj[u].push_back(v);
 }
 dfs(1,adj,-1);
//   for(int i = 0; i < n; i++)
//   {
//       if(vis[i])
//       {
//           continue;
//       }
//       dfs(i,adj,-1);
//   }
//   20 8
// 3 9
// 3 20
// 20 7
// 20 3
// 20 15
// 15 20
// 7 20
// 3 9
  return 0;
}