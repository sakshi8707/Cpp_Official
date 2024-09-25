#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
      int n = nums.size();
      int c = nums[0] % 2;
      int odd = 0, even = 0,both=0;
      for (int i = 0; i < n;i++)
      {
         if(nums[i]%2==0)
         {
          
           even++;
         }
         else
         {
           
           odd++;
         }
         if(nums[i]%2==c)
         {
           both++;
           c = 1 - c;
         }
      }

      return max(both, max(even, odd));
    }
};


int main()
{
  int n;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    nums.push_back(a);
  }
  Solution obj;
  int ans = obj.maximumLength(nums);
  cout << ans << endl;

  return 0;
}