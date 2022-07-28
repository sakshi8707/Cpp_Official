#include<bits/stdc++.h>
using namespace std;
const int n = 1e3+10;
vector<int> v[n];
int depth[n],height[n];
void dfs(int vertex,int parent)
{
   for(auto child : v[vertex])
   {
       depth[child] = depth[vertex] + 1;
       if(child==vertex)
       {
           continue;
       }
       dfs(child,vertex);
       height[vertex] = max(height[vertex],height[child]);

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

 dfs(1,0);
 for(int i=0;i<n-1;i++)
 {
     cout<<depth[i]<<" "<<height[i]<<" "<<endl;
 }

  return 0;
}