
#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,e,src;cin>>n>>e;
      vector<pair<int,int> > v[n+1];
      for(int i=0;i<e;i++)
      {
        int u,w,wt;cin>>u>>w>>wt;
        v[u].push_back(make_pair(w,wt));
        // v[w].push_back(make_pair(u,wt));
      }
    cin>>src;

  priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > pq;
      vector<int> disvector(n+1,INT_MAX);
      disvector[src] = 0;
  pq.push(make_pair(0,src));
  while(!pq.empty())
  {
     int nodedis = pq.top().first;
     int node = pq.top().second;
     pq.pop();
    vector<pair<int,int> > :: iterator it;

     for(it = v[node].begin();it!=v[node].end();it++)
     {
       int nextnode = pq.top().first;
       int nextdis = pq.top().second;

       if(disvector[nextnode] > disvector[node]+nextdis)
       {
         disvector[nextnode] =  disvector[node]+nextdis;
         pq.push(make_pair(disvector[nextnode],nextnode));
       }
     }
  }
 cout<<"distance from node "<<src<<" is "<<endl;
  for(int i=1;i<=n;i++)
  {
    cout<<disvector[i]<<" ";
  }
  cout<<endl;

  return 0;
}



















// #include<bits/stdc++.h>
// using namespace std;
     
// vector<int> Dijkstra_algorithm(vector<pair<int,int>> v[],int n,int src)
// {
//    priority_queue<pair<int,int> , vector<pair<int,int> >,greater<pair<int,int> > > pq;
//    vector<int> disvect(n+1,INT_MAX);
//    disvect[src] = 1;
//    pq.push({0,src});
//    while(!pq.empty())
//   {
//     int dis = pq.top().first;
//     int node = pq.top().second;
//     pq.pop();

//     for(auto it : v[node])
//     {
//       int nextnode = it.first;
//       int nextdist = it.second;
//       if(disvect[nextnode]>disvect[node]+dis)
//       {
//         disvect[nextnode] = disvect[node] + dis;
//         pq.push({disvect[nextnode],nextnode});
//       }
//     }

//   }
//  return disvect;


// }

// int main()
// {
//  int n,e;cin>>n>>e;
//  vector<pair<int,int>> v[n];
//  for(int i=0;i<n;i++)
//  {
//    int u,w,wt;cin>>u>>w>>wt;
//    v[u].push_back({w,wt});
//    v[w].push_back({u,w});
//  }
//  int src;cin>>src;
//   vector<int> ans = Dijkstra_algorithm(v,n,src);
//   for(int i= 0; i<ans.size();i++)
//   {
//     cout<<ans[i]<<" ";
//   }
  

//   return 0;
// }