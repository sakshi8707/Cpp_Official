#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
      int n = coins.size();
      int maxi = 0, cnt = 0;
      sort(coins.begin(), coins.end());
      for (int i = 0; i < n;i++)
      {
          while(maxi<target && maxi+1<coins[i])
          {
            maxi += maxi + 1;
            cnt++;
          }
          if(target<=maxi)
          {
            break;
          }
          maxi += coins[i];
      }

      while(maxi<target)
      {
        maxi += maxi + 1;
        cnt++;
      }
      return cnt;
    }
};


int main(){
    


return 0;
}