#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > adj;

void AddEdge(int a, int b)
{
  adj[a][b] = 1;
  adj[b][a] = 1;
}

void Dfs(int str,vector<bool>& vis)
{
  cout<<str<<" "<<endl; 
  vis[str] = true;           

  for(int i=0;i<adj[str].size();i++)
  {
       if((!vis[i]) && adj[str][i]==1)    
       {
         Dfs(i,vis);
       }
  }
}




int main()
{
 int n=5,e=4;
//  cin>>n>>e;
  adj = vector<vector<int> >(v,vector<int>(v,0));

  AddEdge(0,1);
  AddEdge(0,2);
  AddEdge(0,3);
  AddEdge(0,4);
//  for(int i = 0; i < n; i++)
//  {
//    int a,b;                  
//    cin>>a>>b;                      
//    AddEdge(a,b);
//  }

 vector<bool> vis(n,false);        
 Dfs(0,vis);

  return 0;
}