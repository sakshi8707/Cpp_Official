#include<bits/stdc++.h>
using namespace std;

/*input            
5 6         
5 0     
5 2   
2 3       
3 1     
4 0 
4 1 
output

input
5 6
5 0
5 4
4 3
3 2
1 2
1 0
output
5 4 3 1 2 0
*/

class Solution 
{
public:


  // void Dfs(int st,vector<int> adj[],vector<int> &vis,stack<int> &s)
  // {
  //   vis[st] = 1;
  //   for(auto it : adj[st])
  //   {
  //     if(!vis[it])
  //     {
  //       Dfs(it,adj,vis,s);
  //     }
  //   }
  //   s.push(st);                  
  // }
  void Bfs(int st,vector<int>adj[] , vector<int> &vis, stack<int> &s)
  {
   
  }

  vector<int> SolveTopoDfs(vector<int> adj[],int n)
  {
    vector<int> ans;
    stack<int> s;
    vector<int> vis(n,0);

    for(int i=0;i<n;i++)
    {
      if(vis[i]==0)
      {
        // vis[i] = 1;                
        Bfs(i,adj,vis,s);                
      }
    }
    while(!s.empty())
    {
      // int a = s.top();
      ans.push_back(s.top());
      s.pop();                     
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
  }

  Solution obj;
  vector<int> ans = obj.SolveTopoDfs(adj,n);             
  for(int i=0;i<=ans.size();i++)
  {
    cout<<ans[i]<<" ";              
  }

  return 0;
}