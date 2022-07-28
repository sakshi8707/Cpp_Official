#include<bits/stdc++.h>
using namespace std;
const int n = 1e3+10;
vector<int> v[n];
bool vis[n];

void dfs(int a) {
    vis[a] = true;
    cout<<a<<endl;
    for(auto c : v[a]) 
    {
        cout<<"par "<<a<<" child of par "<<c<<endl;
        if(vis[c])
        {
            continue;
        }
        dfs(c);
    }
}



int main()
{
int n,e;
cin>>n>>e;
for(int i=0;i<e;i++)
 {
     int v1,v2;cin>>v1>>v2;
     v[v1].push_back(v2);
     v[v2].push_back(v1);
 }
  // calling dfs on
  int c =0;
  for(int i=0;i<e;i++)
  {
    if(!vis[i])
    {
    dfs(i);
    c++;
    }
  }
  cout<<"no of connected components ----->"<<c<<endl;

  return 0;
}