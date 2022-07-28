#include<bits/stdc++.h>
using namespace std;
 vector<int> countSort(int n,vector<int> &v,int max)
 {
    int countArr[max],countPlus[max];
    vector<int> ans(n);
    for(int i = 0; i <max; i++)    
    {
      countArr[v[i]]++; 
    }
    //for countPlus
    for(int i = 0; i < max; i++)
    {
        countPlus[i] = countPlus[i-1]+countArr[i];
    }
    //printing output          
    for(int i=0;i<max;i++)
    {
        cout<<countPlus[i]<<" ";
    }
    //insertin in array ans            
    for(int i=0;i<n;i++)
    {
        if(countPlus[i]> 0)
        {
           ans.push_back(i);  
           countPlus[i]--;
        }
    }
    return ans;
    
 }

int main()
{
 int n;cin>>n;
 int maxi=0;
 vector<int> v(n);
 for(int i = 0; i < n; i++)
 {
     int a;cin>>a;
     v.push_back(a);
    //  maxi = *max(v.begin(),v.end());
 }
 vector<int> ans = countSort(n,v,maxi);
 for(int i = 0; i<ans.size(); i++)
 {
     cout<<ans[i]<<" ";
 }


  return 0;
}