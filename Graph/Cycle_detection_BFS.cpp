
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {

public:
    bool checkForCycle(int s, int V, vector<int> adj[], vector<int>& visited)
    {
        vector<int> parent(V, -1);
     
        // Create a queue for BFS
        queue<pair<int,int>> q;
     
        visited[s] = true;
        q.push({s, -1});
     
        while (!q.empty()) {
     
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
     
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
        }
        return false;
    }
public:
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, V, adj, vis)) return true; 
	        }
	    }
	    
	    return false; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "yES\n";
		else cout << "NO\n";
	}
	return 0;
}  // } Driver Code Ends

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> vis;
// bool checkCycle(int start,int parent,vector<int> adj[], vector<int> &vis) 
// {
//     queue<pair<int,int> >q;
//     vis[start] = 1;
//     q.push({start,-1});
//     // vis[start] = 1; 
//     q.pop();
//     while(!q.empty())
//     {
//         int node = q.front().first;
//         int parent = q.front().second;
//       for(auto child : adj[node])
//       {
//         if(vis[child])
//         {
//             vis[child] = 1;
//              q.push({child,node});
//         }
//         else if(child != start)
//        {
//         return true;
//        }
//       }
//     }
//     return false;
// }


// bool isCycle(int n,vector<int> adj[])
// {

//    for(int i=1;i<=n;i++)
//    {
//        if(!vis[i])
//        {
//         //    vis[i] = 1;
//            if(checkCycle(i,-1,adj,vis))
//            {
//                return true;
//            }
//        }
//    }
//    return false;
// }

// int main()
// {
// int n,e;cin>>n>>e;
// vector<int> v[n+1];
//   for(int i=0;i<e;i++)
//   {
//       int u,y;cin>>u>>y;
//       v[u].push_back(y);
//       v[y].push_back(u);
//   }
//  bool ans = isCycle(n,v);

//  if(ans)
//  {
//      cout<<"present"<<endl;
//  }
//  else
//  {
//      cout<<"absent"<<endl;
//  }

//   return 0;
// }