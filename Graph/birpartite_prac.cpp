#include<bits/stdc++.h>
using namespace std;
/*         
input::
7 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 1
4 5 
output
NO---DFS
NO---BFS
2)
8 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 7 
1 7
4 5 
 
output::

*/
class solution
{
public: 
  
  //---------------------------------------------------------------------------------  
  bool IsBipartiteDfs(int st ,vector<int> adj[],int n, vector<int>& color)
  {
  // vector<int> color(n+1,-1);
   if(color[st]==-1)
   {
   color[st] = 0;             
   }
   for(auto it : adj[st])
   {
      if(color[it]==-1)
      {
        color[it]=1-color[st];
        IsBipartiteDfs(it,adj,n,color);
       
      }
      else
      {
          if(color[st]==color[it])    
          { 
            return false;
          }
      }
   }
   return true;
  }
  
  //---------------------------------------------------------------------------------

  bool BipartiteDfs(vector<int> adj[],int n)
  {
    vector<int> color(n+1,-1);
    for(int i=0;i<n;i++)
    {
      color[i] = 0;
      if(IsBipartiteDfs(i,adj,n,color)==false)
      {
        return false;
      }
    }
    return true;
  }
  //---------------------------------------------------------------------------------
  bool IsBipartiteBfs(int st,vector<int> adj[],int n, vector<int>& color)
  {
    if(color[st]==-1)
    { 
    color[st] = 0; 
    }
    queue<int> q;
    q.push(st);
    while(!q.empty())
    {
       int node = q.front();
       q.pop();
       for(auto it : adj[node])
       {
          if(color[it]==-1)         
          {
            q.push(it);
            color[it] = 1-color[node];
          }
          else if(color[it]==color[node])
          {
            return false;
          }
       }
    }
      return true;
  }
  
  //---------------------------------------------------------------------------------
public:
  bool BipartiteBfs(vector<int> adj[],int n)
  {
   vector<int> color(n+1,-1);
   for(int i=0;i<n;i++)
   {
    if(color[i]==-1)
    {
      if(IsBipartiteBfs(i,adj,n,color)==false)
      {
        return false;
      }
    }
   }
   return true;
  }
  //---------------------------------------------------------------------------------

};

int main()
{
 int n,e;cin>>n>>e;
 vector<int> adj[n];
 for(int i=0;i<n;i++)
 {
  int a,b;cin>>a>>b;
  adj[a].push_back(b);
  adj[b].push_back(a);
 }
 solution obj;
 bool ans = obj.BipartiteDfs(adj,n);
 if(ans==false)
 {
  cout<<"NO---DFS"<<endl;
 }
 else
 {
  cout<<"YES---DFS"<<endl;      
 }
 int ansss = obj.BipartiteBfs(adj,n);
  if(ansss==false)
 {
  cout<<"NO---BFS"<<endl;
 }
 else
 {
  cout<<"YES---BFS"<<endl;      
 }
  
  return 0;
}        