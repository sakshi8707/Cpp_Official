#include<bits/stdc++.h>
using namespace std;

  bool checkPresent(int k,vector<int> &nums)
  {
      for(int i = 0; i < nums.size();i++)
      {
         if(nums[i] == k)
         {
             return true;
             break;
         }
      }
      return false;
  }

//   vector<int>
  void findDisappearedNumbers(vector<int>& nums,int n) 
  {
             vector<int> no;
             for(int i = 1; i <= n;i++) 
             {
                 if(checkPresent(i,nums)==false)
                 {
                    //  no.push_back(i);
                    cout<<i<<" ";
                 }
                //  else
                //  {
                //      continue;
                //  }
             }
            //  return no;
    }

int main()
{
 int n;cin>>n;
vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
      int x;cin>>x;
      v.push_back(x);
  }
  findDisappearedNumbers(v,n);
  return 0;
}