#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> V[N];
// vector<int>  vis[N];
bool vis[N];
int level[N];
void BFS(int source)
{
   queue<int> q;   
   q.push(source);
   vis[source] = true;             
   while(!q.empty())
   {
       int node = q.front();
    //    vis[node] = true;
    cout<<node<<" "<<endl;
       q.pop();
       for(auto child : V[node])
       {
           if(!vis[child])
           {
               q.push(child);
               vis[child] = true;
           level[child] = level[node]+1;
           }
       }
       cout<<endl;

   }
}

int main()
{
int n;                // no of nodes
cin>>n;              
  for(int i=0;i<n-1;i++)
  {
      int v,u;cin>>v>>u;
      V[v].push_back(u);
      V[u].push_back(v);
  }
  BFS(1);
  for(int i = 1;i<=n-1;i++)
  {
      cout<<i<<" :  "<<level[i]<<" "<<endl;
  }

  return 0;
}
// 13   
// 1 2 
// 1 3
// 1 13
// 2  5
// 5 6
// 5 7
// 5 8           
// 8 12
// 3 4
// 4 9
// 4 10
// 10 11