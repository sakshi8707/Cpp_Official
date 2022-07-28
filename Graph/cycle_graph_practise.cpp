#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> v[N];
bool vis[N];
 bool checkcycle(vector<int> v[N],int start,bool vis[],int parent)
 {
     vis[start] = true;
     for(int child : v[start])
     {
         if(vis[child])  
         {
             return true;
         }
         if(!vis[child] && checkcycle(v,child,vis,start))
          {
              return true;
          }
     }
     return false;
 }

int main()
{
int n,e;
cin>>n>>e;
 for(int i=0;i<n;i++)
 {
     int v1,v2;
     cin>>v1>>v2;
     v[v1].push_back(v2);
     v[v2].push_back(v1);
 }
 bool c = checkcycle(v,0,vis,-1);
 if(c)
 {
     cout<<"present"<<endl;
 }
 else
 {
     cout<<"Not present"<<endl;
 }
  return 0;
}