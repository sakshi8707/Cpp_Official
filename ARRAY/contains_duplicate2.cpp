#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       int n = nums.size();
      //  int j=1;                 
       for(int i=0;i<n;i++)
       {  
        for(int j=i+1;j<n;j++)
        {
          if((nums[i]==nums[j])&&(abs(i-j)<=k))
          {
            return true;
          }
        }
       }        
       return false;
    }
//better approch------------------------------------------------------------------------->
map<int,int> containsNearbyDuplicateM(vector<int>& nums, int k) {
     int n = nums.size();
     map<int,int> m;
     for(int i=0;i<n;i++)
     {
      int a;cin>>a;
      m[a]++;
     }
      return m;
    }
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
  int ans = obj.containsNearbyDuplicate(nums,k);
  if(ans==true)
  {
    cout<<"YES"<<endl;       
  }
  else
  {
    cout<<"NO"<<endl;
  }
  // Solution obj;
  map<int,int> m = obj.containsNearbyDuplicateM(nums,k);
  for(auto it : m)
  {
    cout<<it.first<<" "<<it.second<<" ";
  }
  cout<<endl;
  

  return 0;
}