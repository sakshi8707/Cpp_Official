#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // void swap(int a,int b)
    // {
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    vector<int> sortArray(vector<int>& nums) {
     int temp;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] > nums[j])
                {
              swap(nums[i],nums[j]);
                }
            }
        }
        return nums;
    }
};

int main()
{
  int n;cin>>n;
  vector<int> nums(n);
  for(int i= 0; i<n;i++)
  {
    int a;cin>>a;
    nums.push_back(a);
  }
 Solution obj;
 vector<int> ans = obj.sortArray(nums);
 for(int i=0;i<ans.size();i++)
 {
   cout<<ans[i]<<" ";
 }
  return 0;
}