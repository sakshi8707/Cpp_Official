/*input
  6 6
  1 2
  1 6
  3 2   
  3 4
  5 4
  6 5
  */

#include<bits/stdc++.h>
using namespace std;
// class solution 
// {
// public:
void FindTopoSort(int i,stack<int> st,vector<int> v[],vector<int> vis)
{
    vis[i] = 1;
    for(auto child : v[i])   
    {
      if(vis[child]==0)
      {
        FindTopoSort(child,st,v,vis);
      }
    }
    st.push(i);
}

vector<int> TopoSort(vector<int> v[],int n)
{
  stack<int> st;
  vector<int> vis(n+1,0);
   for(int i=1;i<=n;i++)
  {
    if(vis[i]==0)
    {
       FindTopoSort(i,st,v,vis);
    }
  }    
  vector<int> ans;
   while(!st.empty())
   {
     ans.push_back(st.top());
     st.pop();
   }

   return ans;
}
// };

int main()
{
 int n,m;cin>>n>>m;
  vector<int> v[n];
  for(int i=0;i<m;i++)
  {
      int u,w;cin>>u>>w;
      v[u].push_back(w);
      // v[w].push_back(u);
  }
  //  solution obj;
  vector<int> ans = TopoSort(v,n);
  for(int i = 0; i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }
  return 0;
}