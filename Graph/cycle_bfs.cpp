#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
bool checkCycle(int)
{




}
};

int main()
{
int n,e;cin>>n>>e;
  vector<int> adj[n];
  for(int i=0;i<e;i++)
  {
      int a,b;cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
  }
  solution obj;
  vector<int> vec = obj.DFS(n,adj);
  for(int i=0;i<vec.size();i++)
  {
      cout<<vec[i]<<" ";
  }
  return 0;
}