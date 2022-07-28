#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int n = candies.size();
      int a =   *max_element(candies.begin(),candies.end());      
      // 0=false , 1=true           
      vector<bool> ans;
      for(int i=0;i<n;i++) 
      {
          if(candies[i]+extraCandies>=a) 
          {
            ans.push_back(true);
          }
          else
          {
            ans.push_back(false);
          }
      }
      return ans;
    }
};

int main()
{
  int n;cin>>n;          
 vector<int> candies(n);             
 for(int i=0;i<n;i++)
 {
  int a;cin>>a;
  candies.push_back(a);
 }
 int extraCandies;
 cin>>extraCandies;
 Solution obj;
 vector<bool> ans  = obj.kidsWithCandies(candies, extraCandies);

 for(int i=0;i<ans.size();i++)
 {
  if(ans[i]==true)
  {
    cout<<"true"<<" ";
  }
  else
  {
    cout<<"false"<<" ";
  }
 }


  return 0;
}