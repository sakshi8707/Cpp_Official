#include<bits/stdc++.h>
using namespace std;

  class Solution {
  public:
      int numIdenticalPairs(vector<int>& nums) {
          int n = nums.size();
          int count=0;
          for(int i=0;i<n;i++) 
          {
            for(int j=0;j<n;j++) 
            {
              if(nums[i]==nums[j]||i<j)  
              {
                count++;
              }
            }
          }
          return count;
      }
  };

int main()
{
  int n;cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++)
  {
    int a;cin>>a;
    nums.push_back(a);
    
  }
  Solution obj;
  int ans = obj.numIdenticalPairs(nums);
  cout<<ans<<endl;
  return 0;
}