#include<bits/stdc++.h>
using namespace std;
/*
input
7 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 1
4 5
Output
No
*/
class Solution 
{
  public:
   bool Bfs(int curr,vector<int> dislikes[],vector<int>& color)
   {
    if(color[curr]==-1) 
     {
    color[curr] = 0;
     }

     queue<int> q;
     q.push(curr);
     while(!q.empty())
     {
      int node = q.front();
      q.pop();
      for(auto it : dislikes[node])
      {
        if(color[it]==-1)
        {
          color[it] = 1-color[node];
          q.push(it);
        }
        else if(color[it]==color[node])
        {
          return false;            
        }
      }
     }
     return true;            
   }

bool possibleBipartition(int n, vector<vector<int>>& dislikes) 
   {
      vector<int> color(n+1,-1);
      for(int i=0;i<n;i++)
      {
        if(color[i]==-1)
        {
          if(!Bfs(i,dislikes,color))
          {
                return false;
          }
        }
      }
      return true;
   }
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
 Solution obj;
 int ans = obj.BipartiteBfs(n,adj);
 if(ans==true)
 {
  cout<<"YES"<<endl;
 }
 else
 {
  cout<<"NO"<<endl;
 }
  return 0;
}





























// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
     
//     bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
                    
//     }
// };

// int main()
// {
//  int n;cin>>n;               
//  vector<vector<int> > dislikes(n);
//  for(int i = 1; i <= n; i++)
//  {
//   for(int j = 1; j <= n; j++)
//    {
//   dislikes[i][j]=1;
//   dislikes[j][i]=1;
//    }
//  }

//  //print
// for(int i = 0; i < n; i++)
//  {
//   for(int j = 0; j < n; j++)
//    {
//      cout<<dislikes[i][j]<<" "<<dislikes[j][i]<<" ";
//    }
//    cout<<endl;
//  }
 

//   return 0;
// }