#include<bits/stdc++.h>
using namespace std;
int const N = 1e3;

vector<int> g[N];
bool vis[N]; // taking visited array 
 // DFS function -----------------------
 void DFS(int vertex) 
 {
     // step 1 : Take action on vertex after entring the vertex
     
     for(auto child : g[vertex])
     {
     // step 2 : Take action on child before entering the child node

          DFS(child);
     // step 3 : Take action on child after entering the child node

     }
     // step 4 : Take action on vertex before exiting the vertex

 }

 //--------------main method----------------
int main()
{
// taking input 
int n,e;
cin>>n>>e;  // n = no of nodes , e = number of edges in the
for(int i = 0; i < n; i++)
{
    int x,y;
    cin>>x>>y; //
    g[x].push_back(y);
    g[y].push_back(x);  
}

  return 0;
}