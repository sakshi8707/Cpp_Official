#include<bits/stdc++.h>
using namespace std;

void Shortest_Path_With_Unit_Wait(int n,vector<int> v[],int src,int destination)
{
   int distance[n];
   for(int i = 0; i < n; i++)
   {
       distance[i] = INT_MAX;
   }
   queue<int> q;
   q.push(src);
   distance[src] = 0;
   while(!q.empty())
   {
       int node = q.front();
       q.pop();
       for(auto it : v[node])
       {
           if(distance[node]+1<distance[it])
           {
               distance[it] = distance[node]+1;
               q.push(it);
           }
       }
   }

   for(int i = 0; i<n;i++)
   {
       cout<<distance[i]<<" ";
   }
   cout<<endl;
}

int main()
{
  int n,e;cin>>n>>e;
  vector<int> v[n];
  for(int i = 0; i <n; i++)  
  {
      int u,w;cin>>u>>w;
      v[u].push_back(w);
      v[w].push_back(u);
  }
  int src,dest;cin>>src>>dest;

  Shortest_Path_With_Unit_Wait(n,v,0,dest);


  return 0;
}
/*
6 7
0 1
0 2
1 3
2 3
3 4
3 5
4 5
0 1 1 2 3 3
*/