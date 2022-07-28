// using adjecent list
#include<bits/stdc++.h>
using namespace std;

vector<int> Bfs_of_graph(int v,vector<int> adj[])
{
vector<int> bfs;
vector<int> vis(v+1,0);
   for(int i = 1; i <= v; i++)
   {
      if(!vis[i])
      {
      queue<int> q; 
         q.push(i);
         vis[i] = 1;
       
         while(!q.empty())
         {
            int node = q.front();
            bfs.push_back(node);
            q.pop();
            for(auto child : adj[node])
            {
               if(!vis[child])
               {
                  q.push(child);
                  vis[child] = 1;

               }
            }
         }


      }
    } 
   return bfs;   
}

int main()
{
int n,m;
cin>>n>>m;
vector<int> adj[n+1];
// vector<pair<int,int> > adj[n+1] //for weighted graph            
for(int i=0;i<n-1;i++)
 {
    int v,u;          
    cin>>v>>u;//cin>>v>>>u>>wt;
    adj[v].push_back(u); //adj[v].push_back({u,wt})

    adj[u].push_back(v);
 }
 
 vector<int> ans = Bfs_of_graph(n,adj);
 for(auto i : ans)
 {
    cout<<i<<" ";
 }
 cout<<endl;

  return 0;
}
// 7 12           
// 1 2
// 2 1
// 2 3
// 3 2
// 2 7
// 7 2
// 5 7
// 7 5
// 3 5
// 5 3
// 4 6
// 6 4
