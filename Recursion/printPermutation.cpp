

#include<bits/stdc++.h>
using namespace std;

// TC: 
// SC:

class Solution {
  private:
    void recurPermute(int idx ,  vector<int>& nums ,  vector<int> ds , vector<vector<int>>& ans){
          
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=idx;i<nums.size();i++)
        { 

            swap(nums[idx] , nums[i]);
            recurPermute(idx+1,nums,ds,ans);  
            swap(nums[idx] , nums[i]);
        }
    }

  public:
  vector<vector<int>> permutation(vector<int>& nums)
  {
       vector<int> ds = nums;
       vector<vector<int>> ans;
       recurPermute(0 , nums , ds , ans);
       return ans;
  }

}

int main(){
    
    return 0;
}