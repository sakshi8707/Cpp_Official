#include<bits/stdc++.h>
using namespace std;
const int  N = 1e3+10;
vector<bool> vis[100];
vector<int> v[N];
bool dfs(int vertex,vector<int> v[N],vector<bool> vis,int parent=-1) 
  {
      vis[vertex] = true;
      for(auto child : v[vertex])
      {
          if(!vis[child])
          {
              if(dfs(child,v,vis,vertex))
              {
                  return true;
              }
          }
          else if(child != parent)
          {
              return true;
          }

      }
      return false;
  }

int main()
{
    vector<bool> vis;
int n,e;
for(int i=0;i<e;i++)
 {
     int v1,v2;
     cin>>v1>>v2;
     v[v1].push_back(v2);
     v[v2].push_back(v1);
 }
 //int parent = -1;
if(dfs(0,v,vis,-1))
{
    cout<<"cycle present"<<endl;
}
else
{
    cout<<"not present "<<endl;
}
  return 0;
}