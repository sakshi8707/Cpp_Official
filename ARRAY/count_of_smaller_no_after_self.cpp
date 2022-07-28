#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
      int n = nums.size();                  
      int count=0; 
      vector<int> ans;
      for(int i=0;i<n;i++)
      {

        for(int j=i+1;j<n;j++)
        {
          if(nums[i]>nums[j])
          {
            count++;
          }
        }
        ans.push_back(count);
        count=0;
      }
      return ans;
    }
};

int main()
{
 

  return 0;
}