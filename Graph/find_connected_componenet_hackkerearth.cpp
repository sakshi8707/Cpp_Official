#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> v[N];
// creating bool fun of
bool vis(N);

   
    // DFS function 
    void DFS(int vertex)
    {
       vis[vertex] = true;
       for(auto child : v[vertex])
       {
           if(vis[child])
           continue;            
           DFS(child);
       }
    }

int main()
{
    vector<int> v(N);
    int n,e;
    cin>>n>>e;
    for(int i = 0; i < n; i++)
    {
        int x,y;
     v[x].push_back(y);
     v[y].push_back(x);

    }
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
        continue;
        DFS(i);
        count++;
    }
    cout<<count<<endl;


  return 0;
}