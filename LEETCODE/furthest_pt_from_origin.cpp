#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
      // int n = moves.size();
      // string temp;
      // for (int i = 0; i < n;i++)
      // {
      //   if(moves[i]=="_")
      //   {
      //     temp += "R";
      //   }
      //   else
      //   {
      //     temp += moves[i];
      //   }
      // }
      int cnt = 0;
      for (int i = 0; i < moves.size();i++)
      {
            if(moves[i]=='R')
            {
          cnt++;
            }
            else if(moves[i]=='L')
            {
          cnt--;
            }
            else if(moves[i]=='_' && moves[i-1]=='R')
            {
              cnt++;
            }
            else
            {
              cnt--;
            }
      }
      if(cnt<0)
      {
            cnt = -(cnt);
      }
      return cnt;
    }
};


int main()
{

  return 0;
}