#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int l = 0 , b = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    l = max(l,i);
                    b = max(b,j);
                }
            }
        }
        
        return (l+1)*(b+1);
    }
};

int main()
{

  return 0;
}