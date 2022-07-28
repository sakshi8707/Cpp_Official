#include<bits/stdc++.h>
using namespace std;
// Input->
// test case 1:         // test case 2:
// 1                   // 1
// 4 4                 // 3 3
// 0 1                // 0 1
// 1 2               // 1 2
// 2 3               // 2 3
// 0 2               // no
// yes
class solution 
{
  public:
  bool checkCycle(int start,vector<int> v[],int n,vector<int>& vis)
  {
   vis[start] = true;
    queue<pair<int,int>> q;
    q.push({start,-1});
    while(!q.empty())
    {
      int node = q.front().first;
      int parent = q.front().second;
      q.pop();
      for(int child : v[node])
      {
           if(!vis[child])
           {
             q.push({child,node});
             vis[child] = true;
           }
           else if(parent != child)
           {
             return true;
           }
      }
    }
    return false;

  }

  bool isCycle(vector<int> v[],int n)
  {
    vector<int> vis(n+1,0);
    for(int i=0;i<n;i++)
    {
      if(!vis[i])
      {
        if(checkCycle(i,v,n,vis))
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
int t;
cin>>t;
  while(t--)
  {
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
     for(int i=0;i<e;i++)
    {
      int u,w;cin>>u>>w;
      v[u].push_back(w);
      v[w].push_back(u);
    }
    solution obj;
    bool ans = obj.isCycle(v,n);
    if(ans)
    {
      cout<<"yes"<<endl;
    }
    else
    {
      cout<<"no"<<endl;
    }
  }

  return 0;
}