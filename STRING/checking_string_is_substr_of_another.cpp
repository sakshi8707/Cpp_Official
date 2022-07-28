//CALCULATING THE INDICES OF OCCURENCE OF STRING S IN T = KMP ALOGRITHM 
#include<bits/stdc++.h>
using namespace std;
// function for finding long prefix and suffix as 
vector<int> PrefixFuction(string str)
{
int n = (int)str.length();
vector<int> ans(n);
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
     if(str.substr(0,j)==str.substr(i-j+1,j))
     ans[i] = j;
    }
}return ans;
}


int main()
{
    string str;
    cin>>str; // Skip
    vector<int> ans = PrefixFuction(str);
    for(auto i : ans)
{
    cout<<i<<" ";
}


  return 0;
}