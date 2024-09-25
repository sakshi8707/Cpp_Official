#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        // Ensure k is within the range of columns
        k = k % n;
        for (int i = 0; i < m;i++)
        {
            for (int j = 0; j < n;j++)
            {
                if(i%2==0)
                {
                    //left shif for even
                    if(mat[i][j]!=mat[i][(j-k+n)%n])
                        return false;
                }
                else
                {
                    //right shif for odd
                    if(mat[i][j]!=mat[i][(j+k)%n])
                        return false;
                }
            }
        }
        return true;
    }
};


int main(){

  int m, n;
  cin >> m >> n;
  vector<vector<int>> mat(vector<int> row(n),m);
  for (int i = 0; i < m;i++)
  {
    for (int j = 0; j < n;j++)
    {
      int a;cin
    }
  }

    return 0;
}