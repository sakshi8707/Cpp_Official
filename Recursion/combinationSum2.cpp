#include<bits/stdc++.h>
using namespace std;



void findCombination(int idx , vector<int>& candidates , int target , vector<vector<int>>& ans, vector<int> ds){
     
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }

    for(int i=idx;i<candidates.size();i++)
    {
        //if duplicatees appear
        if(idx<i && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;

        //main recursive call
        ds.push_back(candidates[i]);
        findCombination(i+1,candidates,target-candidates[i],ans,ds);
        ds.pop_back();
    }
}


class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     vector<vector<int>> ans;
     vector<int> ds;
     sort(candidates.begin() , candidates.end());
     findCombination(0 , candidates , target , ans , ds);
     return ans;
    }
};

int main(){
    
    return 0;
}