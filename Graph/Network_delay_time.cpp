#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
    int networkDelayTime(vector<pair<int,int> > v[], int n, int k) {
       vector<int> vis(n+1,0);
       queue<pair<int,int> > q;
       int sum =  0;
       vis[k] = 0;
       q.push({k,0});
       while(!q.empty())
       {
           int node = q.front().first;
           int wt = q.front().second;
           for(auto it : v[node])
           {
        int nde = it.first;
        int wt = it.second;
               if(vis[nde]==0)
               {
                  vis[nde] = 1;
                  q.push({nde,wt});
                  sum =+ wt;
               }
           }
       }

    return sum;   
    }
// };

int main()
{
  int n,src;
  cin>>n;
  vector<pair<int,int> > v[n];
  for(int i = 0; i < n-1; i++)
  {
      int a,b,wt;
      cin>>a>>b>>wt;
    v[a].push_back({b,wt});
    // v[b].push_back({a,wt});
  }
//   vector<int> vis(n+1,0);
  cin>>src;
//   Solution obj;
//   int ans = obj.networkDelayTime(v,n,src);
int ans = networkDelayTime(v,n,src);
  cout<<ans<<" ";
  return 0;
}