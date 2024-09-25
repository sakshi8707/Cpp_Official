#include<bits/stdc++.h>
using namespace std;

// **brute approch**
// **TC : o(n^3)

//**better approch**
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        int n = nums.size();
        //inserting all values in map
        for (int i = 0; i < n;i++)
        {
          mp[nums[i]] = i;
        }
        //finding third element

        for (int i = 0; i < n;i++)
        {
          vector<int> temp;
          for (int j = i + 1; j < n;j++)
          {
            int a = nums[i] - nums[j];
            if(mp.count(a) && mp[a]!=j)
            {
              // temp.push_back(i, j, a);
              temp.push_back(i);  
              temp.push_back
            }
          }
        }
    }
};

int main(){
    


return 0;
}