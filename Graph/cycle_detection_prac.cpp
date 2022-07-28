#include<bits/stdc++.h>
using namespace std;
/*
input2
4 6
0 1
0 2
1 2
2 0  
2 3
3 3
output 

*/
class solution  
{
//for cycle detection using bfs------------------------>
  bool CycleDetectionBfs(int str, int n,vector<int> adj[],vector<int> &vis)
  {
     queue<pair<int,int> > q;
     q.push({str,-1});
     vis[str] = 1;
     while(!q.empty())
     {
       int node = q.front().first;
       int parentt = q.front().second;            
       q.pop(); 
       for(auto it : adj[node])
       {
        //  int it = itt.first();
        //  int parent = itt.second();
         if(!vis[it])
         {
           q.push({it,node});
           vis[it] = 1;
         }
         else
         {
           if(it != parentt)
           {
             return true;                    
           }
         }
       }
     }
       return false;
  }
public:
  bool CheckCycleBfs(int n,vector<int> adj[])
  {
   vector<int> vis(n+1,0);
   for(int i=0;i<n;i++)
   {
     if(!vis[i])
     {
       if(CycleDetectionBfs(i,n,adj,vis))
       {
         return true;           
       }
     }
   }
   return false;         
  }

bool CycleDetectionDfs(int str,int parr,int n,vector<int> adj[],vector<int> &vis)
  {
      // int parr = -1;
       vis[str] = 1;
       for(auto it : adj[str])
       {
        //  int par = str;           
         if(!vis[it])
         {
           CycleDetectionDfs(it,str,n,adj,vis);
          //  vis[it] = 1;
         }
         else
         {
           if(it != parr)
           {
             return true;                    
           }
         }
       }
  }

  bool CheckCycleDfs(int n,vector<int> adj[])
  {
   vector<int> vis(n+1,0);
   for(int i=0;i<n;i++)
   {
     if(!vis[i])
     {
       if(CycleDetectionDfs(i,-1,n,adj,vis))
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


// for cycle checking using Bfs               
 cout<<"for bfs Check cycle "<<endl;      
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