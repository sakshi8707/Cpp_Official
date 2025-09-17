#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void findSubset(int idx , vector<int> ds ,  vector<vector<int>>& ans , vector<int>& nums)
    {
        ans.push_back(ds);
        for(int i=idx;i<nums.size();i++)
        {
            if(i!=idx && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            findSubset(i+1 , ds , ans  , nums);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin() , nums.end());
        findSubset(0 , ds , ans , nums);
        return ans;
    }
};


int main(){
    
    return 0;
}