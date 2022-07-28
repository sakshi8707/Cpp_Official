#include<bits/stdc++.h>
using namespace std;

/*
Input: graph = [[1,2],[3],[3],[]]
Output: [[0,1,3],[0,2,3]]
*/

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    
    }
};

int main()
{
  int n,m;
  vector<vector<int>> adj;
  for(int i = 0; i <n;i++)
  {
      vector<int> temp;
      for(int j = 0; j < m; j++)
      {
          int a;cin>>a;
          temp.push_back(a);           
      }
      adj.push_back(temp);
  }
  // for printing
  for(int i=0; i < adj.size();i++)
  {
      for(int j=0; j < adj[i].size();j++)
      {
          cout<<adj[i][j]<<" ";
      }
      cout<<endl;
  }
 Solution obj;
obj.allPathsSourceTarget(adj);               

  return 0;
}