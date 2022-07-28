#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"adjacency list of "<<i<<" is "<<endl;
        for(auto it : adj[i])
        {
            cout<<it<<"->"<<" ";
        }
        cout<<endl;
    }
}

int main()
{
 int n,e;cin>>n>>e;
 vector<int> adj[n];
 for(int i=0; i<e; i++) 
 {
   int a,b;cin>>a>>b;
   addEdge(adj,a,b);
 }
 printGraph(adj,n);

  return 0;
}