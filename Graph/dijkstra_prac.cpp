#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<pair<int,int>> v[], int n,int src)
{
  vector<int> vis(n+1,0);
  vector<int> dis(n+1,INT_MAX);
  
priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > pq;
  pq.push({0,src});
  vis[src] = 1;
  while(!pq.empty())    
  {
    int node = pq.top().second;
    int nodeWt = pq.top().first;
    pq.pop();
    for(auto it : v[node])
    {
        int currnodeWt = it.second;
        int currnode = it.first;
     if(vis[currnode]==0)
      {
        vis[currnode] = 1;
        if(dis[node]+ currnodeWt < dis[currnode])
        {
        dis[currnode] = dis[node]+currnodeWt;
        pq.push({dis[currnode],currnode});
        }
      }
    }
  }
  for(int i=1; i<=n;i++)
  {
    if(dis[i]== INT_MAX)
    {
        cout<<"-1"
    }
  }
}

int main()
{
 int n,src;
 cin>>n;
 vector<pair<int,int>> v[n];
 for(int i = 0; i <n; i++)
 {
     int a,b,wt;cin>>a>>b>>wt;
     v[a].push_back({b,wt});
     v[b].push_back({a,wt});
 }
 cin>>src;

 vector<int> vis(n+1,0);
  vector<int> dis(n+1,INT_MAX);
  
priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > pq;
  pq.push({0,src});
  vis[src] = 1;
  while(!pq.empty())    
  {
    int node = pq.top().second;
    int nodeWt = pq.top().first;
    pq.pop();
    for(auto it : v[node])
    {
        int currnodeWt = it.second;
        int currnode = it.first;
     if(vis[currnode]==0)
      {
        vis[currnode] = 1;
        if(dis[node]+ currnodeWt < dis[currnode])
        {
        dis[currnode] = dis[node]+currnodeWt;
        pq.push({dis[currnode],currnode});
        }
      }
    }
  }

//  Solution obj;
//  int ans = obj.networkDelayTime(v,n,src);
//  cout<<ans<<endl;

  return 0;
}