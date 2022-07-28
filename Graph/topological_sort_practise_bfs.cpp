#include<bits/stdc++.h>
using namespace std;

vector<int> TopoSortbfs(int n,vector<int> v[])
{
  vector<int> topo;
  vector<int> indegree(n,0);
  queue<int> q;
  for(int i=0;i<n;i++)
  {
    for(auto it : v[i])
    {
      indegree[it]++;
    }
  }

  for(int i=0;i<n;i++)
  {
    if(indegree[i]==0)
    {
      q.push(i);
    }
  }

  while(!q.empty())
  {
    int node = q.front();
    q.pop();
    topo.push_back(node);

    for(auto it : v[node])
    {
      indegree[it]--;
      if(indegree[it]==0)
      {
        q.push(it);
      }
    }
  }
  return topo;
}


int main()
{
int n,e;cin>>n>>e;
  vector<int> v[n];
  for(int i=0;i<e;i++)
  {
      int u,w;
      cin>> u >> w;
      v[u].push_back(w);
    //   v[w].push_back(u);
  }
  vector<int> ans = TopoSortbfs(n,v);
  for(int i= 0; i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }  
  cout<<endl;
  return 0;
}