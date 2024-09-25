#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countWays(vector<int>& nums) {
        int n = nums.size();
        int sum = 0,i=0;
        int cnt=0;
        while(i<n)
        {
            //first condition 
            if((nums[i]>sum))
            {
                i++;
            }
            else if((nums[i]+sum)>nums[i])
            {
                sum += nums[i];
                i++;
                cnt++;
            }
             else if((nums[i]+sum)>=nums[i] && i==0)
            {
                sum += nums[i];
                i++;
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