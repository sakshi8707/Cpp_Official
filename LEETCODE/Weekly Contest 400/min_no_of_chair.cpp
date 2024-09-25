#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumChairs(string s) {
      int n = s.length();
      int maxi = 0;
      int noOfChairs = 0;

      for (int i = 0; i < n;i++)
      { 
        if(s[i]=='E')
        {
          noOfChairs = noOfChairs + 1;
          maxi = max(maxi, noOfChairs);
        }
        else 
        {
          noOfChairs = noOfChairs-1;
        }
      }

      return maxi;
    }
};


int main()
{
  string s;
  cin >> s;
  Solution obj;
  int ans = obj.minimumChairs(s);
  cout << ans << endl;
  return 0;
}