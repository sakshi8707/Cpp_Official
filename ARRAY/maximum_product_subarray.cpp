#include<bits/stdc++.h>
using namespace std;
class Solution { 
public: 
    int maxProduct(vector<int> nums) {
        int currProduct = 1,maxProduct = 0;
        for(int i=0; i<nums.size(); i++)
        {
            currProduct = 1;
            for(int j=i;j<nums.size();j++)
            {
               if(nums[j]<0)
               {
                   currProduct = 1;
               }
               else
               {
                   currProduct =currProduct * nums[j];
                   if(currProduct > maxProduct)
                   {
                       maxProduct = currProduct;
                   }
               }
            }
        }
        // if(nums.size()==1 )
        // {
        //     return nums[0];
        // }
        // int productSum = 1,maxProduct=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(productSum==0)
        //     {
        //         productSum = 1;
        //     }
        //     productSum = productSum*nums[i];
        //     if(productSum > maxProduct)
        //     {
        //         maxProduct = productSum;
        //     }
        //     else if(maxProduct<0)
        //     {
        //         maxProduct =0;
        //     }
        // }
        return maxProduct;
    }
};

int main()
{
 int n;cin>>n;          
   vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        int a;cin>>a;     
        v.push_back(a);
    }
    Solution obj;
    int ans = obj.maxProduct(v);    
    cout<<ans<<endl; 

  return 0;
}