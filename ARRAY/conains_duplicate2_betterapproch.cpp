#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     int n = nums.size();
    //  vector<pair<int,int> > v;            
    //  for(int i=0;i<n;i++) 
    //  {   
    //   v.push_back(make_pair(nums[i],i));
    //  }
    //  sort(v.begin(),v.end());
    //  for(int i=0;i<v.size();i++)
    //  {
    //   if((v[i].first==v[i+1].first) && (abs(v[i].second-v[i+1].second)<=k))
    //   {
    //     return true;
    //   }
    //  }              
    //  return false;
    // }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++) 
    {
      m[nums[i]] = i;
    }
    if(!m.count(nums[i]))
    {
            m[nums[i]] = i;
    }
    else
    {
      if(abs(m[nums[i]]-i)<=k)
      {
        return true;
      }
      else
      {
        // m[nums[i]] = i;
      }
    }
    return false;
   
};

int main()
{
 int n;
  cin>>n;
  int k;cin>>k;
  vector<int> nums(n);
  for(int i=0;i<n;i++)
  {
    int a;cin>>a; 
    nums.push_back(a);
  }
  Solution obj;
  vector<pair<int,int> > ans = obj.containsNearbyDuplicate(nums,k);
  for(auto it : ans)
  {
    cout<<it.first<<" "<<it.second<<" ";

  }
  return 0;
}