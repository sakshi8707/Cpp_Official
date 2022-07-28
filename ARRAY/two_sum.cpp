#include<bits/stdc++.h>
using namespace std;
/*
INPUT
4
2 7 11 15           
9
OUTPUT

/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
      vector<int> ans;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(nums[i]+nums[j]==target)
          {
            ans.push_back(i);
            ans.push_back(j);
          }
        }
      }  
      return ans;
    }
};

int main()
{
 int N;cin>>N;              
 vector<int> nums(N);
 for(int i=0;i<N;i++)
 {
  int a;cin>>a;
  nums.push_back(a);
 }
 int target;cin>>target;
 Solution obj;
 vector<int> ans = obj.twoSum(nums,target);
 for(int i=0;i<ans.size();i++)
 {
  cout<<ans[i]<<" ";
 }
 cout<<endl;


  return 0;
}