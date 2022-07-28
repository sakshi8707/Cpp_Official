#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> v[N];

int subtree_sum[N];
int even_subtree_cnt[N];

void dfs(int vertex,int parent=0)
{
    if(vertex%2==0)
    {
        //no fo even trees                    
    even_subtree_cnt[vertex]++;
    }
    subtree_sum[vertex]+=vertex;
      for(auto child : v[vertex])
      {
          if(child == vertex)
          {
          continue;
          }
          dfs(child,vertex);
      subtree_sum[vertex]+=subtree_sum[child];
      even_subtree_cnt[vertex]+=even_subtree_cnt[child];
      }

}

int main()
{
int n;        
cin>>n;           
for(int i = 0; i < n-1; i++)
 {
     int a,b;
     cin>>a >> b;
     v[a].push_back(b);
     v[b].push_back(a);
 }
 dfs(1);
 for(int i=1;i<=n;i++)
 {
     cout<<subtree_sum[i]<<" "<<even_subtree_cnt[i]<<" "<<endl;   
 }
// for queries
// int q;
// cin>>q;
//  for(int i=0;i<q;i++)
//  {
//   int v;
//   cin>>v;
//   cout<<subtree_sum[v]<<" "<<even_subtree_cnt[v]<<" "<<endl;
//  }
  return 0;
}
