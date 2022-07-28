
#include<bits/stdc++.h>
using namespace std;

//  vector<int> findDuplicates(int n,vector<int>& nums) {
//            vector<int> count(n,0);
//            vector<int> ans;
//            for(int i = 0; i <=n; i++)
//            {
//              count[nums[i]]++;
//              if(count[nums[i]]==2)
//               {
//                 int a = nums[i];
//                 ans.push_back(a);
//               }
//            }
//            return ans;
// }   


int main()
{
 int n;cin>>n;    
 int arr[n];
 int brr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 int count[n];
 for(int i=0;i<n;i++)
 {
   count[i] = 0;
 }
 for(int i=0;i<n;i++)
 {
   count[arr[i]]++;
 }
 cout<<"count of arrys"<<endl;
 for(int i=0;i<n;i++)
 {
  cout<<count[i]<<" ";
 }

 vector<int> v;
 for(int i=0;i<n;i++)
 {
   if(count[i]==2)
   {
      brr[i] = i;
      v.push_back(i);
   }
 }
 cout<<"\n after  count"<<endl;
 for(int i=0;i<2;i++)
 {
    // cout<<brr[i]<<" ";
    cout<<v[i]<<" ";
 }

 return 0;
}