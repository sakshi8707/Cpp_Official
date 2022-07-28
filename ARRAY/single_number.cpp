#include<bits/stdc++.h>
using namespace std;
/*
3
2 2 1 
 
Input: nums = [2,2,1]
Output: 1
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n<=0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};
int main()
{
 int n;cin>>n;          
 vector<int> nums(n);             
 for(int i=0;i<n;i++)
 {
  int a;cin>>a;
  nums.push_back(a);
 }
 Solution obj;
 int ans = obj.singleNumber(nums);
 cout<<ans<<endl;

  return 0;
}