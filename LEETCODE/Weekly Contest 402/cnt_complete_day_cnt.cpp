#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
         long long cnt = 0;
         int n = hours.size();
         for(int i=0;i<n;i++)
         {
            if((24-hours[i])%24)
            {
                cnt++;
            }
         }
         return cnt;
    }
};


int main()
{

  return 0;
}