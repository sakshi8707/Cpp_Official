#include<bits/stdc++.h>
using namespace std;
// INPUT
// 10
// 0 0 1 1 1 2 2 3 3 
// OUTPUT
    
class Solution {
public:
//naive approch-------------------->
    // vector<int> removeDuplicates(vector<int>& nums) {
    //  int n=nums.size();
    //  set<int> s;
    //     for(int i=0;i<n;i++)
    //     {
    //         s.insert(nums[i]);
    //     }
    //    int a = s.size();
    //     int i=0;
    //     for(auto it:s)
    //     {
    //        nums[i] = it;
    //         i++;
    //     }
        
    //     return nums ;
        
    // }
//best approch-------------------->
  vector<int> removeDuplicates(vector<int>& nums)
  {
    int n = nums.size();
  //   int i=0,j=i+1;
  //   while(i<=n)
  //   {
  //      if(nums[i]==nums[j])
  //      {
  //       j++;
  //      }
  // // else if(nums[i]!=nums[j])
  // // {
  //   swap(nums[i+1],nums[j]);
  //   i++;j++;
  // // }
  if(nums.size()==0)
  {
  return nums;}

  int i=0;
  for(int j=0;j<n;j++)
  {
    if(nums[i]!=nums[j])
    {
      i++;
      nums[i] = nums[j];
    }
  }
  // return i+1;
  return nums;
    }
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
  // int ans = obj.removeDuplicates(nums);
  // cout<<ans<<endl;
  vector<int> ans = obj.removeDuplicates(nums);
  for(int i=0;i<ans.size();i++)
  {
    // cout<<ans[i]<<" ";
     cout<<ans[i]<<" ";
  }

  return 0;
}