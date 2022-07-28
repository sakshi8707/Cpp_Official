/*
4 5
0 1
1 2
1 3
2 4
3 4
*/
#include<bits/stdc++.h>
using namespace std;

bool dfs(int node,vector<int> v[],vector<int> colour)
{
  if(colour[node]==-1)
  {
      colour[node] = 0;
  }
     for(auto child : v[node])
     {
       if(colour[child]==-1)
       {
         // colouring the child
         colour[child] = 1-colour[node];
         if(!dfs(child,v,colour)) 
         {
           return false;
         }
       }
       else if(colour[child]==colour[node])
       {
         return false;
       }
     }
  return true;
}

bool isBipartite(vector<int> v[],int n)
{
   vector<int>  colour(n+1,-1);
   for(int i= 0; i<n;i++)
   {
     if(colour[i]==-1)
     {
      //  colour[i]=0;
       if(!dfs(i,v,colour))
       {
         return false;
       }
     }
   }
   return true;

}

int main()
{
 int n,e;cin>>n>>e;
 vector<int> v[n];
  for(int i=0;i<e;i++)
  {
    int u,w;cin>>u>>w;
    v[u].push_back(w);
    v[w].push_back(u);
  }
  bool ans = isBipartite(v,n);
  if(ans)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
/*
4 5
0 1
1 2
2 0
2 3
3 0
NO

4 4
0 1
1 2
2 3
3 0
YES


5 5
0 1
1 2
1 3
2 4
3 4
YES
*/