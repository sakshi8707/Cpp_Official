#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
     if(nums.size() < 1)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans ;
        for(int i=0;i<n+1;i++)
        {
            if(i!=nums[i])
            {
               return i;
            }
        }
        return n;
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
 int ans = obj.missingNumber(nums);
 cout<<ans<<endl;

  return 0;
}