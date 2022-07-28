#include<bits/stdc++.h>
using namespace std;
// 7 7
// 1 2
// 2 3
// 3 4
// 3 6
// 4 5
// 6 5
// 5 7
// yes
// void ColourIt(int child ,int node,vector<int> colour)
// {
//   if(node==1)
//   {
//     colour[child] = 0;
//   }
//   else
//   {
//     colour[child] = 1;
//   }
// }

bool checkBipartite(int i,vector<int> v[],int colour[])
{
queue<int> q;
q.push(i);
colour[i] = 1;
  while(!q.empty())
  {
    int node = q.front();
    q.pop();
     for(auto child : v[node])
     {
       if(colour[child] == -1)
       {
        //  ColourIt(child,node,colour);
        colour[child] = 1-colour[node];
        q.push(child);
       }
       else if(colour[child]==colour[node])
         {
           return false;
         }
     }
  }
     return true;
  // return true;
}

bool Bipartite(vector<int> v[],int n)
{
  // vector<int> colour(n,-1);
  int colour[n];
  memset(colour,-1,sizeof colour);
   for(int i=0;i<n;i++)
   {
      if(colour[i]==-1)
      {
        if(!checkBipartite(i,v,colour))
        {
            return false;
        }
      }
   }
   return true;

}

int main()
{
  int n,e;
  cin>>n>>e;
  vector<int> v[n];
  for(int i = 0; i < e; i++)
  {
      int u,w;
      cin>>u>>w;
      v[w].push_back(u);
      v[u].push_back(w);
      
  }
  bool ans = Bipartite(v,n);
    if(ans)
    {
      cout<<"yes"<<endl;
    }
    else
    {
      cout<<"no"<<endl;
    }
  return 0;
}
// 9 9
// 1 2
// 2 3
// 3 4
// 3 7
// 4 5
// 5 6
// 6 7
// 5 8
// 8 9
// for odd cycle input          
// 5 5
// 1 2
// 2 3
// 2 4
// 3 4
// 4 5
// by striver
// 7 7 
// 0 1 
// 1 2 
// 2 3 
// 3 4 
// 4 6 
// 6 1
// 4 5
// no