//TIME COMPLEXITY-----------> O(N^2)
// BEST TIME COMPLEXITY------> O(N+E)
#include<bits/stdc++.h>
using namespace std;
// input
// 7 7
// 1 2 
// 3 2
// 3 4
// 7 4
// 6 2
// 5 6
// 7 5
const int N = 1e5+10;
const int INF = 1e9+10;
vector<pair<int, int>> v[N];
vector<int> distance[INF];
int n,m;
void bfs()
{
    deque<int> dq;
    dq.push_back(1);
    distance[1] = 0;
    while(!dq.empty())
    {
      int cur_vertex = dq.front();
      dq.pop_front();
      for(auto child : v[cur_vertex])
      {
        int wt= child.second;
        int node = child.first;
        if(distance[cur_vertex]+wt < distance[node])
        {
           distance[node] = distance[cur_vertex]+wt;
           if(wt==1)
           {
              dq.push_back(node);
           }
           else
           {
              dq.push_front(node);
           }
        }
      }  
    }
    return distance[N] == INF ? -1 : distance[N];
}

int main()
{
  int t;
  cin>>t;
  {
     int n,e;
     cin>>n>>e;
   //   vector<pair<int,int> > v[n];
     for(int i=0;i<n;i++)
     {
        int x,y;cin>>x>>y;
        v[y].push_back({x,0});
        v[x].push_back({y,1});  
     }
  }

  return 0;
}