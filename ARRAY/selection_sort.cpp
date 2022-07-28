#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:           
void swap(int a,int b)      
{
  int temp; 
  temp = a;
  a = b;
  b = temp;
}
vector<int> SelectionSort(vector<int> nums,int n)
{
  int mini_idx;
  for(int i=0;i<n-1;i++)
  {
    mini_idx = i;                    
    for(int j=i+1;j<n;j++)
    {
      if(nums[j]<nums[mini_idx])
      {
        mini_idx = j;
      }
    }
    swap(nums[mini_idx],nums[i]);
  }
  return nums;
}
};

int main()
{
 int n;cin>>n;
 vector<int> nums(n);
 for(int i=0;i<n;i++)
 {
  int a;cin>>a; 
  nums.push_back(a);
 }
 Solution obj;
 vector<int> ans = obj.SelectionSort(nums,n);
 for(int i=0;i<ans.size();i++)
 {
  cout<<ans[i]<<" ";
 }
  return 0;
}