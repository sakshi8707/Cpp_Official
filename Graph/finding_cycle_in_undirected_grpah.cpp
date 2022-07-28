#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<vector<int>> v[N];
bool vis[N];

bool isCycle(int src, vector<vector<int> > v,vector<bool> vis,int parent)
{
    vis[src] = true; 
    for(auto child : v[src])         
    {
          if(vis[child])
          {
              return true;
          }
          if(!vis[child] && isCycle(child,v,vis,src))
          {
              return true;
          }
        
    }
    return false;

}

int main()
{
    vector<int> v[N];
int n,e;
cin>>n>>e;
 for(int i = 0; i < n-1;i++)
 {
     int a,b;cin>>a>>b;
     v[a].push_back(b);
     v[b].push_back(a);
 }

bool cycle = false;
//   for(int i = 0; i < e;i++)
//   {
//       if(vis[i])
//       {
//           continue;
//       }
//       if(!vis[i] && isCycle(i,v,vis,-1)) 
//       {
//           cycle = true;              
//       }
//   }

  if(isCycle)
  {
      cout<<"present "<<endl;
  }
  else
  {
      cout<<"Not Prsent"<<endl;
  }
  return 0;
}