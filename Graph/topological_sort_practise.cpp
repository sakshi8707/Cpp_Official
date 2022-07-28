
/*input    
 5 6       
 5 0 
 5 2 
 4 0 
 4 1
 2 3 
 3 1
*/
//DFS METHOD------------------------->next

#include<bits/stdc++.h>
using namespace std;
vector<int> TopoSortdfs(int n,vector<int> v[],int src,vector<int> &vis,stack<int> &st)
{
     vis[src] = 1;
     for(auto it : v[src])
     {
       if(!vis[it])
       {
         TopoSortdfs(n,v,it,vis,st);
       }
     }
     st.push(src);
}

vector<int> TopoSort(int n,vector<int> v[])
{
  vector<int> vis(n+1,0);
  stack<int> st;
  for(int i= 0; i<n;i++)
  {
    if(vis[i]==0)
  {
    TopoSortdfs(n,v,i,vis,st);
  }
  }
  vector<int> temp;
  while(!st.empty())
  {
    temp.push_back(st.top());
    st.pop();
  }

  return temp;
  
}


int main()
{ 
  int n,e;cin>>n>>e;
  vector<int> v[n];
  for(int i=0;i<e;i++)
  {
      int u,w;
      cin>> u >> w;
      v[u].push_back(w);
    //   v[w].push_back(u);
  }
  vector<int> ans = TopoSort(n,v);
  for(int i= 0; i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }  
  cout<<endl;
  return 0;
}