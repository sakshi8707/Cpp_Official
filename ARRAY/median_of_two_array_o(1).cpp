#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    //   if(nums1.size() >nums2.size())
    //       return findMedianSortedArrays(nums2,nums1);
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int high = n1;
        int low = 0;
        while(low<=high)
        {
           int cur1 = (low+high)>>1; 
           int cur2 = ((n1+n2+1)/2)-cur1;
            
            int left1 = cur1==0?INT_MIN : nums1[cur1-1];
            int left2 = cur2==0?INT_MIN : nums2[cur2-1];
            
            int right1 = cur1==n1?INT_MAX : nums1[cur1];
            int right2 = cur2==n2?INT_MAX : nums2[cur2];
            
            if(left1<=right2 && left2<=right1)
            {
                if((n1+n2)%2==0)
                {
                   return  (max(left1,left2)+min(right1,right2))/2.0;
                }
                else
                {
                    return  (max(left1,left2));
                }
            }
           
             else if(left1>right2)
            {
                high = cur1-1;
            }
            else
            {
                low = cur1+1;
            }
            }
    
        return 0.0;
}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
int n;
cin>>n;
for(int i=0;i<n;i++)
 {
     int x;cin>>x;
     nums1.push_back(x);
 }
int m;
cin>>m;
for(int j=0;j<m;j++)
 {
     int y;cin>>y;
     nums2.push_back(y);
 }

// double ans = findMedianSortedArrays(nums1,nums2);
// cout<<ans<<endl;
cout<<findMedianSortedArrays(nums1,nums2);
  return 0;
}