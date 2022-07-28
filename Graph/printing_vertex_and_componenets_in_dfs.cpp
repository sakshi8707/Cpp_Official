#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> g[N];
bool vis[N];
// Time Complexity = o(v+e) 
/*INput ------->
 6 9    
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/
bool DFs(int vertex)
{
    // step 1
    cout<<vertex<<endl;
    vis[vertex] = true;
    for(auto child : g[vertex])
    {
        cout<<"Par " <<vertex<<" child : "<<child<<endl;
        // step 2
        if(vis[child])  
        continue;

        DFs(child);
        //ster 3

    }
    // step 4
    return isloopexists;
}
int main()
{
int n,e;
cin>>n>>e;
for(int i= 0; i<n; i++)
{
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}
g.DFs(0);
  return 0;
}