
/*
input
5 6         
5 0     
5 2   
2 3       
3 1     
4 0 
4 1             
outuput
2 4 3 0 1       
input
4 6
1 0          
1 2
0 2 
3 2      
3 4
2 4   
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> TopoSort(int n,vector<int> v[])
{
  queue<int> q;
  //finding indegree of graph
   vector<int> indegree(n,0);
   for(int i = 0; i <n; i++)
   {
     for(auto it : v[i])
     {
       indegree[it]++;
     }
   }
   //taking 0 degree node into queues
   for(int i= 0; i<n; i++)
   {
     if(indegree[i]==0)
     {
       q.push(i);
     }
   }
   //main method
   vector<int> topo;
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
  int n,e;
  cin>>n>>e;
  vector<int> adj[n];
  for(int i=0;i<e;i++)
  {
      int u,w;
      cin>> u >> w;
      adj[u].push_back(w);
  }
 vector<int> ans = TopoSort(n,adj);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }

  return 0;
} 