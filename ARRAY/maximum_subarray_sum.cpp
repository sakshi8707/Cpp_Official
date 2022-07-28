#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)       {
      int n = nums1.size();
      int m = nums2.size();
       double ans;
      vector<int> sorted;
 for(int i=0; i<m;i++)
 {
   sorted.push_back(nums2[i]);
 }
       
 for(int i=0;i<n;i++)
 {
   sorted.push_back(nums1[i]);
 }
       
 sort(sorted.begin(),sorted.end());
       
  int s = sorted.size();
   if(s%2 == 0)
   {
    int k = s/2;
    ans = (sorted[k]+sorted[k-1])/2.0;
   }
   else
   {
       int k = s/2;
        ans = sorted[k];
   }
  return ans;
    }

  
int main()
{
int n1,n2;
cin>>n1>>n2;
  vector<int> nums1;
  for(int i=0;i<n1;i++)
  {
      int x;cin>>x;
      nums1.push_back(x);
  }
  vector<int> nums2;
  for(int i=0;i<n1;i++)
  {
      int x;cin>>x;
      nums2.push_back(x);
  }
double ans = findMedianSortedArrays(nums1,nums2);
cout<<ans<<endl;
  return 0;
}