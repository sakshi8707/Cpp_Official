#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    //   int count=0;
    //   vector<int> vis(n,0);
    // }
// -------------------------------------------------------------------------------------
    void Check(int start,int n,vector<int> edges,map<int,int> &m)
    {
      //  map<int,int> m;                 
       vector<int> vis(n,0);
      
       for(auto it : edges[start])
       {
        if(!vis[it])
        {
          vis[it];
          count++;
        }
       }
       m.insert(start,count);
       count=0;                      
    }

    vector<int> FindSmallest(int n,vector<int> edges)
    {   
    for(int i=0;i<n;i++) 
    {
      Check(i,n,edges);                
    }
    }
};

int main()
{
 int n,e;
cin>>n>>e;
vector<int> edges[n];
for(int i = 0; i < e;i++)
 {
   int a,b;
   edges[a].push_back(b);
 }
 vector<int> ans= FindSmallest(n,edges);
 for(int i=0; i<ans.size();i++)
 {
     cout<<ans[i]<<" ";
 }
 

 


  return 0;
}