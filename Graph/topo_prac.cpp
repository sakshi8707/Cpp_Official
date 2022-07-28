 #include<bits/stdc++.h>
using namespace std;

void TopoBfs(int st,vector<int> v[],vector<int> &vis,stack<int> ans)
 {
   vis[st] = 1;
   queue<int> q;
   q.push(st);
   q.pop();
   while(!q.empty. ()) 
   {
       int node = q.front();
       for(auto it : v[node])
       {
         if(vis[it]==0)
         {
             vis[it] = 1;
            q.push(it);
         }
       }
       ans.push(node);
   }
//    return ans;
 }

 vector<int> TopoSort(vector<int> v[],int n)
 {
     vector<int> vis(n+1,0);
   stack<int> ans;
   for(int i=0; i<n; i++)
   {
        if(vis[i]==0)
        {
            TopoBfs(i,v,vis,ans);
        }
   }
//    return ans;
 vector<int> itr ;
 while(!ans.empty())
 {
     itr.push_back(ans.top());
     ans.pop();
 }
 return itr;
 }

int main()
{
 int n,e;cin>>n>>e;
 vector<int> v[n];
 for(int i=0;i<e;i++)
 {
   int a,b;cin>>a>>b;
   v[a].push_back(b);
//    v[b].push_back(a);
 }
   vector<int> res = TopoSort(v,n);
   for(int i= 0; i<res.size();i++)
   {
       cout<<res[i]<<" ";
   }

  return 0;
}