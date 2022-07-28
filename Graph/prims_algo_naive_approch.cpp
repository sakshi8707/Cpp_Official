#include<bits/stdc++.h>
using namespace std;
class Solution
{
   /*
   input
   4 5
   0 1 10 
   1 2 15
   0 2  5
   3 1 2
   3 2 40
   */
   public:
   vector<int>  MinimumSpaningTree(int n,vector<pair<int,int> > v[]) 
   {
      int parent[n];
      int key[n];
      bool mst[n];
      for(int i=0;i<n;i++)
      {
         parent[i] = -1;
         mst[i] = false;
         key[i] = INT_MIN; 
      }
      parent[0] = -1;
      key[0] = 0;
      for(int i=0;i<n-1;i++)
      {
          int mini = INT_MAX,node;
          for(int j=0;j<n;j++)
          {
             if(mst[j] == false && key[j] < mini) 
             {
                 mini = key[j];
                 node = j;
             }
             
          }
          mst[node] = true;
          for(auto it : v[node])
          {
             int currnode = it.first;
             int currwt = it.second;
             if(mst[currnode] == false && key[currnode] > currwt)
             {
                 parent[currnode] = node;
                 key[currnode] = currwt;
             }
          }
      }
    // return parent;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(parent[i]);
      }
   }
};

int main()
{
 int n,e;
 cin>>n>>e;
 vector<pair<int,int>> v[n];
 for(int i=0; i<e; i++)
 {
   int a,b,c;
   cin>>a>>b>>c;
   v[a].push_back({b,c}); 
   v[b].push_back({a,c}); 
 }
 Solution obj;
 vector<int> ans = obj.MinimumSpaningTree(n,v);
 for(int i= 0; i<n;i++)
 {
   cout<<ans[i]<<" ";
 }

  return 0;
}