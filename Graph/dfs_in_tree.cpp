// for finding depth and height of the tree using dfs

#include<bits/stdc++.h>
using namespace std;
const int n = 1e3+10;
// no visted array for
  vector<int> v[n];
  int depth[n],height[n];
void dfs(int vertex,int parent=0)
{
    //step1
   for(auto child : v[vertex])
   {
       //step2
      depth[child] = depth[vertex]+1;
       if(child == parent)
       {
           continue;
       }
     // step3
     dfs(child,vertex );
     height[vertex] = max(height[vertex],height[child]+1);

   }
   //step4

}

int main()
{
int length;  // for tree only n
 cin>>length;
for(int i = 0; i < length-1; i++)
 {
     int v1,v2;
     cin>>v1>>v2;
     v[v1].push_back(v2);
     v[v2].push_back(v1);
 }
 dfs(1);
 for(int i = 0; i < length-1;i++)
 {
     cout<<"depth "<<depth[i]<<" "<<"height "<<height[i]<<endl;
 }

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