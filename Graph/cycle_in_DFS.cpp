#include<bits/stdc++.h>
using namespace std;

class solution  
{
public:
   bool DFScheck(int st,vector<int> v[],int colour[])
   {
      if(colour[st]==-1)
      {
        colour[st] =1;  
      }
      for(auto child : v[st])
      {
        if(colour[child]==-1)
        {
          colour[child] = 1-colour[st];
          if(DFScheck(child,v,colour))
          {
               return false;
          }
        }
        else if(colour[child]==colour[st])
        {
          return false;
        }
      }
   }

   bool Bipartite(vector<int> v[],int n)
   {
     int colour[n];
     memset(colour,-1,sizeof colour);
     for(int i= 0; i<n;i++)
     {
         if(colour[i]==-1)
         {
           if(!DFScheck(i,v,colour))
           {
             return false;
           }
         }
     }
     return true;
   }

};

int main()
{
  int n,m;cin>>n>>m;
  vector<int> v[n];
  for(int i=0;i<m;i++)
  {
    int u,w;cin>>u>>w;
    v[u].push_back(w);
    v[w].push_back(u);
  }
 solution obj;
 bool ans = obj.Bipartite(v,n);
   if(ans)
   {
     cout<<"YEs"<<endl;      
   }
   else
   {
     cout<<"No"<<endl;
   }
  return 0;
}