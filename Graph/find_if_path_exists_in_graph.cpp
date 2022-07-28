/*input
3 2
0 1
1 2
2 0
0 2
input2 
n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(int n, vector<int> edges[], int source, int destination,vector<int> vis) {
     if(destination==source)
     {
         return true;
     }
     vis[source] = 1;

     for(int it : edges[source])  
     {
        if(vis[it]==0)
        {
        if(dfs(n,edges,it,destination,vis))
        {
            return true;
        }
        }
     }
     return false;
    }

    bool validPath(int n,vector<int> v[],int source,int destination)
    {
        vector<int> vis(n+1,0); 
    //  vector<int> vis(n+1,0);
     for(int i=0;i<n;i++)
     {
         if(vis[i]==0)
         {
             if(dfs(n,v,i,destination,vis))
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
 int n,w;
 cin>> n >> w;
 vector<int> v[n];
 for(int i = 0; i < w;i++)
 {
     int u,e;cin>>u>>e;
     v[u].push_back(e);
     v[e].push_back(u);
 }
 int source,destination;
 cin>>source>>destination;
 Solution obj;
 bool ans=obj.validPath(n,v,source,destination); 
 if(ans)
 {
     cout<<"yes"<<endl;
 }
 else
 {
     cout<<"NO"<<endl;
 }
  return 0;
}