#include<bits/stdc++.h>
using namespace std;
/*input
5
64 25 12 22 11
output

*/
class Solution{
  public:
  vector<int> selectionSort(vector<int>& nums , int n)
  {
    // int n= nums.size();
    int mini_idx;
    for(int i=0;i<n-1;i++)
    {
      mini_idx=i;
      for(int j=i+1;j<n;j++)
      {
        if(nums[j]<nums[mini_idx])
        {
          mini_idx = j;
        }
      }
      // swap(nums[mini_idx],nums[i]);
    }
    return nums;
  }
};

int main()
{
  int n;cin>>n;             
   vector<int> nums;
   for(int i=0;i<n;i++)
   {
    int a;cin>>a; 
    nums.push_back(a);
   }
   Solution obj;
   vector<int> ans = obj.selectionSort(nums,n);
   for(int i=0;i<ans.size();i++)
   {
     cout<<ans[i]<<" ";
   }

  return 0;
}