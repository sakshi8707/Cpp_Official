#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m,src;
 cin>>n>>m;
 vector<pair<int,int>> v[n+1];

 for(int i=0;i<m;i++)
 {
     int a,b,c;
     cin>>a>>b>>c;
     v[a].push_back(make_pair(b,c));
     v[b].push_back(make_pair(a,c));
 }
  cin>>src;
 //dijkstra's algorithm 
 priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
 vector<int> disTo(n+1,INT_MAX);
 disTo[src] = 0;
 pq.push(make_pair(0,src));
 while(!pq.empty())
 {
   int dis = pq.top().first;
   int pre = pq.top().second;
   pq.pop();
   vector<pair<int,int> > :: iterator it;
   for(it = v[pre].begin();it!=v[pre].end();it++)
   {
     int next = it->first;
     int nextdis = it->second;
     if(disTo[next] > disTo[pre]+nextdis)
   {
     disTo[next] =  disTo[pre]+nextdis;
     pq.push(make_pair(disTo[next],next));
   }
   }
 }

 for(int i=1;i<=n;i++)
 {
   cout<<disTo[i]<<" ";
 }
 cout<<endl;


  return 0;
}