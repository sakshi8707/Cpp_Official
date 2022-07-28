#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> v[N];
vector<vector<int> > cc;
     vector<int> c_cc;
 
bool visted[N];
 
 void dfs(int vertex)
 {
     visted[vertex] = true;
     c_cc.push_back(vertex);
     for(auto child : v[vertex])
     {
         if(visted[child])
         continue;
         dfs(child);
         
     }
 }

int main()
{
int n,e;
cin>>n>>e;
for(int i=0;i<e;i++)
{
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
int ct = 0;
for(int i = 0;i<=n;i++)
{
    if(visted[i])
    continue;
    c_cc.clear();
    dfs(i);
    cc.push_back(c_cc);
}
cout<<cc.size()<<endl;
for(auto c_cc : cc)
{
    for(auto vertexe : c_cc)
    {
        cout<<vertexe<<" ";
    }
    cout<<endl;
}

  return 0;
}