#include<bits/stdc++.h>
using namespace std;
/*
input
5 5
0 1
0 2
1 4
2 3
3 4
*/
class solution
{
public:
vector<int> bfs(int n ,vector<int> adj[])
{
    vector<int> vis(n+1,0);
    vector<int> ans;
    queue<int> q;
  q.push(0);
  vis[0] =1;
  while(!q.empty())
  {
      int vertex = q.front();
      ans.push_back(vertex);
      q.pop();
      for(auto it : adj[vertex])
      {
        if(!vis[it])
        {
            q.push(it);
            vis[it] = 1;
        }
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
  vector<int> vec = obj.bfs(n,adj);
  for(int i=0;i<vec.size();i++)
  {
      cout<<vec[i]<<" ";
  }
  cout<<endl; 
  return 0;
}