#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    bool checkBipartiteDfs(int st,vector<int> v[],int colour[])
    {
    //   if(colour[st] == -1)
    //   {
    //       colour[st] = 1;
    //   }
      for(auto child : v[st])
    {
        if(colour[child] == -1)
       {
           colour[child] = 1-colour[st];
           if(!checkBipartiteDfs(child,v,colour))
           {
               return false;
           }
       }
       else if(colour[child]==colour[st])
       {
           return false;
       }
    }
    return true;
    }

    bool isBipartite(vector<int> v[],int n)
    {
        int colour[n];
        memset(colour,-1,sizeof colour);
        for(int i=0;i<n;i++)
        {
          if(colour[i]==-1)
          {
             colour[i] = 1;
             if(!checkBipartiteDfs(i,v,colour))
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
int n,m;
cin>>n>>m;
 vector<int> v[n];
 for(int i=0;i<m;i++)
 {
     int u,w;cin>>u>>w;
     v[u].push_back(w);
     v[w].push_back(u);
 }
  
  solution obj;
  bool ans = obj.isBipartite(v,n);
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
8 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 7 
1 7
4 5 

bipartite graph example 
*/ 

/*
7 7 
0 1 
1 2 
2 3 
3 4 
4 6 
6 1
4 5 
 not bipartite example
*/