#include<bits/stdc++.h>
using namespace std;
const int N =   1e3+10;
vector<int> v[N];
bool visted[N];
// Time complexity : O(v+e)
/*input = 
 8 5
 1 2
 2 3
 2 4
 3 5
 6 7          
 output : 3
 */

void Dfs_work(int vertex)
{
  visted[vertex] = true;
  for(auto child : v[vertex])
  {
   if(visted[child])
   continue;
   Dfs_work(child);
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
int count =0;
for(int i = 1;i<=n;i++)
{
  if(visted[i])
  continue;
  Dfs_work(i);
  count++;
}
cout<<count<<endl;
  return 0;
}