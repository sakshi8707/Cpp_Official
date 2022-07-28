//TIME COMPLEXITY-----------> O(N^2)
// BEST TIME COMPLEXITY------> O(N+E)

/*input
5 6
0 1 
1 2 
1 4  
1 3   
2 4
3 0
output
-1 0 
3 1
1 2
0 3
0 4
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,e;cin>>n,e;
   vector<pair<int,int>> v[n+1];
   for(int i=0;i<e;i++)
   {
     int a,b,c;cin>>a>>b>>c;
     v[a].push_back({b,c});
     v[b].push_back({a,c});
   }
 // initializing arrys 
   int key[n+1];
   int parent[n+1];
   bool mstset[n+1];
   // marking arrays with value
   for(int i=0;i<n;i++)
   {
     key[i] = INT_MAX;
     parent[i] = -1;
     mstset[i] = false;
   }
   // initailizing with start values
   parent[0] = -1;
   key[0] = 0;
   // main iteration 
   for(int i=0;i<n-1;i++)
   {
     int u,minimum = INT_MAX;
     for(int j=0;j<n;j++)
     {
        if(mstset[j]==false && key[j]<minimum)
        {
           minimum = key[j];
           u = j;
        }
     }
     mstset[u] = true;
     for(auto it : v[u])
     {
      int node = it.first;
      int wt = it.second;
      if(wt<key[node] && mstset[node] == false)
      {
        key[node] = wt;
        parent[node] = u;
      }
     }
   }
   //printing output
   for(int i=1;i<n;i++)
   {
     cout<<parent[i]<<" "<<i<<" "<<endl;
   }


  return 0;
}