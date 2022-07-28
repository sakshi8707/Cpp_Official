#include<bits/stdc++.h>
using namespace std;

void TopoSortDfs(stack<int> st,vector<pair<int,int>> v[],vector<int> vis,int src)
{
  // vector<int> ans[n];
  // stack<int> st;
  vis[src] = 1;
  for(auto it : v[src])
  {
    if(vis[it.first]==0)
    {
       TopoSortDfs(st,v,vis,it.first);
    }
  }
  st.push(src);
}

void Shortest_Path_in_DAG(int src,int n,vector<pair<int,int>> v[])
{
  vector<int> vis(n+1,0);
  stack<int> st;
  for(int i=0;i<n;i++)
  {
      if(vis[i]==0)
      {
        TopoSortDfs(st,v,vis,i);
      }
  }
  // assining the infinitve values
  int dis[n];
  for(int i=0; i<n; i++)
  {
     dis[i] = INT_MAX;
  }
  dis[src] = 0;
  while(!st.empty())
  {
    int node = st.top();
    st.pop();
   if(dis[node]!=INT_MAX)
   {
    for(auto it : v[node])
    {
      if(dis[node] + it.second < dis[it.first])
      {
         dis[it.first] = dis[node] + it.second;
      }
    }
   }
  }
  for(int i=0; i<n;i++)
  {
    if(dis[i] == INT_MAX)
    {
      cout<<"INF ";
    }
    cout<<dis[i]<<" ";
  }
  cout<<endl;
}

int main()
{
 int n,e;cin>>n>>e;
  vector<pair<int,int>> v[n];
  for(int i = 0; i <n; i++)  
  {
    int a,b,wt;
    cin>>a>>b>>wt;
    v[a].push_back({b,wt});
    // v[b].push_back({a,wt}); 
  }
  // int src,dest;cin>>src>>dest;

  Shortest_Path_in_DAG(0,n,v);

  return 0;
}
/*
6 7 
0 1 2
0 4 1
1 2 3
2 3 6
4 2 2
4 5 4
5 3 1
*/