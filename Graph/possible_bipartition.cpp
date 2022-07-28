#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    bool Dfs(int st,vector<int> temp[],int n,vector<int>& color)
    {
        if(color[st]==-1)
        {
            color[st] = 0;
        }
        for(auto it: temp[st])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[st];
                Dfs(it,temp,n,color);
                
            }
            else if(color[it]==color[st])
            {
                return false;
            }
        }
        return true;
    }
    //========================================================================================>
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> temp;
       for(int i=0;i<dislikes.size();i++)
        {
            int u = dislikes[i][0];
            int v = dislikes[i][1];
            temp[u].push_back(v);
            temp[v].push_back(u);
        }
        vector<int> color(n+1,-1);
        if(Dfs(0,temp,n,color)==true)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

int main()
{
 int n,e;cin>>n>>e;
 vector<vector<int>> dislikes(n);
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    dislikes[i][j] =  1;
    dislikes[j][i] =  1;
  }
 }

 Solution obj;
 int ans = obj.possibleBipartition(n,dislikes);
 if(ans==true)
 {
   cout<<"True"<<endl;
 }
 else
 {
  cout<<"False"<<endl;
 }

  return 0;
}