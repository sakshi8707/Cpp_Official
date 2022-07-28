#include<bits/stdc++.h>
using namespace std;
 class solution
 {
  public:
  void PrimsAlgorithm(vector<pair<int,int> > adj[],int n)
  {
    int parent[n];
    int mstset[n];
    int key[n];

  //for assigning values
   for(int i=0; i<n;i++)   
   {
    parent[i] = -1;
    mstset[i] = false;
    key[i] = INT_MAX;
   }

   parent[0] = -1;
      key[0]  = 0;

   //i = count
   for(int i=0;i<n;i++)
   {
      int mini = INT_MAX,u;                 

      for(int j=0;j<n;j++)
      {
          if(key[j] < mini && mstset[j] == false)
          {
            mini = key[j];
            u = j;
          }
      }

      for(auto it : adj[u])
      {
       int node = it.first;
       int  wt = it.second;
        if(mstset[node] == false && wt < key[node])
        {
           key[node] = wt;
           parent[node] = u;           
        }
      }
   }
   for(int i=0; i<n;i++)
   {
    cout<<parent[i]<<"-"<<i<<" "<<endl;
   }
   }

  };
 

int main()
{
 int n,e;cin>>n>>e;             
 vector<pair<int,int>> adj[n];
 for(int i=0; i<e;i++)
 {
  int a,b,c;cin>>a>>b>>c;
  adj[a].push_back({b,c});
  adj[b].push_back({a,c});
 }

  return 0;
}

/*
    5 7 
    0 1 5 
    0 2 10 
    0 3 100 
    1 3 50 
    1 4 200
    3 4 250
    4 5 50 
    input
    5 9       
    5 4 9   
    5 1 4         
    4 3 5 
    4 1 1       
    4 2 3     
    1 2 2 
    3 6 8 
    3 2 3     
    2 6 7           
    */