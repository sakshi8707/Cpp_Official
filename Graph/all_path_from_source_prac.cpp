#include<bits/stdc++.h>
using namespace std;
class solution            
{
   public:
   vector<int> allPathsSourceTarget(int n,adj)
   {
      vector<int> path;             
      priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > pq;
      pq.push({0,-1});     
      while(!pq.empty())
      {
        int Node = pq.top().first;
        int check = Node;
        int parent = pq.top().second;
          path.push_back(node);
        pq.pop();
        for(auto it : adj[Node])
        {
          int node = pq.top().first;
          int parent = pq.top().second;
            // for checking 0 node  
            if(node)    
            {
              pq.push({node,parent});
            }
        }
      }
   }
};

int main()
{
  int n,e;cin>>n>>e;
  vector<int> adj;
  for(int i=0;i<e;i++)
  {
      int a,b;cin>>a>>b;
      adj[a].push_back(b);
      // adj[b].push_back(a);
  }

  vector<int> ans = obj.allPathsSourceTarget(n,adj);
  for(int i=0;i<ans.size();i++)
  {
      cout<<ans[i]<<" ";
  }

  return 0;
}