#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans;
       for(int i=0; i<n;i++)
       {
           int mark = abs(nums[i])-1;
           if(nums[mark]>0)
           {
            //  nums[mark] *=-1;
            // -1*nums[mark];
            nums[mark] = -nums[mark];
           }
       }
       // after marking idexes
       for(int i=0; i<n;i++)
       {
         if(nums[i]>0)
         {
           ans.push_back(i+1);
         }
       }
       return ans;
    }
};

int main()
{
 int n;cin>>n;
 vector<int> v(n);
 for(int i= 0; i<n;i++)
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