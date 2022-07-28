#include<bits/stdc++.h>
using namespace std;
 int longestConsecutive(vector<int>& nums) 
 {
     set<int> s;
     int len = 0;
     for(auto num : nums)
     {
         s.insert(num);
     }

     for(auto num : nums)
     {
         if(!s.count(num-1))
         {
             int count = 1;
             while(s.count(num+1))
             {
                 num++;
                 count++;
             }
             len = max(len, count);
         }
     }
     return len;
 }
int main()
{
vector<int> nums;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    nums.push_back(x);
}
cout<<longestConsecutive(nums)<<endl;  

  return 0;
}



//    1 3 -1 -3 5 3 6 7
