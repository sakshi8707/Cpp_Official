#include<bits/stdc++.h>
/*
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
*/
using namespace std;
class Solution {
public:
    bool find(int a,int f,vector<int> &nums)
    {
        for(int i=1;i<=a;i++)
        {
            if(nums[i]==f)
            {
                return true;
                break;
            }
        }
        return false;
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int mini=0,maxi=0;
     for(int i=0;i<nums.size();i++)
     {
         mini = min(mini,nums[i]);
         maxi = max(maxi,nums[i]);
     }
    vector<int> v;

     for(int i=1;i<=maxi;i++)
     {
          if(find(maxi,i,nums)==false)
          {
             v.push_back(i);
          }
     }
        return v;
    }
};

int main()
{
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    int a;cin>>a;
    v.push_back(a);
  }  
 Solution obj;
 vector<int> ans = obj.findDisappearedNumbers(v);
 for(int i=0;i<ans.size();i++)
 {
     cout<<ans[i]<<" ";
 }
  return 0;
}