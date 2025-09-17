#include<bits/stdc++.h>
using namespace std;


class Solution {
    void findCombination(int idx  , int target ,vector<int>& candidate ,vector<vector<int>>& ans , vector<int> ds ){

        //base case
        if(idx == candidate.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }

        //mainn return condition
        if(target>=candidate[idx]){
            ds.push_back(candidate[idx]);
            findCombination(idx , target-candidate[idx] ,candidate, ans , ds);
            ds.pop_back();
        }

         findCombination(idx+1 , target-candidate[idx] ,candidate, ans , ds);
    }


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(0 , target , candidates , ans ,ds);
        return ans;
    }
};



int main(){
    
    return 0;
}