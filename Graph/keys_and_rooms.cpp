#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
  void dfs(int str,vector<vector<int>>& rooms,vector<bool>& vis)
  {
    vis[str] = true;            
    for(auto room : rooms)
    {
      if(!vis[room] && room)
      {
        dfs(room,rooms,vis);
      }
    }
  }
 bool canVisitAllRooms(vector<vector<int>>& rooms,int n) {
   vector<bool> vis(n,false);
   dfs(0,rooms,vis); 
   int count = 0;
   for(int i=0;i<n;i++)
   {
    if(vis[i]==false)
    {
      return false;
    }
 }
 return true;
};

int main()
{
  int n,e;cin>>n>>e;         
  vector<vector<int> rooms;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      // int a;cin>>a;           
      rooms[i][j] = 1;
      rooms[j][i] = 1;              
    }
  }
  int s = rooms.size();
  Solution obj;         
 int ans = obj.canVisitAllRooms(rooms ,n );
 if(ans ==true) 
 {
  cout<<"YES"<<endl;
 }
 else
 {
  cout<<"NO"<<endl;
 }

  return 0;
}