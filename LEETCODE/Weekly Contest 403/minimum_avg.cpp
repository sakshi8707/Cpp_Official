#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<double> avg;
       
        for(int i=0;i<n/2;i++)
        {
            double mid = (nums[i]+nums[n-1-i])/2.0;
            avg.push_back(mid);
            
        }
         double mini =  DBL_MAX;
        
          for(int i=0;i<avg.size();i++)
          {
              if(avg[i]<mini)
              {
                  mini = avg[i];
              }
          }
        return mini;
              
        
    }
};


int main()
{

  return 0;
}