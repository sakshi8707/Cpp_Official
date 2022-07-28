#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
     int n = nums.size();                  
     int count=0; 
      vector<int> ans;
      for(int i=0;i<n;i++)
      {
  
        for(int j=i+1;j<n;j++)
        {
          if(nums[i]>nums[j])
          {
            count++;
          }
        }
        ans.push_back(count);
        count=0;
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
 Solution obj;
 vector<int> ans = obj.countSmaller(nums);
 for(int i=0;i<ans.size();i++)
 {
  cout<<ans[i]<<" ";
 }
 cout<<endl;

  return 0;
}