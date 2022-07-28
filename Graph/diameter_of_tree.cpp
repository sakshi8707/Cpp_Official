//diameter of tree in basically maximum lenght of tree 
#include<bits/stdc++.h>
using namespace std;
//finding diameter of trees
const int N = 1e3+10;
vector<int> v[N];
int depth[N];
void dfs(int vertex,int parent = -1)
{  
    //depth[vertex] = 0;13

    for(auto child : v[vertex])
   { 
       if(child == parent)
       {
           continue;
       }
       depth[child] = depth[vertex]+1;
       dfs(child,vertex);
   }
}
int main()
{
    int n;             
    cin>>n;          
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
       //cout<<depth[i]<<" "<<endl;
       int max_depth = -1;
       int max_depth_node;
    for(int i=1;i<=n;i++)
    {
        if(max_depth<depth[i])
        {
            max_depth = depth[i];
            max_depth_node = i;
        }
        depth[i]=0;
    }
    dfs(max_depth_node);
    for(int i=1;i<=n;i++)
    {
       if(max_depth<depth[i])
       {
           max_depth = depth[i];
       } 
    }
cout<<max_depth<<" "<<endl;
  return 0;
}
// 13
// 1 2 
// 1 3
// 1 13
// 2 5 
// 3 4
// 5 6
// 5 7
// 5 8 
// 8 12
// 4 9 
// 4 10
// 10 11