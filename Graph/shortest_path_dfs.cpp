#include<bits/stdc++.h>
using namespace std;
// class solution
// {
//public:
// void dfs(int vertes,vector<int> &v,int n)
// {
//  vector<bool> vis(n,false);
//  vector<int> distance(n,INT_MAX);
//  vis[vertes] = true;
//     for(auto it : v[vertes])
//     {
//         if(vis[it] == false)
//         {
//           if(distance[it]<distance[vertes]+1)
//           {
//               distance[it] = distance[vertes] + 1; 
//           }
//             dfs(it,v,n);
//         }
//     }
//     for(int i=0;i<distance.size();i++)
//     {
//         cout<<distance[i]<<" ";
//     }
// }
// };
class solution
{
    public:
  void dfsCall(int st,vector<int> &v,vector<bool> visited,vector<int> &ans)
  {
    visited[st] = true;
    ans.push_back(st);
    for(auto it : v[st])  
    {
        if(visited[it] == false)
        {
            dfsCall(it,v,visited,ans);
        }
    }
  }

  vector<int> dfs(int st,vector<int> v[],int n)
  {
      vector<int> ans;
      vector<bool> visited[n];
      for(int i=0;i<n;i++)
      {
          if(visited[i]==false)
          {
              dfsCall(i,v,n,vis,ans);
          }
      }
      return ans;           
  }
  };

int main()
{
  int n,e;cin>>n>>e;
  vector<int> v[n];
  for(int i=0;i<n;i++)
  {
     int a,b;cin>>a>>b;
     v[a].push_back(b);
     v[b].push_back(a); 
  }
 solution obj;
//   obj.
 vector<int> print = obj.dfs(0,v,n);

  return 0;
}