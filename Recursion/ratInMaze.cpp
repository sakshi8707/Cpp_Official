#include<bits/stdc++.h>
using namespace std;

// Tc: 4^(N*N)
// sc : o(n*n)

class Solution {
public:

    void findRat(int r , int c ,string temp , vector<string>& ans , vector<vector<int>>& vis , vector<vector<int>> m , int n ,  vector<int>& dirR ,  vector<int>& dirC  , string& strDir)
    {
         //base condition 
         if(r==n-1 && c==n-1)
         {
            ans.push_back(temp);
            return;
         }

         // make dir
         string strDir = "URDL";
         for(int i=0;i<4;i++)
         {
            int newR = r+dirR[i];
            int newC = c+dirC[i];

            if(newR<n && newC<n && newR>=0 && newC >=0 && !vis[newR][newC] && m[newR][newC]==1){
                vis[newR][newC] = 1;
                findRat(newR , newC , temp+strDir[i] , ans , vis , m , n,dirR,dirC,strDir);
                vis[newR][newC] = 0;
            }
         }  

    }

    vector<string> ratInMaze(vector<vector<int>> m, int n)
    {
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n,0));
        
        vector<int> dirR = {-1 , 0 , +1 , 0};
        vector<int> dirC = { 0 , +1 , 0 , -1};
       
        string strDir = "URDL"; 
        
                if(m[0][0]==1)
                {
                    findRat(0,0,"",ans,vis,m,n , dirR , dirC , strDir);
                }
        
        return ans;
    }
};

int main(){
    
    return 0;
}