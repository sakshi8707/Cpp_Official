// properly runed
#include<bits/stdc++.h>
using namespace std;
/*input
    6 7 
    0 1 5 
    0 2 10 
    0 3 100 
    1 3 50 
    1 4 200
    3 4 250
    4 5 50 k
    write input       
    9 14        
    0 1 4 
    0 7 8  
    1 2 8      
    1 7 11 
    2 3 7             
    2 8 2            
    2 5 4                 
    3 4 9            
    3 5  14             
    4 5 10             
    5 6 2
    6 7  1
    6 8 6      
    7 8 7             
    write Output
0 - 1
1 - 2
2 - 3
3 - 4
2 - 5
6 - 6
0 - 7
2 - 8
    */
int main()
{

 int n,e;cin>>n>>e;
 vector<pair<int,int>> v[n];
 for(int i=0;i<=n;i++)
 {
     int a,b,c;cin>>a>>b>>c;
     v[a].push_back(make_pair(b,c));
     v[b].push_back(make_pair(a,c));
 }
 
 //efficient approch
 int parent[n];
 bool mstset[n];
 int keydis[n];
 for(int i=0;i<n;i++)
 {
     mstset[i] = false;
     keydis[i] = INT_MAX;
 }
 priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
 keydis[0] = 0;
 parent[0] = -1;
 pq.push({0,0});
 while(!pq.empty())
 {
      int node = pq.top().second;
      pq.pop();
      mstset[node] = true;
      for(auto it : v[node])
      {
        int currnode = it.first;
        int currwt = it.second;
        if(keydis[currnode]>currwt && mstset[currnode]==false)
        {
            parent[currnode] = node;
            pq.push({keydis[currnode],currnode});
            keydis[currnode] = currwt;
        }
      }
 }
 for(int i=1;i<n;i++)
 {
     cout<<parent[i]<<" - "<<i<<endl;
 }
    return 0;
}