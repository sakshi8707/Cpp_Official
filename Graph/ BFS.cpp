#include<bits/stdc++.h>
using namespace std;
class solution 
{
public:
vector<int> bredth_first_search(vector<int> v[],int n)
 {
     vector<int> vis(n,0);
     vector<int> bfs;
          
          queue<int> q;
          q.push(0);
          vis[0] = 1;
          while(!q.empty())
          {
              int node = q.front();
            //   cout<<node<<endl;
            bfs.push_back(node);
              q.pop();
              for(auto child : v[node])
              {
                 if(vis[child])
                 {
                     q.push(child);
                     vis[child] = 1;
                 }
              }
          }
       return bfs;
       

 }
};

int main()
{
int n,e;
cin>>n>>e;
 vector<int> v[n];
 for(int i = 0; i < e;i++)
 {
     int u,w;
     cin>>u>>w;
     v[u].push_back(w);
     v[w].push_back(u);
 }
 
 solution obj;
  vector<int> ans = obj.bredth_first_search(v,n,0);
  for(auto i : ans)
   {
       cout<<i<<" ";
   }
   cout<<endl;
  return 0;
}