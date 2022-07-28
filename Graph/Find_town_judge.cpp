#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int findJudge(int n, vector<vector<int>>& trust) {

      vector<int> vis(n,0);
      vector<int> ideg(n,-1);   
      vector<int> odeg(n,-1);   
      for()
      /*
      for(int i= 0; i<n;i++)
      {
    for(int j=0;j<trust[i].size();j++)
     {
       trust[i][j]
     }
      }
      */
    }
};

int main()
{
  int n,e;cin>>n>>e;
  int trust[n+1][n+1];
  for(int i=0;i<e;i++)
  {
       int v1,v2;
       cin>>v1>>v2;
       trust[v1][v2]=1;
  }
return 0;
}