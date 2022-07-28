#include<bits/stdc++.h>
using namespace std;
/*
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
6
5 7 7 8 8 10
8-
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n = nums.size();
        vector<int> v;
        vector<int> f(-1);
        if(nums.empty && target == 0)
        {
            return f;
        }
     for(int i=0;i<nums.size();i++)
     {
         if(target==nums[i])
         {
          v.push_back(i);   
         }
     }
        vector<int> ans;
        if(v.empty())
        {
            return f;
        }
     int max = *max_element(v.begin(),v.end());
     int min = *min_element(v.begin(),v.end());      
      ans.push_back(min);
      ans.push_back(max);
        return ans;
    }
};

int main()
{
 int n;cin>>n;
 int target;
 vector<int> v(n);
 for(int i= 0; i<n;i++)
 {e
     int a;cin>>a;    
     v.push_back(a);
 }
 cin>>target;
  Solution obj;
  vector<int> ans = obj.searchRange(v,target);
  for(int i=0; i<n;i++)
  {
    cout<<ans[i]<<" ";
  }
  return 0;
}