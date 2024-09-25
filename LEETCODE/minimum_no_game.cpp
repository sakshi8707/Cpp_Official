#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        
        int n = nums.size();
        int alice;int bob;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        
        for(int i = 0;i<n;i+=2)
        {
            alice = nums[i];
            bob  = nums[i+1];
            ans.push_back(bob);
            ans.push_back(alice);
        }
        
        return ans;
    }
};

int main(){
    


return 0;
}