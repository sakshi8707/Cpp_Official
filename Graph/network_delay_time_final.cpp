#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<pair<int,int>> v[], int n, int k) {
        
        // int s = times.size();
        // vector<pair<int,int> > v[s];
        // for(int i=0;i<times.size();i++)
        // { 
        //     v[times[i][0]].push_back({times[i][1],times[i][2]});
        // }
        
        vector<int> dis(n,INT_MAX);
        vector<int> vis(n,0);
        queue<pair<int,int> > q;
        q.push({0,k});
        vis[k] = 1;
        while(!q.empty())
        {
            int node = q.front().second;
            int nodeWt = q.front().first;
            q.pop();
            for(auto it : v[node])
            {
               int currnode = it.first;
               int currnodeWt = it.second;
               if(vis[currnode]==0)
               {
                  if(dis[currnode] > dis[node]+currnodeWt) 
                  {
                      dis[currnode] = dis[node]+currnodeWt;
                      q.push({dis[currnode],currnode});
                  }
               } 
            }
        }
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(dis[i]==INT_MAX)
            {
                return -1;
            }
            ans = max(ans,dis[i]);
        }

        //returning ans 
        return ans;
        
    }
};

int main()
{
 int n,src;
 cin>>n;
 vector<pair<int,int>>v[n];
 for(int i = 0; i <n; i++)
 {
     int a,b,wt;cin>>a>>b>>wt;
     v[a].push_back({b,wt});
     v[b].push_back({a,wt});
 }
 cin>>src;
 Solution obj;
 int ans = obj.networkDelayTime(v,n,src);
 cout<<ans<<endl;

  return 0;
}




// class Solution {
// public:
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//         int s = times.size();
//         vector<pair<int,int> > temp[s];
//         for(auto it : times)
//         {
//             temp[times[0]].push_back({times[1],times[2]});
//         }
        
//         // finding distance
//         vector<int> distance(s,INT_MAX);
//         vector<int> vis(s+1,0);
//             queue<pair<int,int> > q;
//         q.push({k,0});
//             while(!q.empty())
//             {
//                 int node = q.front().first;
                
//                 int node_wt =q.front().second;
//                 for(auto it : v[node])
//                 {
//                     int nde = it.first;
//                     int nde_wt = it.second;
                    
//                     if(vis[nde]==0)
//                     {
//                         vis[nde] = 1;
//                         if(distance[node]+nde_wt < distance[nde])
//                         {
//                             distance[nde] = distance[node]+nde_wt;
//                                 q.push({nde,distance[nde]});
//                         }
//                     }
//                 }

//             }
//         int ans = 0;
//         for(int i = 1 ; i<=s;i++)
//         {
//             if(distance[i]==INT_MAX)
//             {
//                return -1; 
//             }
//          ans = max(ans , distance[i]);
//         }
        
//         return ans;
//     }
// };  