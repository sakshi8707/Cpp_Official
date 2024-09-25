#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minChanges(int n, int k) {

       if ((n & k) != k) {
            return -1;
        }
      int xorSum = n ^ k;
      int cnt = 0;
      while(xorSum)
      {
        cnt += (xorSum & 1);
        xorSum >>= 1;
        n>>= 1;
        k>>= 1;
      }
      return cnt;
    }
};

int main()
{
  int n, k;
  cin >> n >> k;
  Solution obj;
  int ans = obj.minChanges(n, k);
  cout << ans << endl;

  return 0;
}