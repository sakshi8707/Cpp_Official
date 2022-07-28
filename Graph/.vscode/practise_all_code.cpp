#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    // solution
    vector<int> function() 
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
 vector<int> ans = obj.function();
 for(auto it : ans)
 {
     cout<<it<<" ";      
 }
 cout<<endl;             

  return 0;
}