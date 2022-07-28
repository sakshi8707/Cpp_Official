#include<bits/stdc++.h>
using namespace std;
/*vector<int> indegree(int n,vector<int> v[],int node,vector<int> &vis)
{
//  vis[node] = 1;
  vector<int> indeg(n,0);
 
  for(auto it : v[node])
  {
     if(!vis[it])
     {
         indeg[node]++;
         indegree(n,v,it);
     }
  }
 
  return indeg;
}

vector<int> indegree(int n,vector<int> v[],int node)
{
        
  vector<int> vis(n+1,0);
  for(int i = 0; i <n; i++)
   {
     if(!vis[it])
     {
        indegree(n,v,i,vis);
     }
  
   }
  return indeg;
}
*/
int findJudge(int n, vector<vector<int>>& trust) {
        //this condition is to check if given input is empty but n==1
		
		if(trust.empty() && n==1)
            return 1;
		
		//counts outdegree of a person or node 
		//outdegree means number of nodes that are trusted by given specific node 
        
		vector<int> out(n+1,0);
		
		//counts indegree of a person or node 
		//indegree means number of nodes that trusts a given specific node
        
		vector<int> in(n+1,0);
		
		//loop counts indegree and outdegree
        
		for(auto edge : trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
		
		//if a node has outdegree==0 that means that node doesnot trust anyone and
		//indegree ==n-1 that means all other nodes trusts this node except himself
        
		for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
		//if there is no such node return -1
        return -1;
    }





int main()
{

int n,e;
cin>>n>>e;
vector<int> v[n];
for(int i = 0; i < e;i++)
 {
   int a,b;
   v[a].push_back(b);
 }
 vector<int> indeg= indegree(n,v,0);
 for(int i=0; i<indeg.size();i++)
 {
     cout<<indeg[i]<<" ";
 }
 vector<int>outdeg= outdegree(n,v,0);
 for(int i=0; i<outdeg.size();i++)
 {
     cout<<outdeg[i]<<" ";
 }

  return 0;
}