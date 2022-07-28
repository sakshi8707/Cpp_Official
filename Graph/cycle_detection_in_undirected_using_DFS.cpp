#include<bits/stdc++.h>
using namespace std;

class solution 
{
  public:
  bool checkCycle(int n,int start,int parent = -1)
  {
    vector<int> vis(n+1,0);
    vector<int> v[n];
    vis[start] = true;
     for(auto child : v[start])
     {
       if(!vis[child])
       {
         if(checkCycle(n,child,start))
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

public:
 bool isCycle(vector<int> v[],int n)
 {
    vector<int> vis(n+1,0);
     for(int i=0;i<n;i++)
     {
       if(!vis[i])
       {
         if(checkCycle(n,i,-1))
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
      cout<<"YEs"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }
    }

  return 0;
}