//input 
/*
4 6
0 1
0 2
1 2
2 0  
2 3
3 3
output
0 1 2 3
*/
/*
7 5
1 2
2 4
4 6
3 5
6 7
*/
#include<bits/stdc++.h>
using namespace std;

class solution  
{
  void DfsTraversal(int str,int n,vector<int>& ans,vector<int>& vis,vector<int> adj[])
  {
    vis[str] = 1;
    ans.push_back(str);
    for(auto it: adj[str])
    {
      if(!vis[it])
      {
        DfsTraversal(it,n,ans,vis,adj);
      }
    }    
  }

  public:
  vector<int> Dfs(int n, vector<int> adj[])
  {
     vector<int> ans;
     vector<int> vis(n+1,0);
     for(int i=0; i<n; i++)
     {
       if(!vis[i]) 
       {
         DfsTraversal(i,n,ans,vis,adj);
       }
     }     
     return ans;
  }
  
  void BfsTraversal(int str,int n,vector<int> &ans,vector<int> &vis,vector<int> adj[])
  {
    queue<int> q;        
    q.push(str);         
    vis[str] = 1;
    while(!q.empty())
    {
      int node = q.front();
      ans.push_back(node);
      q.pop();           
      for(auto it: adj[node])
      {
        if(!vis[it])
        {
          q.push(it);
          vis[it] = 1;                   
        }
      }
    }
  }

   vector<int> Bfs(int n, vector<int> adj[])
  {
     vector<int> ans;
     vector<int> vis(n+1,0);
     for(int i=0; i<n; i++)
     {
       if(!vis[i]) 
       {
         BfsTraversal(i,n,ans,vis,adj);
       }
     }     
     return ans;
  }
//for cycle detection using bfs------------------------>
  bool CycleDetectionBfs(int str, int n,vector<int> adj[],vector<int> &vis)
  {
     queue<int,int>  q;
     q.push({str,-1});
     vis[str] = 1;
     while(!q.empty())
     {
       int node = q.front.first();
       int parentt = q.front.second();            
       q.pop(); 
       for(auto it : adj[node])
       {
         int it = itt.first();
         int parent = itt.second();
         if(!vis[it])
         {
           //if(parent == node)
           q.push({it,node});
           vis[it] = 1;
         }
         else
         {
           if(parent == node)
           {
             return true;                    
           }
         }
       }
       return false;
     }
  }

  bool CheckCycleBfs(int n,vector<int> adj[])
  {
   vector<int> vis(n+1,0);
   for(int i=0;i<n;i++)
   {
     if(!vis[i])
     {
       if(CycleDetection(i,n,adj,vis))
       {
         return true;           
       }
     }
   }
   return false;         
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

// for dfs traversal
   cout<<"By Dfs traversal--->"<<endl;          
 vector<int> ans =  obj.Dfs(n,adj);
 for(int i=0;i<ans.size();i++)
 {
     cout<<ans[i]<<" ";
 }

// for bfs traversal         
   cout<<"\nBy Bfs traversal--->"<<endl;          
 vector<int> anss =  obj.Bfs(n,adj);
 for(int i=0;i<anss.size();i++)
 {
     cout<<anss[i]<<" ";
 }

// for cycle checking using Bfs               
 cout<<"\n Check cycle "<<endl;      
 int ansss = obj.CheckCycleBfs(n,adj);
 if(ansss == true)
 {
   cout<<"yes"<<endl;          
 }
 else
 {
   cout<<"NO"<<endl;      
 }

// for cycle checking using dfs         
cout<<"\n check cycle using dfs "<<endl; 
 
 int anssss = obj.CheckCycleDfs(n,adj);
 if(anssss == true)
 {
   cout<<"yes"<<endl;          
 }
 else
 {
   cout<<"NO"<<endl;      
 }

  return 0;
}