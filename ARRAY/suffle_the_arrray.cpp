#include<bits/stdc++.h>
using namespace std;

/*   
6
2 5 1 3 4 7                
3              
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      int N = nums.size();
      vector<int> even;
      vector<int> odd;
      for(int i=0;i<n;i++)    //i=0 to i<3                             
      {
        even.push_back(nums[i]);
      }
      int a = 2*n;
      for(int i=n;i<a;i++)    //i=3 to i<6
      {
        odd.push_back(nums[i]);
      }
      //after making two array          
      int k=0,j=0;
      vector<int> ans;                                      
      for(int i=0;i<N;i++) 
      {
          if(i%2==0)
          {
            // ans[i] = even[k];
            ans.push_back(even[k]);
            k++;                                 
          }
          else
          {
            // ans[i] = odd[j];
            ans.push_back(odd[j]);
            j++;    
          }
      }
      return ans;                
    }
};

int main()
{
 int N;cin>>N;              
 vector<int> v(N);
 for(int i=0;i<N;i++)
 {
  int a;cin>>a;
  v.push_back(a);
 }
 int n;cin>>n;
 Solution obj;
 vector<int> ans = obj.shuffle(v,n);
 for(int i=0;i<ans.size();i++)
 {
  cout<<ans[i]<<" ";
 }
 cout<<endl;

  return 0;
}